#include "mainwindow.h"
#include <QApplication>

#include "../RailroProject/graphview.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    GraphView* graphView = new GraphView;
    w.setCentralWidget(graphView);
    w.show();

    return a.exec();
}
