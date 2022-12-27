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
#include <QtMultimedia/QMediaMetaData>
#include <filter.h>
#include <QMap>
#include <trackdata.h>
#include <QtMultimedia/QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString getMediaData(QString filename);

private slots:
    void on_importButton_clicked();

    void on_generateButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void on_filterButton_clicked();

    void on_setNumber_clicked();

    void on_setMemory_clicked();

    void on_saveButton_clicked();

    void on_horizontalSlider_valueChanged(int value);


private:
    QMediaPlayer *m_player;
    QMap<QString,TrackData> TrackMap;
    QString importFilePath;
    Ui::MainWindow *ui;
    Filter filter;
};
#endif // MAINWINDOW_H
