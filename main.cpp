#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Expense Calculator");
    w.resize(900,500);
    w.show();
    return a.exec();
}
