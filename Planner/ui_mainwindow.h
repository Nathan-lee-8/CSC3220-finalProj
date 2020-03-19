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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QLCDNumber *hourValue;
    QLCDNumber *secondValue;
    QLCDNumber *minuteValue;
    QLabel *dots;
    QLabel *otherDots;
    QTextEdit *calendarList;
    QWidget *tableView;
    QPushButton *addFive;
    QLabel *classFourLabel;
    QTextBrowser *class4Note1;
    QPushButton *addThree;
    QTextEdit *dateThree;
    QLabel *classThreeLabel;
    QLabel *classFiveLabel;
    QPushButton *addTwo;
    QTextBrowser *class1Note1;
    QTextEdit *assignmentTwo;
    QTextEdit *dateTwo;
    QTextBrowser *class5Note1;
    QTextEdit *dateOne;
    QTextBrowser *class2Note1;
    QTextEdit *assignmentFour;
    QLabel *classOneLabel;
    QTextEdit *assignmentThree;
    QPushButton *addNote5;
    QTextEdit *assignmentOne;
    QTextEdit *assignmentFive;
    QLabel *classTwoLabel;
    QTextEdit *dateFour;
    QPushButton *addFour;
    QPushButton *addOne;
    QTextBrowser *class3Note1;
    QTextEdit *dateFive;
    QPushButton *toPage3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(858, 599);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 841, 521));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        nextButton = new QPushButton(homePage);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(650, 470, 161, 41));
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
        removeClassButton->setGeometry(QRect(242, 440, 111, 28));
        stackedWidget->addWidget(homePage);
        calendarView = new QWidget();
        calendarView->setObjectName(QString::fromUtf8("calendarView"));
        calendarWidget = new QCalendarWidget(calendarView);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(3, 22, 621, 511));
        dateLabel = new QLineEdit(calendarView);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(650, 80, 171, 41));
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignCenter);
        previousButton = new QPushButton(calendarView);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(650, 470, 161, 41));
        hourValue = new QLCDNumber(calendarView);
        hourValue->setObjectName(QString::fromUtf8("hourValue"));
        hourValue->setGeometry(QRect(650, 20, 50, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lato"));
        font1.setPointSize(11);
        hourValue->setFont(font1);
        hourValue->setDigitCount(2);
        hourValue->setProperty("value", QVariant(22.000000000000000));
        hourValue->setProperty("intValue", QVariant(22));
        secondValue = new QLCDNumber(calendarView);
        secondValue->setObjectName(QString::fromUtf8("secondValue"));
        secondValue->setGeometry(QRect(770, 20, 50, 50));
        secondValue->setFont(font1);
        secondValue->setDigitCount(2);
        secondValue->setProperty("value", QVariant(22.000000000000000));
        secondValue->setProperty("intValue", QVariant(22));
        minuteValue = new QLCDNumber(calendarView);
        minuteValue->setObjectName(QString::fromUtf8("minuteValue"));
        minuteValue->setGeometry(QRect(710, 20, 50, 50));
        minuteValue->setFont(font1);
        minuteValue->setDigitCount(2);
        minuteValue->setProperty("value", QVariant(22.000000000000000));
        minuteValue->setProperty("intValue", QVariant(22));
        dots = new QLabel(calendarView);
        dots->setObjectName(QString::fromUtf8("dots"));
        dots->setGeometry(QRect(700, 20, 56, 41));
        QFont font2;
        font2.setPointSize(16);
        dots->setFont(font2);
        otherDots = new QLabel(calendarView);
        otherDots->setObjectName(QString::fromUtf8("otherDots"));
        otherDots->setGeometry(QRect(760, 20, 56, 41));
        otherDots->setFont(font2);
        calendarList = new QTextEdit(calendarView);
        calendarList->setObjectName(QString::fromUtf8("calendarList"));
        calendarList->setGeometry(QRect(650, 130, 171, 321));
        stackedWidget->addWidget(calendarView);
        tableView = new QWidget();
        tableView->setObjectName(QString::fromUtf8("tableView"));
        addFive = new QPushButton(tableView);
        addFive->setObjectName(QString::fromUtf8("addFive"));
        addFive->setGeometry(QRect(790, 90, 31, 28));
        classFourLabel = new QLabel(tableView);
        classFourLabel->setObjectName(QString::fromUtf8("classFourLabel"));
        classFourLabel->setGeometry(QRect(520, 10, 131, 41));
        class4Note1 = new QTextBrowser(tableView);
        class4Note1->setObjectName(QString::fromUtf8("class4Note1"));
        class4Note1->setGeometry(QRect(510, 130, 151, 331));
        addThree = new QPushButton(tableView);
        addThree->setObjectName(QString::fromUtf8("addThree"));
        addThree->setGeometry(QRect(460, 90, 31, 28));
        dateThree = new QTextEdit(tableView);
        dateThree->setObjectName(QString::fromUtf8("dateThree"));
        dateThree->setGeometry(QRect(340, 90, 111, 31));
        classThreeLabel = new QLabel(tableView);
        classThreeLabel->setObjectName(QString::fromUtf8("classThreeLabel"));
        classThreeLabel->setGeometry(QRect(350, 10, 131, 41));
        classFiveLabel = new QLabel(tableView);
        classFiveLabel->setObjectName(QString::fromUtf8("classFiveLabel"));
        classFiveLabel->setGeometry(QRect(680, 10, 131, 41));
        addTwo = new QPushButton(tableView);
        addTwo->setObjectName(QString::fromUtf8("addTwo"));
        addTwo->setGeometry(QRect(290, 90, 31, 28));
        class1Note1 = new QTextBrowser(tableView);
        class1Note1->setObjectName(QString::fromUtf8("class1Note1"));
        class1Note1->setGeometry(QRect(0, 130, 151, 331));
        assignmentTwo = new QTextEdit(tableView);
        assignmentTwo->setObjectName(QString::fromUtf8("assignmentTwo"));
        assignmentTwo->setGeometry(QRect(170, 50, 151, 31));
        dateTwo = new QTextEdit(tableView);
        dateTwo->setObjectName(QString::fromUtf8("dateTwo"));
        dateTwo->setGeometry(QRect(170, 90, 111, 31));
        class5Note1 = new QTextBrowser(tableView);
        class5Note1->setObjectName(QString::fromUtf8("class5Note1"));
        class5Note1->setGeometry(QRect(670, 130, 151, 331));
        dateOne = new QTextEdit(tableView);
        dateOne->setObjectName(QString::fromUtf8("dateOne"));
        dateOne->setGeometry(QRect(0, 90, 111, 31));
        class2Note1 = new QTextBrowser(tableView);
        class2Note1->setObjectName(QString::fromUtf8("class2Note1"));
        class2Note1->setGeometry(QRect(170, 130, 151, 331));
        assignmentFour = new QTextEdit(tableView);
        assignmentFour->setObjectName(QString::fromUtf8("assignmentFour"));
        assignmentFour->setGeometry(QRect(510, 50, 151, 31));
        classOneLabel = new QLabel(tableView);
        classOneLabel->setObjectName(QString::fromUtf8("classOneLabel"));
        classOneLabel->setGeometry(QRect(10, 10, 131, 41));
        assignmentThree = new QTextEdit(tableView);
        assignmentThree->setObjectName(QString::fromUtf8("assignmentThree"));
        assignmentThree->setGeometry(QRect(340, 50, 151, 31));
        addNote5 = new QPushButton(tableView);
        addNote5->setObjectName(QString::fromUtf8("addNote5"));
        addNote5->setGeometry(QRect(560, 470, 131, 41));
        assignmentOne = new QTextEdit(tableView);
        assignmentOne->setObjectName(QString::fromUtf8("assignmentOne"));
        assignmentOne->setGeometry(QRect(0, 50, 151, 31));
        assignmentFive = new QTextEdit(tableView);
        assignmentFive->setObjectName(QString::fromUtf8("assignmentFive"));
        assignmentFive->setGeometry(QRect(670, 50, 151, 31));
        classTwoLabel = new QLabel(tableView);
        classTwoLabel->setObjectName(QString::fromUtf8("classTwoLabel"));
        classTwoLabel->setGeometry(QRect(200, 10, 131, 41));
        dateFour = new QTextEdit(tableView);
        dateFour->setObjectName(QString::fromUtf8("dateFour"));
        dateFour->setGeometry(QRect(510, 90, 111, 31));
        addFour = new QPushButton(tableView);
        addFour->setObjectName(QString::fromUtf8("addFour"));
        addFour->setGeometry(QRect(630, 90, 31, 28));
        addOne = new QPushButton(tableView);
        addOne->setObjectName(QString::fromUtf8("addOne"));
        addOne->setGeometry(QRect(120, 90, 31, 28));
        class3Note1 = new QTextBrowser(tableView);
        class3Note1->setObjectName(QString::fromUtf8("class3Note1"));
        class3Note1->setGeometry(QRect(340, 130, 151, 331));
        dateFive = new QTextEdit(tableView);
        dateFive->setObjectName(QString::fromUtf8("dateFive"));
        dateFive->setGeometry(QRect(670, 90, 111, 31));
        toPage3 = new QPushButton(tableView);
        toPage3->setObjectName(QString::fromUtf8("toPage3"));
        toPage3->setGeometry(QRect(690, 470, 131, 41));
        stackedWidget->addWidget(tableView);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 858, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


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
        dots->setText(QApplication::translate("MainWindow", ":", nullptr));
        otherDots->setText(QApplication::translate("MainWindow", ":", nullptr));
        addFive->setText(QApplication::translate("MainWindow", "Add", nullptr));
        classFourLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        addThree->setText(QApplication::translate("MainWindow", "Add", nullptr));
        dateThree->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Date</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        classThreeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        classFiveLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        addTwo->setText(QApplication::translate("MainWindow", "Add", nullptr));
        assignmentTwo->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Add assignment here</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        dateTwo->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Date</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        dateOne->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        assignmentFour->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Add assignment here</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        classOneLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        assignmentThree->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Add assignment here</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        addNote5->setText(QApplication::translate("MainWindow", "Back", nullptr));
        assignmentOne->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Add assignment here</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        assignmentFive->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Add assignment here</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        classTwoLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        dateFour->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Date</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        addFour->setText(QApplication::translate("MainWindow", "Add", nullptr));
        addOne->setText(QApplication::translate("MainWindow", "Add", nullptr));
        dateFive->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Date</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        toPage3->setText(QApplication::translate("MainWindow", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
