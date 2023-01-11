#include "mainwindow.h"
#include <QPushButton>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QWidget{parent}{

    setFixedSize(231, 293);

    QFont fontButton("Helvetica",24, QFont::Normal);
    QFont fontCalc("Helvetica",48, QFont::Thin);

    // ====================== Row 0 ======================
    label = new QLabel(this);
    label->setText("0");
    label->setGeometry(10, 5, 210, 40);
    label->setFont(fontCalc);
    label->setAlignment(Qt::AlignRight);

    // ====================== Row 1 ======================

    button0 = new QPushButton("0", this);
    button0->setGeometry(-1, 240, 116, 60);
    button0->setFont(fontButton);

    buttonComma = new QPushButton(",", this);
    buttonComma->setGeometry(115, 240, 58, 57);
    buttonComma->setFont(fontButton);

    buttonEqual = new QPushButton("=", this);
    buttonEqual->setGeometry(173, 240, 58, 57);
    buttonEqual->setFont(fontButton);
    buttonEqual->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 2 ======================

    button1 = new QPushButton("1", this);
    button1->setGeometry(-1, 192, 58, 57);
    button1->setFont(fontButton);

    button2 = new QPushButton("2", this);
    button2->setGeometry(57, 192, 58, 57);
    button2->setFont(fontButton);

    button3 = new QPushButton("3", this);
    button3->setGeometry(115, 192, 58, 57);
    button3->setFont(fontButton);

    buttonPlus = new QPushButton("+", this);
    buttonPlus->setGeometry(173, 192, 58, 57);
    buttonPlus->setFont(fontButton);
    buttonPlus->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 3 ======================

    button4 = new QPushButton("4", this);
    button4->setGeometry(-1, 144, 58, 57);
    button4->setFont(fontButton);

    button5 = new QPushButton("5", this);
    button5->setGeometry(57, 144, 58, 57);
    button5->setFont(fontButton);

    button6 = new QPushButton("6", this);
    button6->setGeometry(115, 144, 58, 57);
    button6->setFont(fontButton);

    buttonMinus = new QPushButton("-", this);
    buttonMinus->setGeometry(173, 144, 58, 57);
    buttonMinus->setFont(fontButton);
    buttonMinus->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 4 ======================

    button7 = new QPushButton("7", this);
    button7->setGeometry(-1, 96, 58, 57);
    button7->setFont(fontButton);

    button8 = new QPushButton("8", this);
    button8->setGeometry(57, 96, 58, 57);
    button8->setFont(fontButton);

    button9 = new QPushButton("9", this);
    button9->setGeometry(115, 96, 58, 57);
    button9->setFont(fontButton);

    buttonMul = new QPushButton("x", this);
    buttonMul->setGeometry(173, 96, 58, 57);
    buttonMul->setFont(fontButton);
    buttonMul->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 5 ======================

    buttonClear = new QPushButton("AC", this);
    buttonClear->setGeometry(-1, 48, 58, 57);
    buttonClear->setFont(fontButton);

    buttonNegate = new QPushButton("±", this);
    buttonNegate->setGeometry(57, 48, 58, 57);
    buttonNegate->setFont(fontButton);

    buttonPerCent = new QPushButton("%", this);
    buttonPerCent->setGeometry(115, 48, 58, 57);
    buttonPerCent->setFont(fontButton);

    buttonDiv = new QPushButton("÷", this);
    buttonDiv->setGeometry(173, 48, 58, 57);
    buttonDiv->setFont(fontButton);
    buttonDiv->setStyleSheet("background:rgb(255,147,20);");
}
