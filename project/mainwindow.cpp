#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Mark");

    ui->listWidget->addItem("Mark1");

    ui->listWidget->addItem("Mark3");
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_filter_clicked()
{
    f_dialog.show();
}


void MainWindow::on_import_2_clicked()
{

}

