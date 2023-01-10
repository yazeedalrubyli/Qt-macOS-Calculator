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
