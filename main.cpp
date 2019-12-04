#include "mainwindow.h"
#include <QApplication>

#include "connectmysql.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnectMySQL db;
    db.createConnection();


    MainWindow w;
    w.show();


    return a.exec();
}
