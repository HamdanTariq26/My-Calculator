#ifndef TYPES_H
#define TYPES_H



struct token{
    enum Type{NUMBER,OPERATOR};
    enum has_sign{YES,NO,NOT_APPLICABLE};
    Type type;
    QString magnitude;

    struct {
        has_sign sign;
    }magnitudeDetails;

};

struct ErrorInfo{
    QString error;
    QString errorFile;
    QString lineNumber;
    QString buffer;
    QString opBuffer;
    QString concatenatedBuffers;
    QVector<token> stack;
};

enum EquationStatus {
    Empty,
    SyntaxError,
    SingleOperand,
    NegativeSingleOperand,
    ValidExpression,
    UnKnown //to be removed in future updates
};

struct Throw{
    QString description;
    QString line_Number;
};



#endif // TYPES_H
