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
        classCount++;
        break;
    case 2:
        ui->courseThree->show();
        ui->course3Label->show();
        classCount++;
        break;
    case 3:
        ui->courseFour->show();
        ui->course4Label->show();
        classCount++;
        break;
    case 4:
        ui->courseFive->show();
        ui->course5Label->show();
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
        classCount--;
        break;
    case 3:
        ui->courseThree->hide();
        ui->course3Label->hide();
        classCount--;
        break;
    case 4:
        ui->courseFour->hide();
        ui->course4Label->hide();
        classCount--;
        break;
    case 5:
        ui->courseFive->hide();
        ui->course5Label->hide();
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
