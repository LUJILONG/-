#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calculator.h"
#include "iostream"
#include <QTextStream>
// #include <fstream>
#include <Qfile>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow ,public calculator
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // string num;
    void cle_mark();
    void readfile();
    void writefile();
    bool mark=0;
    char flag;
    int QString_len;
    QString QString_num;
    QString String;
    calculator operation;

    // std::fstream file;
private slots:
    void on_one_clicked();

    void on_two_clicked();

    void on_AC_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_dot_clicked();

    void on_back_clicked();

    void on_add_clicked();

    void on_equal_clicked();

    void on_subtract_clicked();

    void on_multiply_clicked();

    void on_division_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_zerozero_clicked();

    void on_pushButton_3_clicked();



private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
