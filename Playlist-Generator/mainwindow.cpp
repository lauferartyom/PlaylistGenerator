#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filter.h"

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

void MainWindow::on_importButton_clicked()
{
    QString filePath = QFileDialog::getExistingDirectory(this, "Get any folder");
    QDir dir(filePath);
    QFileInfoList dirContent = dir.entryInfoList(QStringList(),
    QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);

    ui->listImport->clear();

    for (QFileInfo finfo: dirContent) {
        QString name = finfo.fileName();
        QListWidgetItem * item = new QListWidgetItem(name);
            ui->listImport->addItem(item);
    }
}


void MainWindow::on_generateButton_clicked()
{
    if(ui->listImport->count() == 0)
        return;
    for(int i = 0;i<10;++i) {
    QListWidgetItem *widget = ui->listImport->takeItem(ui->listImport->currentRow());
    ui->listGenerate->addItem(widget);
    }
}


void MainWindow::on_addButton_clicked()
{
    if(ui->listImport->count() == 0)
        return;
    QListWidgetItem *widget = ui->listImport->takeItem(ui->listImport->currentRow());
    ui->listGenerate->addItem(widget);
}


void MainWindow::on_deleteButton_clicked()
{
    if(ui->listGenerate->count() == 0)
        return;
    QListWidgetItem *widget = ui->listGenerate->takeItem(ui->listGenerate->currentRow());
    ui->listImport->addItem(widget);
}


void MainWindow::on_filterButton_clicked()
{
    delete filter;
    filter = new Filter(this);
    filter->show();
}
