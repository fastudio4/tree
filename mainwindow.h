#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "treemodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fillData();

private:
    Ui::MainWindow *ui;
    TreeModel *model;

};
#endif // MAINWINDOW_H
