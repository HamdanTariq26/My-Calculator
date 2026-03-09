#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),isResultDisplayed(false)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
    C = new BasicCalculations(this);
    this->setWindowTitle("My Calculator");

}

MainWindow::~MainWindow()
{
    delete ui;
    delete C;
}

void MainWindow::clearDisplayedResult(){
    if(isResultDisplayed){
    ui->lineEdit->clear();
    C->clearBuffer();
    C->clearOpeartor_Buffer();
    isResultDisplayed = false;
    }
}

void MainWindow::clearDisplayedResultOperator(){
    if(ui->lineEdit->text() == "Syntax Error" || ui->lineEdit->text() == "Math Error" ){
        ui->lineEdit->clear();
    }
    isResultDisplayed = false;
}


void MainWindow::on_pushButton_16_clicked()
{
    // /

    valid = C->Operators("/");
    if(valid){
        ui->lineEdit->setText(ui->lineEdit->text()+"/");
    }
    clearDisplayedResultOperator();
}


void MainWindow::on_pushButton_15_clicked()
{
    // *
    valid = C->Operators("*");
    if(valid){
        ui->lineEdit->setText(ui->lineEdit->text()+"*");
    }
    clearDisplayedResultOperator();


}


void MainWindow::on_pushButton_17_clicked()
{
    // AC

    C->clearAll();
    ui->lineEdit->clear();
    isResultDisplayed = false;

}




void MainWindow::on_pushButton_clicked()
{
    //0
    C->updateBuffer("0");
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
    clearDisplayedResult();

}


void MainWindow::on_pushButton_2_clicked()
{
    //1
    C->updateBuffer("1");
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_3_clicked()
{
    //2
    C->updateBuffer("2");
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_4_clicked()
{
    //3
    C->updateBuffer("3");
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_5_clicked()
{
    //4
    C->updateBuffer("4");
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
    clearDisplayedResult();

}


void MainWindow::on_pushButton_6_clicked()
{
    //5
    C->updateBuffer("5");
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_7_clicked()
{
    //6
    C->updateBuffer("6");
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_8_clicked()
{
    //7
    C->updateBuffer("7");
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_9_clicked()
{
    //8
    C->updateBuffer("8");
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
    clearDisplayedResult();
}


void MainWindow::on_pushButton_10_clicked()
{
    //9
    C->updateBuffer("9");
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
    clearDisplayedResult();

}


void MainWindow::on_pushButton_11_clicked()
{
    //.
    if(C->checkDecimalPoint()){
    C->updateBuffer(".");
    ui->lineEdit->setText(ui->lineEdit->text()+".");
    clearDisplayedResult();
    }

}



void MainWindow::on_pushButton_12_clicked()
{
    // =

    equation = C->equationStatus();

    if(equation == Empty){
        // Intentionally left blank
    }else if(equation == SyntaxError){
        ui->lineEdit->setText("Syntax Error");
        isResultDisplayed = true;
    }else if(equation == SingleOperand){
        isResultDisplayed = true; //greatly affects user experience
    }else if(equation == NegativeSingleOperand){
        isResultDisplayed = true; //greatly affects user experience
    }else if(equation == ValidExpression){
        ui->lineEdit->setText(C->calculate());
        isResultDisplayed = true;
    }else{
        //message pop user
    }



}



void MainWindow::on_pushButton_13_clicked()
{
    //+
    valid = C->Operators("+");
    if(valid){
        ui->lineEdit->setText(ui->lineEdit->text()+"+");
    }
    clearDisplayedResultOperator();

}


void MainWindow::on_pushButton_14_clicked()
{
    //-
    if(!isResultDisplayed){ //because of this you have to click minus 2 times //fix
        valid = C->Operators("-");
        if(valid){
          ui->lineEdit->setText(ui->lineEdit->text()+"-");
        }
    }
    clearDisplayedResultOperator();
}


void MainWindow::on_pushButton_18_clicked()
{
    //⌫
    C->clearSystematically();
    clearDisplayedResultOperator();
    QString text = ui->lineEdit->text();
    if(!text.isEmpty()){
        text.chop(1);
        ui->lineEdit->setText(text);
    }
}

