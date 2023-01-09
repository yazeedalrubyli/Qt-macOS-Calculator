#include "mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QWidget{parent}{

    setFixedSize(231, 293);

    QFont font("Helvetica",24, QFont::Normal);

    // ====================== Row 1 ======================

    button0 = new QPushButton("0", this);
    button0->setGeometry(-1, 240, 116, 60);
    button0->setFont(font);

    buttonComma = new QPushButton(",", this);
    buttonComma->setGeometry(115, 240, 58, 57);
    buttonComma->setFont(font);

    buttonEqual = new QPushButton("=", this);
    buttonEqual->setGeometry(173, 240, 58, 57);
    buttonEqual->setFont(font);
    buttonEqual->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 2 ======================

    button1 = new QPushButton("1", this);
    button1->setGeometry(-1, 192, 58, 57);
    button1->setFont(font);

    button2 = new QPushButton("2", this);
    button2->setGeometry(57, 192, 58, 57);
    button2->setFont(font);

    button3 = new QPushButton("3", this);
    button3->setGeometry(115, 192, 58, 57);
    button3->setFont(font);

    buttonPlus = new QPushButton("+", this);
    buttonPlus->setGeometry(173, 192, 58, 57);
    buttonPlus->setFont(font);
    buttonPlus->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 3 ======================

    button4 = new QPushButton("4", this);
    button4->setGeometry(-1, 144, 58, 57);
    button4->setFont(font);

    button5 = new QPushButton("5", this);
    button5->setGeometry(57, 144, 58, 57);
    button5->setFont(font);

    button6 = new QPushButton("6", this);
    button6->setGeometry(115, 144, 58, 57);
    button6->setFont(font);

    buttonMinus = new QPushButton("-", this);
    buttonMinus->setGeometry(173, 144, 58, 57);
    buttonMinus->setFont(font);
    buttonMinus->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 4 ======================

    button7 = new QPushButton("7", this);
    button7->setGeometry(-1, 96, 58, 57);
    button7->setFont(font);

    button8 = new QPushButton("8", this);
    button8->setGeometry(57, 96, 58, 57);
    button8->setFont(font);

    button9 = new QPushButton("9", this);
    button9->setGeometry(115, 96, 58, 57);
    button9->setFont(font);

    buttonMul = new QPushButton("x", this);
    buttonMul->setGeometry(173, 96, 58, 57);
    buttonMul->setFont(font);
    buttonMul->setStyleSheet("background:rgb(255,147,20);");

    // ====================== Row 5 ======================

    buttonClear = new QPushButton("AC", this);
    buttonClear->setGeometry(-1, 48, 58, 57);
    buttonClear->setFont(font);

    buttonNegate = new QPushButton("±", this);
    buttonNegate->setGeometry(57, 48, 58, 57);
    buttonNegate->setFont(font);

    buttonPerCent = new QPushButton("%", this);
    buttonPerCent->setGeometry(115, 48, 58, 57);
    buttonPerCent->setFont(font);

    buttonDiv = new QPushButton("÷", this);
    buttonDiv->setGeometry(173, 48, 58, 57);
    buttonDiv->setFont(font);
    buttonDiv->setStyleSheet("background:rgb(255,147,20);");
}
