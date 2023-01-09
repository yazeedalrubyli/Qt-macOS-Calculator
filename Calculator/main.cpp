#include <QApplication>
//#include <QPushButton>
#include <QGraphicsBlurEffect>

#include "mainwindow.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QGraphicsBlurEffect p_blur;
    p_blur.setBlurRadius(20);
    p_blur.setBlurHints(QGraphicsBlurEffect::QualityHint);

    MainWindow window;

    window.show();
    return app.exec();
}



//    QWidget windowMain;
//    windowMain.setFixedSize(231, 293);
//    windowMain.setGraphicsEffect(&p_blur);
//    windowMain.setStyleSheet("background: red;");


//    window.setGraphicsEffect(&p_blur);
//    window.setStyleSheet("background: transparent;");
//    window.setWindowFlags(Qt::FramelessWindowHint);
//    window.setGraphicsEffect(&p_blur);
//    window.setAttribute(Qt::WA_TranslucentBackground,true);

//    QFont font ("Helvetica",24, QFont::Normal);
