#include "Error_Handling.h"
#include "BasicCalculate.h"

#include <QFile>
#include <QDateTime>
#include <QTextStream>

ErrorHandling::ErrorHandling(QString fileName) : fileName(fileName){}



void ErrorHandling::errorLogging(ErrorInfo &Error){
    QFile file(fileName);
    file.open(QIODevice::Append|QIODevice::Text);
    if(file.isOpen()){
        QTextStream out(&file);
        out << "------------------------------------------------------------\n";
        out << "Error: " << Error.error << "\n";
        out << "File: " << Error.errorFile << "\n";
        out << "Line Number: " << Error.lineNumber << "\n";
        out << "Time: " << QDateTime::currentDateTime().toString() << "\n";
        out << "Buffer: " << Error.buffer << "\n";
        out << "Operator Buffer: " << Error.opBuffer << "\n";
        out << "Concatenated Buffer: " << Error.concatenatedBuffers << "\n";
        out << "Stack: ";
        for(auto stack_Elements : Error.stack){
            out << stack_Elements.magnitude << " ";
        }
        out << "\n";
        file.close();
    }else{

    }

}
