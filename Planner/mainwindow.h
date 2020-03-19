#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    unsigned int classCount = 3;
};
#endif // MAINWINDOW_H
