#ifndef ERROR_HANDLING_H
#define ERROR_HANDLING_H

#include <QVector>
#include <QString>
#include "Types.h"


class ErrorHandling{
private:
    QString fileName;

public:

    ErrorHandling(QString fileName);

    void errorLogging(ErrorInfo &Error);


};

#endif // ERROR_HANDLING_H
