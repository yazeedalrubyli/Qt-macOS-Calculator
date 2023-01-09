#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class QPushButton;
class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

signals:

private:
 QPushButton *button0;
 QPushButton *button1;
 QPushButton *button2;
 QPushButton *button3;
 QPushButton *button4;
 QPushButton *button5;
 QPushButton *button6;
 QPushButton *button7;
 QPushButton *button8;
 QPushButton *button9;
 QPushButton *buttonPlus;
 QPushButton *buttonMinus;
 QPushButton *buttonMul;
 QPushButton *buttonDiv;
 QPushButton *buttonEqual;
 QPushButton *buttonClear;
 QPushButton *buttonNegate;
 QPushButton *buttonPerCent;
 QPushButton *buttonComma;
};

#endif // MAINWINDOW_H
