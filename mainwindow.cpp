#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string"
#include "QString"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
    {
    delete ui;
    }

void MainWindow::on_seven_clicked()
    {
    ui->textView->setText("7");
    }


void MainWindow::on_four_clicked()
    {
    ui->textView->setText("4");
    }

void MainWindow::on_eight_clicked()
    {
    ui->textView->setText("8");
    }

void MainWindow::on_one_clicked()
    {
    ui->textView->setText("1");
    }

void MainWindow::on_two_clicked()
    {
     ui->textView->setText("2");
    }

void MainWindow::on_nine_clicked()
    {
     ui->textView->setText("9");
    }

void MainWindow::on_five_clicked()
    {
     ui->textView->setText("5");
    }

void MainWindow::on_six_clicked()
    {
     ui->textView->setText("6");
    }

void MainWindow::on_three_clicked()
     {
     ui->textView->setText("3");
    }

void MainWindow::on_zero_clicked()
    {
     ui->textView->setText("0");
    }


void MainWindow::on_period_clicked()
    {
    ui->textView->setText(".");
    }



void MainWindow::on_comma_clicked()
    {
    ui->textView->setText(",");
    }



void MainWindow::on_divBtn_clicked()
    {
    ui->textView->setText("/");
    }



void MainWindow::on_multiBtn_clicked()
    {
    ui->textView->setText("x");
    }

void MainWindow::on_subBtn_clicked()
    {
    ui->textView->setText("-");
    }

void MainWindow::on_addBtn_clicked()
    {
    ui->textView->setText("+");
    }

void MainWindow::on_delete_2_clicked()
    {
    ui->textView->setText("0");

    }

void MainWindow::on_equalBtn_clicked(int num1, int num2, int num3, int num4,
                                     int num5, int num6, int num7, int num8)
{
    cin >> num1, num2, num3, num4, num5, num6, num7, num8;

}
