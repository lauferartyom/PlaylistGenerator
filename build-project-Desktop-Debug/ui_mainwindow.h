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
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *generate;
    QPushButton *import_2;
    QPushButton *save;
    QPushButton *filter;
    QListWidget *listWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        generate = new QPushButton(centralwidget);
        generate->setObjectName("generate");
        generate->setGeometry(QRect(340, 310, 91, 31));
        import_2 = new QPushButton(centralwidget);
        import_2->setObjectName("import_2");
        import_2->setGeometry(QRect(90, 390, 80, 23));
        save = new QPushButton(centralwidget);
        save->setObjectName("save");
        save->setGeometry(QRect(620, 380, 80, 23));
        filter = new QPushButton(centralwidget);
        filter->setObjectName("filter");
        filter->setGeometry(QRect(350, 100, 80, 23));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 110, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        import_2->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        filter->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
