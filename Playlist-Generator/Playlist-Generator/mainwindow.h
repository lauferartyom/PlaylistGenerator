#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QString>
#include <QList>
#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QFileInfoList>
#include <QFileDialog>
#include <filter.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_importButton_clicked();

    void on_generateButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void on_filterButton_clicked();

private:
    Ui::MainWindow *ui;
    Filter *filter;
};
#endif // MAINWINDOW_H
