#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "data.h"
#include "place.h"
#include "port.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fillData();
    model = new TreeModel(this);
    model->setDataModel(d);
    ui->treeView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fillData()
{
    d = new Data();

    Place *box1 = new Place("Box 1");
    Place *box2 = new Place("Box 2");
    Place *box3 = new Place("Box 3");

    d->addPlace(box1);
    d->addPlace(box2);
    d->addPlace(box3);

}

