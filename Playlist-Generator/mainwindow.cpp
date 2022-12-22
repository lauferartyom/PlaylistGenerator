#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filter.h"
#include <stdlib.h>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->memoryLabel->setText(QString::number(ui->horizontalSlider->value())+ "GB");
    ui->spinBox->setEnabled(false);
    ui->horizontalSlider->setEnabled(false);
    ui->addButton->setEnabled(false);
    ui->deleteButton->setEnabled(false);
    ui->generateButton->setEnabled(false);
    ui->saveButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_importButton_clicked()
{
    QString filePath = QFileDialog::getExistingDirectory(this, "Get any folder");
    importFilePath = filePath;
    QDir dir(filePath);
    dir.setNameFilters((QStringList()<<"*.mp3"<<"*.txt"));
    QStringList dirContent = dir.entryList();

    ui->listImport->clear();

    for (QString finfo: dirContent) {
        QString name = finfo;
        //QString atristName;
        QListWidgetItem * item = new QListWidgetItem(name);
            ui->listImport->addItem(item);
    }
    if(ui->listImport->count() != 0) {
        ui->addButton->setEnabled(true);
        ui->deleteButton->setEnabled(true);
        ui->filterButton->setEnabled(true);
        ui->generateButton->setEnabled(true);
    }
}


void MainWindow::on_generateButton_clicked()
{
    int count = 0;
    int memory = 0;
    if(ui->spinBox->isEnabled()) {
        count = ui->spinBox->value();
    }
    else {
        count = 0;
    }

    if(ui->horizontalSlider->isEnabled()) {
        memory = ui->horizontalSlider->value();
    }
    else {
        memory = 0;
    }



    if(ui->listImport->count() == 0)
    return;

    srand(2412);

    for(int i = 0;i<count;++i) {
    int r_num = rand();
    //qInfo() « r_num % 10;
    QListWidgetItem *widget = ui->listImport->takeItem(ui->listImport->currentRow());
    if((r_num%10) > 5){
    //QListWidgetItem *widget = ui->listImport->takeItem(ui->listImport->currentRow());
    ui->listGenerate->addItem(widget);
    }else{
    ui->listImport->addItem(widget);
    i--;
    }
    }


    if(ui->listGenerate->count() != 0) {
        ui->saveButton->setEnabled(true);
    }

    if(ui->listGenerate->count() == 0) {
        ui->saveButton->setEnabled(false);
    }
}


void MainWindow::on_addButton_clicked()
{
    if(ui->listImport->count() == 0)
        return;
    QListWidgetItem *widget = ui->listImport->takeItem(ui->listImport->currentRow());
    ui->listGenerate->addItem(widget);

    if(ui->listGenerate->count() != 0) {
        ui->saveButton->setEnabled(true);
    }
}


void MainWindow::on_deleteButton_clicked()
{
    if(ui->listGenerate->count() == 0)
        return;
    QListWidgetItem *widget = ui->listGenerate->takeItem(ui->listGenerate->currentRow());
    ui->listImport->addItem(widget);

    if(ui->listGenerate->count() == 0) {
        ui->saveButton->setEnabled(false);
    }
}


void MainWindow::on_filterButton_clicked()
{
    filter.exec();
}

void MainWindow::on_setNumber_clicked()
{
    ui->spinBox->setEnabled(true);
    ui->horizontalSlider->setEnabled(false);
}


void MainWindow::on_setMemory_clicked()
{
    ui->horizontalSlider->setEnabled(true);
    ui->spinBox->setEnabled(false);
}


void MainWindow::on_saveButton_clicked()
{
    QString filePath = QFileDialog::getExistingDirectory(this, "Get any folder");
    for(int i = 0;i<ui->listGenerate->count();i++) {
        QString name = ui->listGenerate->item(i)->text();
        QFile::copy(importFilePath + "//" + name, filePath + "//" + name);
    }
    if(filePath != nullptr) {
    QMessageBox savedMsg;
    savedMsg.setWindowTitle("Playlist");
    savedMsg.setText("Playlist saved");
    savedMsg.exec();
    }
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->memoryLabel->setText(QString::number(value)+"GB");
}

