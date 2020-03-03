/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *calendarView;
    QCalendarWidget *calendarWidget;
    QLineEdit *dateLabel;
    QWidget *tableView;
    QTabWidget *tabWidget;
    QWidget *byDueDate;
    QWidget *byClass;
    QTextEdit *classTwoLabel;
    QTextEdit *classThreeLabel;
    QTextEdit *classOneLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(863, 605);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 841, 521));
        calendarView = new QWidget();
        calendarView->setObjectName(QString::fromUtf8("calendarView"));
        calendarWidget = new QCalendarWidget(calendarView);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(3, 22, 621, 511));
        dateLabel = new QLineEdit(calendarView);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(630, 20, 201, 41));
        QFont font;
        font.setPointSize(18);
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(calendarView);
        tableView = new QWidget();
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tabWidget = new QTabWidget(tableView);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 841, 521));
        byDueDate = new QWidget();
        byDueDate->setObjectName(QString::fromUtf8("byDueDate"));
        tabWidget->addTab(byDueDate, QString());
        byClass = new QWidget();
        byClass->setObjectName(QString::fromUtf8("byClass"));
        classTwoLabel = new QTextEdit(byClass);
        classTwoLabel->setObjectName(QString::fromUtf8("classTwoLabel"));
        classTwoLabel->setGeometry(QRect(310, 40, 101, 31));
        classThreeLabel = new QTextEdit(byClass);
        classThreeLabel->setObjectName(QString::fromUtf8("classThreeLabel"));
        classThreeLabel->setGeometry(QRect(510, 40, 91, 31));
        classThreeLabel->setFont(font);
        classOneLabel = new QTextEdit(byClass);
        classOneLabel->setObjectName(QString::fromUtf8("classOneLabel"));
        classOneLabel->setGeometry(QRect(110, 40, 101, 31));
        tabWidget->addTab(byClass, QString());
        stackedWidget->addWidget(tableView);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 863, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(byDueDate), QApplication::translate("MainWindow", "Due Date", nullptr));
        classTwoLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt;\">CSC 3220</span></p></body></html>", nullptr));
        classThreeLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text';\">CSC 3150</span></p></body></html>", nullptr));
        classOneLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt;\">CSC 3760</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(byClass), QApplication::translate("MainWindow", "Class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
