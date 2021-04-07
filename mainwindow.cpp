#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "place.h"
#include "port.h"
#include "device.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList cols;
    cols << "objectName" << "m_idDev" ;
    model = new TreeModel(this);
    model->setColumns(cols);

    Place *pl = new Place("Box 1");
    Port *port1 = new Port("COM1", pl);
    port1->setStatus(true);
    Port *port2 = new Port("COM2", pl);
    Port *port3 = new Port("COM3", pl);
    {
        Device *dev1 = new Device("DOZOR-C",2, port1);
        dev1->setStatus(true);
    }
    {
        Device *dev1 = new Device("MVA8",2, port2);
        Device *dev2 = new Device("MVA8",3, port2);
        Device *dev3 = new Device("MVA8",4, port2);
    }
    {
        Device *dev1 = new Device("MU110",2, port3);
        Device *dev2 = new Device("MU110",3, port3);
    }


    model->addItem(pl, QModelIndex());

    ui->treeView->setModel(model);
    ui->columnView->setModel(model);
    ui->tableView->setModel(model);
//    ui->treeView->setWordWrap(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fillData()
{


}

