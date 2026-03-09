/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_18;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(289, 522);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #2c3e50, stop:1 #4ca1af\n"
"    );\n"
"    color: white;\n"
"    font-family: 'Segoe UI', Arial, sans-serif;\n"
"}"));
        MainWindow->setTabShape(QTabWidget::TabShape::Triangular);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(6);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(0, 82));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background-color: rgba(224, 224, 224, 0.7);  /* Light gray with 70% opacity */\n"
"    border: 1px solid rgba(160, 160, 160, 0.5); /* Semi-transparent border */\n"
"    border-radius: 5px;\n"
"\n"
"      /* Slightly rounded corners */\n"
"\n"
"    /* Text Formatting */\n"
"    color: white;           /* Black text color */\n"
"    font-family: \"Segoe UI\", \"Arial, sans-serif\";       /* Use a clear font, adjust as desired */\n"
"    font-size: 28px;          /* Increased font size for better visibility */\n"
"    text-align: right;         /* Right-align the text, as in a calculator */\n"
"    padding-right: 15px;      /* Added padding */\n"
"\n"
"    /* Size and Spacing */\n"
"    min-height: 80px;         /* Increased height */\n"
"    /* No margin here, margins are generally handled by layouts */\n"
"    height: 50px;\n"
"\n"
"    /* Focus State (Optional) */\n"
"    /* &:focus {\n"
"        border: 2px solid rgba(76, 175, 80, 0.7);\n"
"        box-shadow: 0 0 5px rgba(76, 175, 80, 0.7);"
                        "\n"
"    }\n"
"    */\n"
"\n"
"    /* Read-only State */\n"
"    readonly {\n"
"        background-color: rgba(224, 224, 224, 0.7);\n"
"        border: 1px solid rgba(160, 160, 160, 0.5);\n"
"        color: #000000;\n"
"    }\n"
"    selection-background-color: #b0d4ff;\n"
"    selection-color: #000000;\n"
"}\n"
""));
        lineEdit->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_10);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_16);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_15);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_17);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        gridLayout->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName("pushButton_14");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy2);
        pushButton_14->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        gridLayout->addWidget(pushButton_14, 1, 0, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        gridLayout->addWidget(pushButton_18, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(58, 58));
        pushButton->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(58, 58));
        pushButton_2->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(58, 58));
        pushButton_3->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(58, 58));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(58, 58));
        pushButton_5->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(58, 58));
        pushButton_6->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(58, 58));
        pushButton_7->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(58, 58));
        pushButton_8->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMinimumSize(QSize(58, 58));
        pushButton_9->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_9);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setMinimumSize(QSize(58, 58));
        pushButton_10->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(58, 58));
        pushButton_11->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("/* Base button style that will apply to all buttons */\n"
"QPushButton {\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    padding: 8px;\n"
"    font-size: 16px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"/* Style for larger buttons (like AC, 0, etc.) */\n"
"QPushButton[largeButton=\"true\"] {\n"
"    padding: 12px;\n"
"    font-size: 18px;\n"
"    min-width: 60px;\n"
"    min-height: 60px;\n"
"}\n"
"\n"
"/* Style for smaller buttons */\n"
"QPushButton[smallButton=\"true\"] {\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"/* Number buttons specific style */\n"
"QPushButton[numberButton=\"true\"] {\n"
"    background-color: rgba(255, 255, 255, 0.15);\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Operation buttons specific style */\n"
"QPushButton[operationButton=\"true\"] {\n"
"    background-color: rgba(74, 144, 2"
                        "26, 0.3);\n"
"}\n"
"\n"
"/* Hover effects for all buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"/* Pressed effects for all buttons */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.3);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_12);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_4);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 289, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "My Calculator", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\302\251 2025 Hamdan | All rights reserved", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
