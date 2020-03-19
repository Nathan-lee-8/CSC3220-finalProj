#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,timer(new QTimer)
{
    ui->setupUi(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(setTime()));
    timer->start(1000);
    ui->dateLabel->setText(QDate::currentDate().toString());
    ui->stackedWidget->setCurrentIndex(0);
    ui->courseFour->hide();
    ui->course4Label->hide();
    ui->courseFive->hide();
    ui->course5Label->hide();
    ui->classFourLabel->hide();
    ui->class4Note1->hide();
    ui->classFiveLabel->hide();
    ui->class5Note1->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    qDebug() << date;
    ui->dateLabel->setText(date.toString());
}

void MainWindow::on_previousButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_nextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->classOneLabel->setText(ui->courseOne->text());
    ui->classTwoLabel->setText(ui->courseTwo->text());
    ui->classThreeLabel->setText(ui->courseThree->text());
}

void MainWindow::on_addClassButton_clicked()
{
    switch (classCount) {
    case 1:
        ui->courseTwo->show();
        ui->course2Label->show();
        ui->classTwoLabel->show();
        ui->class2Note1->show();
        classCount++;
        break;
    case 2:
        ui->courseThree->show();
        ui->course3Label->show();
        ui->classThreeLabel->show();
        ui->class3Note1->show();
        classCount++;
        break;
    case 3:
        ui->courseFour->show();
        ui->course4Label->show();
        ui->classFourLabel->show();
        ui->class4Note1->show();
        classCount++;
        break;
    case 4:
        ui->courseFive->show();
        ui->course5Label->show();
        ui->classFiveLabel->show();
        ui->class5Note1->show();
        classCount++;
        break;
    }
}

void MainWindow::on_removeClassButton_clicked()
{
    switch (classCount) {
    case 1:
        break;
    case 2:
        ui->courseTwo->hide();
        ui->course2Label->hide();
        ui->classTwoLabel->hide();
        ui->class2Note1->hide();
        classCount--;
        break;
    case 3:
        ui->courseThree->hide();
        ui->course3Label->hide();
        ui->classThreeLabel->hide();
        ui->class3Note1->hide();
        classCount--;
        break;
    case 4:
        ui->courseFour->hide();
        ui->course4Label->hide();
        ui->classFourLabel->hide();
        ui->class4Note1->hide();
        classCount--;
        break;
    case 5:
        ui->courseFive->hide();
        ui->course5Label->hide();
        ui->classFiveLabel->hide();
        ui->class5Note1->hide();
        classCount--;
        break;
    }
}

void MainWindow::setTime()
{
    QTime time = QTime::currentTime();
    double hourConversion = time.hour();
    if (time.hour()>12)
        hourConversion-=12;
    QString hour = QString::number(hourConversion);
    QString minute = time.toString("mm");
    QString second = time.toString("ss");
    ui->hourValue->display(hour);
    ui->minuteValue->display(minute);
    ui->secondValue->display(second);
    if(time.second()%2==0){
        ui->dots->hide();
        ui->otherDots->hide();
    }
    if(time.second()%2==1){
        ui->dots->show();
        ui->otherDots->show();
    }
}

void MainWindow::on_previousButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_addNote5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_addOne_clicked()
{
    list1.append(ui->assignmentOne->toPlainText());
    list1.append(ui->dateOne->toPlainText());
    QString full;
    for(int i =0;i<list1.length();i+=2){
        qDebug() << i ;
        full += "*" + list1.at(i) + "\nDate: " + list1.at(i+1) + "\n";
    }
    ui->class1Note1->setText(full);
}

void MainWindow::on_addTwo_clicked()
{
    list2.append(ui->assignmentTwo->toPlainText());
    list2.append(ui->dateTwo->toPlainText());
    QString full;
    for(int i =0;i<list2.length();i+=2){
        qDebug() << i ;
        full += "*" + list2.at(i) + "\nDate: " + list2.at(i+1) + "\n";
    }
    ui->class2Note1->setText(full);
}

void MainWindow::on_addThree_clicked()
{
    list3.append(ui->assignmentThree->toPlainText());
    list3.append(ui->dateThree->toPlainText());
    QString full;
    for(int i =0;i<list3.length();i+=2){
        qDebug() << i ;
        full += "*" + list3.at(i) + "\nDate: " + list3.at(i+1) + "\n";
    }
    ui->class3Note1->setText(full);
}

void MainWindow::on_addFour_clicked()
{
    list4.append(ui->assignmentFour->toPlainText());
    list4.append(ui->dateFour->toPlainText());
    QString full;
    for(int i =0;i<list4.length();i+=2){
        qDebug() << i ;
        full += "*" + list4.at(i) + "\nDate: " + list4.at(i+1) + "\n";
    }
    ui->class4Note1->setText(full);
}

void MainWindow::on_addFive_clicked()
{
    list5.append(ui->assignmentFive->toPlainText());
    list5.append(ui->dateFive->toPlainText());
    QString full;
    for(int i =0;i<list5.length();i+=2){
        qDebug() << i ;
        full += "*" + list5.at(i) + "\nDate: " + list5.at(i+1) + "\n";
    }
    ui->class5Note1->setText(full);
}
