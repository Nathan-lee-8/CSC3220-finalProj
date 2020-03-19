/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QWidget *homePage;
    QPushButton *nextButton;
    QLabel *greetingLabel;
    QLabel *infoLabel;
    QLabel *label;
    QLineEdit *courseOne;
    QLabel *course1Label;
    QLabel *course2Label;
    QLabel *course3Label;
    QLineEdit *courseTwo;
    QLineEdit *courseThree;
    QLabel *course4Label;
    QLineEdit *courseFour;
    QPushButton *addClassButton;
    QLabel *course5Label;
    QLineEdit *courseFive;
    QPushButton *removeClassButton;
    QWidget *calendarView;
    QCalendarWidget *calendarWidget;
    QLineEdit *dateLabel;
    QPushButton *previousButton;
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
        stackedWidget->setGeometry(QRect(10, 10, 841, 521));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        nextButton = new QPushButton(homePage);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(612, 451, 161, 41));
        greetingLabel = new QLabel(homePage);
        greetingLabel->setObjectName(QString::fromUtf8("greetingLabel"));
        greetingLabel->setGeometry(QRect(280, 10, 311, 81));
        QFont font;
        font.setPointSize(18);
        greetingLabel->setFont(font);
        infoLabel = new QLabel(homePage);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(150, 70, 531, 91));
        infoLabel->setTextFormat(Qt::AutoText);
        label = new QLabel(homePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 200, 401, 31));
        courseOne = new QLineEdit(homePage);
        courseOne->setObjectName(QString::fromUtf8("courseOne"));
        courseOne->setGeometry(QRect(210, 240, 141, 21));
        course1Label = new QLabel(homePage);
        course1Label->setObjectName(QString::fromUtf8("course1Label"));
        course1Label->setGeometry(QRect(120, 240, 101, 21));
        course2Label = new QLabel(homePage);
        course2Label->setObjectName(QString::fromUtf8("course2Label"));
        course2Label->setGeometry(QRect(120, 280, 101, 21));
        course3Label = new QLabel(homePage);
        course3Label->setObjectName(QString::fromUtf8("course3Label"));
        course3Label->setGeometry(QRect(120, 320, 101, 21));
        courseTwo = new QLineEdit(homePage);
        courseTwo->setObjectName(QString::fromUtf8("courseTwo"));
        courseTwo->setGeometry(QRect(210, 280, 141, 21));
        courseThree = new QLineEdit(homePage);
        courseThree->setObjectName(QString::fromUtf8("courseThree"));
        courseThree->setGeometry(QRect(210, 320, 141, 21));
        course4Label = new QLabel(homePage);
        course4Label->setObjectName(QString::fromUtf8("course4Label"));
        course4Label->setGeometry(QRect(120, 360, 101, 21));
        courseFour = new QLineEdit(homePage);
        courseFour->setObjectName(QString::fromUtf8("courseFour"));
        courseFour->setGeometry(QRect(210, 360, 141, 21));
        addClassButton = new QPushButton(homePage);
        addClassButton->setObjectName(QString::fromUtf8("addClassButton"));
        addClassButton->setGeometry(QRect(110, 440, 93, 28));
        course5Label = new QLabel(homePage);
        course5Label->setObjectName(QString::fromUtf8("course5Label"));
        course5Label->setGeometry(QRect(120, 400, 101, 21));
        courseFive = new QLineEdit(homePage);
        courseFive->setObjectName(QString::fromUtf8("courseFive"));
        courseFive->setGeometry(QRect(210, 400, 141, 21));
        removeClassButton = new QPushButton(homePage);
        removeClassButton->setObjectName(QString::fromUtf8("removeClassButton"));
        removeClassButton->setGeometry(QRect(260, 440, 93, 28));
        stackedWidget->addWidget(homePage);
        calendarView = new QWidget();
        calendarView->setObjectName(QString::fromUtf8("calendarView"));
        calendarWidget = new QCalendarWidget(calendarView);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(3, 22, 621, 511));
        dateLabel = new QLineEdit(calendarView);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(630, 20, 201, 41));
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignCenter);
        previousButton = new QPushButton(calendarView);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(670, 330, 113, 32));
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
        menubar->setGeometry(QRect(0, 0, 863, 26));
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
        nextButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        greetingLabel->setText(QApplication::translate("MainWindow", "Welcome to Our Planner Application!", nullptr));
        infoLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">This application is for students by students. Our goal is to create a well-<br/>organized planner/calendar application that will satisfy the needs of students<br/>and allow for more consolidated information storage. </p><p align=\"center\">Please enter the appropriate infromation below to get started.</p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "Please enter the name of your courses:", nullptr));
        course1Label->setText(QApplication::translate("MainWindow", "Course 1:", nullptr));
        course2Label->setText(QApplication::translate("MainWindow", "Course 2:", nullptr));
        course3Label->setText(QApplication::translate("MainWindow", "Course 3:", nullptr));
        course4Label->setText(QApplication::translate("MainWindow", "Course 4:", nullptr));
        addClassButton->setText(QApplication::translate("MainWindow", "Add Class", nullptr));
        course5Label->setText(QApplication::translate("MainWindow", "Course 5:", nullptr));
        removeClassButton->setText(QApplication::translate("MainWindow", "Remove Class", nullptr));
        previousButton->setText(QApplication::translate("MainWindow", "Prev", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(byDueDate), QApplication::translate("MainWindow", "Due Date", nullptr));
        classTwoLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt;\">CSC 3220</span></p></body></html>", nullptr));
        classThreeLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text';\">CSC 3150</span></p></body></html>", nullptr));
        classOneLabel->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text'; font-size:18pt;\">CSC 3760</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(byClass), QApplication::translate("MainWindow", "Class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
