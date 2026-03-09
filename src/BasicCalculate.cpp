#include "BasicCalculate.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>


//allways remember to clear buffer and operator buffer
//as logic depends on both
//Negative sign will stay in opBuffer unless user enter a number so they can append
// if negative is beign used as operator it will see if there is another operator already in vector
//Expression vector is refered as memory couple of times in this program

/*
memory(expression)	opBuffer    buffer     Meaning
Empty               Empty       Empty      All are empty ---
Empty               Empty       Filled     Only buffer is filled ---
Empty               Filled      Empty      Only opBuffer is filled ---
Empty               Filled      Filled     opBuffer and buffer are filled ---
Filled              Empty       Empty      Only memory is filled ---
Filled              Empty       Filled     memory and buffer are filled ---
Filled              Filled      Empty      memory and opBuffer are filled ---
Filled              Filled      Filled     All are filled ---
*/

BasicCalculations::BasicCalculations(MainWindow* parent) : mainWindow(parent),
    error("error_log.txt"), buffer(""), opBuffer(""), concatenatedBuffers("") {}

void BasicCalculations::DisplayMessage(const QString &message){
    QMessageBox::StandardButton reply = QMessageBox::critical(mainWindow,"Error!",message,QMessageBox::Abort|QMessageBox::Cancel);
    if(reply == QMessageBox::Abort){

        QApplication::exit();
    }else{
        QMessageBox::warning(mainWindow,"Warning","You have clicked 'Cancel'. As a result, the application may encounter unexpected behavior.",QMessageBox::Ok);
    }
}

void BasicCalculations::updateBuffer(const QString value){ //to append new values like
    // '3'+'3' = '33'  or  '-' + '3' = '-3'
    buffer += value;
}

void BasicCalculations::update_Operator_Buffer(const QString op){// to store -ve operator to represent
    //a number as negtive if needed based on some rules
    //may be used for other stuff in near future
    opBuffer += op;
}

void BasicCalculations::clearOpeartor_Buffer(){ // to clear Operator buffer
    opBuffer  = "";
}

void BasicCalculations::clearBuffer(){ //to clear buffer
    buffer = "";
}

void BasicCalculations::concatenateBuffers(){
    concatenatedBuffers = opBuffer + buffer;
}

void BasicCalculations::clearConcatenatedBuffer(){
    concatenatedBuffers = "";
}

void BasicCalculations::addIntoMemory(const QString &op){
    try {
    if(op != "=")
    {
    if(!(opBuffer.isEmpty()) && !(buffer.isEmpty())){
       concatenateBuffers();
        exp.type = token::NUMBER;
        exp.magnitude = concatenatedBuffers;
        exp.magnitudeDetails.sign = token::YES;
        expression.push_back(exp);

        exp.type = token::OPERATOR;
        exp.magnitude = op;
        exp.magnitudeDetails.sign = token::NOT_APPLICABLE;
        expression.push_back(exp);

        clearConcatenatedBuffer();
        clearBuffer();
        clearOpeartor_Buffer();
    }else if(!(buffer.isEmpty()) && opBuffer.isEmpty()){
        exp.type = token::NUMBER;
        exp.magnitude = buffer;
        exp.magnitudeDetails.sign = token::NO;
        expression.push_back(exp);

        exp.type = token::OPERATOR;
        exp.magnitude = op;
        exp.magnitudeDetails.sign = token::NOT_APPLICABLE;
        expression.push_back(exp);
        clearBuffer();
    }else{
        throw Throw{"Logic Error: Unexpected state reached ",QString::number(__LINE__)};
    }
    }else{
    // =
        if(!(buffer.isEmpty()) && opBuffer.isEmpty() ){
            exp.type = token::NUMBER;
            exp.magnitude = buffer;
            exp.magnitudeDetails.sign = token::NO;
            expression.push_back(exp);
            clearBuffer();
        }else if(!(buffer.isEmpty()) && !(opBuffer.isEmpty())){
            concatenateBuffers();
            exp.type = token::NUMBER;
            exp.magnitude = concatenatedBuffers;
            exp.magnitudeDetails.sign = token::YES;
            expression.push_back(exp);
            clearConcatenatedBuffer();
            clearBuffer();
            clearOpeartor_Buffer();
        }else{
            throw Throw{"Logic Error: Unexpected state reached ",QString::number(__LINE__)};
        }

}
    }catch(const Throw &e){
        UpdateErrorInfo(e.description,"BasicCalculate",e.line_Number);
        error.errorLogging(ErrorC);
        DisplayMessage(e.description);
    }catch(const std::exception &e){
        UpdateErrorInfo(QString(e.what()),"BasicCalculate",QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage(e.what());
    }
    catch (...) {
        UpdateErrorInfo("Unknown non-Qt exception", "BasicCalculate", QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage("Unknown non-Qt exception");
    }
}


//This function manages operation when an operator is pressed
bool BasicCalculations::Operators(const QString op){
    try{
    if(op == "-"){ //To manage all functions related to -ve sign
        if(expression.isEmpty() && opBuffer.isEmpty() && buffer.isEmpty()){ //when -ve sign is pressed before anything
            update_Operator_Buffer(op);
            return true;
        }else if(expression.isEmpty() && !(opBuffer.isEmpty()) && buffer.isEmpty()){
            return false;
        }else if(expression.isEmpty() && !(opBuffer.isEmpty()) && !(buffer.isEmpty())){
            //concatenate opBuffer and Buffer then add both sum and then op in memory
            addIntoMemory(op);
            return true;
        }else if(expression.isEmpty() && opBuffer.isEmpty() && !(buffer.isEmpty())){
            //put buffer and then op in memory
            addIntoMemory(op);
            return true;
        }else if(!(expression.isEmpty())&& opBuffer.isEmpty() && buffer.isEmpty()){
            if(expression.back().type == token::OPERATOR){
                update_Operator_Buffer(op);
                return true;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};
            }
        }else if(!(expression.isEmpty())&& opBuffer.isEmpty() && !(buffer.isEmpty()) ){
            if(expression.back().type == token::OPERATOR  ){
                //put buffer and then op
                addIntoMemory(op);
                return true;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};
            }

        }else if(!(expression.isEmpty())&& !(opBuffer.isEmpty()) && buffer.isEmpty() ){
            if(expression.back().type == token::OPERATOR  ){
                return false;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};
            }

        }else if(!(expression.isEmpty())&& !(opBuffer.isEmpty()) && !(buffer.isEmpty())){
            if(expression.back().type == token::OPERATOR  ){
                // concatenate opbuffer and buffer then put sum in memory and than op
                addIntoMemory(op);
                return true;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};

            }

        }else{
            //error not expected
            throw Throw{"Logic Error: Unexpected state reached",QString::number(__LINE__)};
        }
    }else{ //to manage all function related to +, *, /
        if(expression.isEmpty() && opBuffer.isEmpty() && buffer.isEmpty()){ //when -ve sign is pressed before anything
            return false;
        }else if(expression.isEmpty() && !(opBuffer.isEmpty()) && buffer.isEmpty()){
            return false;
        }else if(expression.isEmpty() && !(opBuffer.isEmpty()) && !(buffer.isEmpty())){
            //concatenate opBuffer and Buffer then add both sum and then op in memory
            addIntoMemory(op);
            return true;
        }else if(expression.isEmpty() && opBuffer.isEmpty() && !(buffer.isEmpty())){
            //put buffer and then op in memory
            addIntoMemory(op);
            return true;
        }else if(!(expression.isEmpty())&& opBuffer.isEmpty() && buffer.isEmpty()){
            if(expression.back().type == token::OPERATOR  ){
                return false;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};

            }
        }else if(!(expression.isEmpty())&& opBuffer.isEmpty() && !(buffer.isEmpty()) ){
            if(expression.back().type == token::OPERATOR  ){
                //put buffer and then op
                addIntoMemory(op);
                return true;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};
            }

        }else if(!(expression.isEmpty())&& !(opBuffer.isEmpty()) && buffer.isEmpty() ){
            if(expression.back().type == token::OPERATOR  ){
                return false;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};

            }

        }else if(!(expression.isEmpty())&& !(opBuffer.isEmpty()) && !(buffer.isEmpty())){
            if(expression.back().type == token::OPERATOR  ){
                // concatenate opbuffer and buffer then put sum in memory and than op
                addIntoMemory(op);
                return true;
            }else{ //not expected error
                throw Throw{"wrong position in vector",QString::number(__LINE__)};
            }


        }else{ //not expected
            throw Throw{"Logic Error: Unexpected state reached",QString::number(__LINE__)};
        }

}
    }
    catch(const Throw &e){
        UpdateErrorInfo(e.description,"BasicCalculate",e.line_Number);
        error.errorLogging(ErrorC);
        DisplayMessage(e.description);
        return false;
    }catch(const std::exception &e){
        UpdateErrorInfo(QString(e.what()),"BasicCalculate",QString::number(__LINE__));
        DisplayMessage(QString(e.what()));
        return false;
    }
    catch (...) {
        UpdateErrorInfo("Unknown non-Qt exception", "BasicCalculate", QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage("Unknown non-Qt exception");
        return false;
    }
}

void BasicCalculations::UpdateErrorInfo(const QString error,const QString errorFile,const QString lineNumber){
    //function used to update error info struct
    ErrorC.error = error;
    ErrorC.errorFile = errorFile;
    ErrorC.lineNumber = lineNumber;
    ErrorC.buffer = buffer;
    ErrorC.concatenatedBuffers = concatenatedBuffers;
    ErrorC.opBuffer = opBuffer;
    ErrorC.stack = expression;
}


bool BasicCalculations::checkDecimalPoint(){
    if (!(buffer.contains('.')) && !(buffer.isEmpty())) {
        return true;
    }else{
        return false;
    }
}

//next update base case and reduction of conditions


EquationStatus BasicCalculations::equationStatus(){
    try{
    if(expression.isEmpty() && buffer.isEmpty() && opBuffer.isEmpty()){
        return Empty;
    }else if(expression.isEmpty() && buffer.isEmpty() && !(opBuffer.isEmpty())){
        clearOpeartor_Buffer();
        return SyntaxError;
    }else if(expression.isEmpty() && !(buffer.isEmpty()) && opBuffer.isEmpty()){
        return SingleOperand;
    }else if(expression.isEmpty() && !(buffer.isEmpty()) && !(opBuffer.isEmpty())){
        return NegativeSingleOperand;
    }else if(!(expression.isEmpty()) && buffer.isEmpty() && opBuffer.isEmpty() ){
        expression.clear();
        return SyntaxError;
    }else if(!(expression.isEmpty()) && buffer.isEmpty() && !(opBuffer.isEmpty())){
        expression.clear();
        clearOpeartor_Buffer();
        return SyntaxError;
    }else if(!(expression.isEmpty()) &&!(buffer.isEmpty()) && opBuffer.isEmpty() ){
        return ValidExpression;
    }else if(!(expression.isEmpty()) && !(buffer.isEmpty()) && !(opBuffer.isEmpty())){
        return ValidExpression;
    }else{
        throw Throw{"Unknown Error : Unexpected else Reached ",QString::number(__LINE__)};
    }
    }catch(const Throw &e){
        UpdateErrorInfo(e.description,"BasicCalculate",e.line_Number);
        error.errorLogging(ErrorC);
        DisplayMessage(e.description);
        return UnKnown;
    }catch(const std::exception &e){
        UpdateErrorInfo(QString(e.what()),"BasicCalculate",QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage(e.what());
        return UnKnown;
    }
    catch (...) {
        UpdateErrorInfo("Unknown non-Qt exception", "BasicCalculate", QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage("Unknown non-Qt exception");
        return UnKnown;
    }
}

void BasicCalculations::clearAll(){
    expression.clear();
    clearBuffer();
    clearOpeartor_Buffer();
}

// using templates in mind
QString BasicCalculations::calculate(){
    addIntoMemory("=");
    bool is_converted = true;
    bool is_converted_Continuous;
    double number;
    QString op;
    double result = expression[0].magnitude.toDouble(&is_converted);
    try{
    if(!is_converted){
            throw Throw{"Failed to convert QString",QString::number(__LINE__)};
    }

    for(int i = 1; i<expression.size()-1 ; i+=2 ){
        op = expression[i].magnitude;
        number = expression[i+1].magnitude.toDouble(&is_converted_Continuous);
        if(!is_converted_Continuous){
            throw Throw{"Failed to convert QString",QString::number(__LINE__)};
        }

        if(op == "+"){
            result += number;
        }else if(op == "-"){
            result -= number;
        }else if(op == "*"){
            result *= number;
        }else if(op == "/"){//in upcoming update bracket make sure there you handle divide by zero properly
            //brackes will make divide by zero possible in many ways
            if(number == 0){
                expression.clear();
                return "Math Error";}
            result /= number;
        }else{
            throw Throw{"Operation Error",QString::number(__LINE__)};
        }
    }


    if(result < 0){
        buffer = QString::number(abs(result));
        opBuffer = "-";
    }else{
        buffer = QString::number(result);
    }

    expression.clear();

    }catch(const Throw &e){
        UpdateErrorInfo(e.description,"BasicCalculate",e.line_Number);
        error.errorLogging(ErrorC);
        DisplayMessage(e.description);
        return "";
    }catch(const std::exception &e){
        UpdateErrorInfo(QString(e.what()),"BasicCalculate",QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage(e.what());
        return "";
    }
    catch (...) {
        UpdateErrorInfo("Unknown non-Qt exception", "BasicCalculate", QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage("Unknown non-Qt exception");
        return "";
    }
    return QString::number(result);
}


void BasicCalculations::clearSystematically(){ //check it
    try{
    if(expression.isEmpty() && buffer.isEmpty() && opBuffer.isEmpty()){ //working
        //left Intentionally
    }else if(!(expression.isEmpty()) && buffer.isEmpty() && opBuffer.isEmpty()) {
        //memory pop back
        expression.pop_back();
        token temp_Token = expression.back();
        expression.pop_back();

        if(temp_Token.magnitudeDetails.sign == token::YES){
            opBuffer = temp_Token.magnitude.at(0);
            buffer = temp_Token.magnitude.remove(0,1); // Remove 1 character starting at index 0
        }else if(temp_Token.magnitudeDetails.sign == token::NO){
            buffer = temp_Token.magnitude;
        }else{
            throw Throw{"Unknown Error",QString::number(__LINE__)};
        }


    }else if((expression.isEmpty() && buffer.isEmpty() && !(opBuffer.isEmpty())) ||
               (!(expression.isEmpty()) && buffer.isEmpty() && !(opBuffer.isEmpty())))
    {
        clearOpeartor_Buffer();


    }else if((expression.isEmpty() && !(buffer.isEmpty()) && opBuffer.isEmpty())      ||
               (expression.isEmpty() && !(buffer.isEmpty()) && !(opBuffer.isEmpty())) ||
               (!(expression.isEmpty()) && !(buffer.isEmpty()) && opBuffer.isEmpty()) ||
               (!(expression.isEmpty()) && !(buffer.isEmpty()) && !(opBuffer.isEmpty())))
    {
        if(buffer.length() <= 1){

            buffer.clear();

        }else{

            buffer.chop(1); // More efficient than remove()

        }

    }else{
        throw Throw{"Unknown Error",QString::number(__LINE__)};
    }
    }catch(const Throw &e){
        UpdateErrorInfo(e.description,"BasicCalculate",e.line_Number);
        error.errorLogging(ErrorC);
        DisplayMessage(e.description);
    }catch(const std::exception &e){
        UpdateErrorInfo(QString(e.what()),"BasicCalculate",QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage(e.what());
    }
    catch (...) {
        UpdateErrorInfo("Unknown non-Qt exception", "BasicCalculate", QString::number(__LINE__));
        error.errorLogging(ErrorC);
        DisplayMessage("Unknown non-Qt exception");
    }

}


