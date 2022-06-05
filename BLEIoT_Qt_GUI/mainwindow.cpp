#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QBluetoothDeviceDiscoveryAgent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_scan_clicked()
{

}

