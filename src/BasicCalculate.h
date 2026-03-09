#ifndef BASIC_CALCULATE_H
#define BASIC_CALCULATE_H

#include <QString>
#include <QVector>
#include "Types.h"
#include "Error_Handling.h"

class MainWindow;


class BasicCalculations{
private:
    QString buffer;
    QString opBuffer;
    QString concatenatedBuffers;
    ErrorHandling error;
    ErrorInfo ErrorC;
    QVector <token> expression;
    token exp;
    MainWindow* mainWindow;

public:

    BasicCalculations(MainWindow* parent = nullptr);

    void updateBuffer(const QString value);
    void clearBuffer();
    bool Operators(const QString op);
    void update_Operator_Buffer(const QString op);
    void clearOpeartor_Buffer();
    void concatenateBuffers();
    void clearConcatenatedBuffer();
    void addIntoMemory(const QString &op);
    void UpdateErrorInfo(const QString error,const QString errorFile,const QString lineNumber);
    //above function is used to warp all info for errorhandling class
    bool  checkDecimalPoint();
    EquationStatus equationStatus();
    void clearAll();
    QString calculate();
    void clearSystematically();
    void DisplayMessage(const QString &message);



};







#endif
