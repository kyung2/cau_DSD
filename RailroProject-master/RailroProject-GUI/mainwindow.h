#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include "../RailroProject/graphview.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

    void resizeEvent(QResizeEvent *) Q_DECL_OVERRIDE;
    Ui::MainWindow* ui;
    GraphView* m_graphView;

};

#endif // MAINWINDOW_H
