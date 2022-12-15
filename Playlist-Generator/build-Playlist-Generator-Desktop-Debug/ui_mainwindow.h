/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *importButton;
    QListWidget *listImport;
    QListWidget *listGenerate;
    QPushButton *generateButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *filterButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *saveButton;
    QRadioButton *radioButton;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QRadioButton *radioButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(966, 600);
        QPalette palette;
        QBrush brush(QColor(52, 73, 166, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(143, 143, 143, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(14);
        font.setBold(true);
        MainWindow->setFont(font);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("audio-input-microphone");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(2.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        importButton = new QPushButton(centralwidget);
        importButton->setObjectName("importButton");
        importButton->setGeometry(QRect(160, 490, 111, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(12);
        font1.setBold(true);
        importButton->setFont(font1);
        listImport = new QListWidget(centralwidget);
        listImport->setObjectName("listImport");
        listImport->setGeometry(QRect(70, 90, 311, 371));
        QPalette palette1;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(170, 170, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        listImport->setPalette(palette1);
        listImport->setFrameShape(QFrame::Box);
        listImport->setFrameShadow(QFrame::Plain);
        listImport->setLineWidth(2);
        listImport->setProperty("isWrapping", QVariant(false));
        listGenerate = new QListWidget(centralwidget);
        listGenerate->setObjectName("listGenerate");
        listGenerate->setGeometry(QRect(590, 90, 311, 371));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        listGenerate->setPalette(palette2);
        listGenerate->setFrameShape(QFrame::Box);
        listGenerate->setFrameShadow(QFrame::Plain);
        listGenerate->setLineWidth(2);
        generateButton = new QPushButton(centralwidget);
        generateButton->setObjectName("generateButton");
        generateButton->setGeometry(QRect(430, 380, 111, 41));
        generateButton->setFont(font1);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(360, 470, 111, 41));
        addButton->setFont(font1);
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(500, 470, 111, 41));
        deleteButton->setFont(font1);
        filterButton = new QPushButton(centralwidget);
        filterButton->setObjectName("filterButton");
        filterButton->setGeometry(QRect(430, 120, 111, 41));
        QPalette palette3;
        QBrush brush5(QColor(50, 100, 150, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        filterButton->setPalette(palette3);
        filterButton->setFont(font1);
        filterButton->setIcon(icon);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 40, 151, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 50, 211, 31));
        label_2->setFont(font);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(690, 490, 111, 41));
        saveButton->setFont(font1);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(390, 190, 181, 21));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(440, 220, 61, 31));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(390, 320, 191, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(390, 280, 141, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Playlist Generator", nullptr));
        importButton->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        filterButton->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input Tracks", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Generated Playlist", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "set the number of tracks", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "set memory limit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
