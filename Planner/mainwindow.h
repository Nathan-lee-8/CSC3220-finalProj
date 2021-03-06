#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QLinkedList>

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
    void on_calendarWidget_clicked(const QDate &date);

    void on_previousButton_clicked();

    void on_nextButton_clicked();

    void on_addClassButton_clicked();

    void on_removeClassButton_clicked();

    void setTime();

    void on_addNote5_clicked();

    void on_addOne_clicked();

    void on_addTwo_clicked();

    void on_addThree_clicked();

    void on_addFour_clicked();

    void on_addFive_clicked();

    void on_toPage3_clicked();

private:
    QStringList list1;
    QStringList list2;
    QStringList list3;
    QStringList list4;
    QStringList list5;
    Ui::MainWindow *ui;
    QTimer *timer;
    unsigned int classCount = 3;
};
#endif // MAINWINDOW_H
