#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_seven_clicked();

    void on_four_clicked();

    void on_eight_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_nine_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_three_clicked();

    void on_zero_clicked();


    void on_period_clicked();

    void on_comma_clicked();

    void on_divBtn_clicked();

    void on_multiBtn_clicked();

    void on_subBtn_clicked();

    void on_addBtn_clicked();

    void on_delete_2_clicked();

    void on_equalBtn_clicked(int num1, int num2, int num3, int num4, int num5, int num6, int num7, int num8);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
