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
    QString temp =ui->textView->text();
    temp.append( "7" );
    ui->textView->setText( temp );
    }


void MainWindow::on_four_clicked()
{
    QString temp =ui->textView->text();
    temp.append( "4" );
    ui->textView->setText( temp );
}


void MainWindow::on_eight_clicked()

    {
    QString temp =ui->textView->text();
    temp.append( "8" );
    ui->textView->setText( temp );

    }

void MainWindow::on_one_clicked()
    {

    QString temp =ui->textView->text();
    temp.append( "1" );
    ui->textView->setText( temp );

    }

void MainWindow::on_two_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "2" );
    ui->textView->setText( temp );

    }

void MainWindow::on_nine_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "9" );
    ui->textView->setText( temp );
    }


void MainWindow::on_five_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "5" );
    ui->textView->setText( temp );
    }


void MainWindow::on_six_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "6" );
    ui->textView->setText( temp );
    }


void MainWindow::on_three_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "3" );
    ui->textView->setText( temp );
    }


void MainWindow::on_zero_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "0" );
    ui->textView->setText( temp );
    }


/*void MainWindow::on_period_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "7" );
    ui->textView->setText( temp );
    }*/


void MainWindow::on_decimal_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "." );
    ui->textView->setText( temp );
    }




void MainWindow::on_divBtn_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "/" );
    ui->textView->setText( temp );
    }



void MainWindow::on_multiBtn_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "x" );
    ui->textView->setText( temp );
    }


void MainWindow::on_subBtn_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "-" );
    ui->textView->setText( temp );
    }


void MainWindow::on_addBtn_clicked()
    {
    QString temp =ui->textView->text();
    temp.append( "+" );
    ui->textView->setText( temp );
    }


void MainWindow::on_delete_2_clicked()
    {
    ui->textView->setText("0");

    }

/*void MainWindow::on_equalBtn_clicked(int num1, int num2, int num3, int num4,
                                     int num5, int num6, int num7, int num8)
{
    cin >> num1, num2, num3, num4, num5, num6, num7, num8;

}*/

void MainWindow::on_clear_clicked()
{

}
//void MainWindow::display
//{


//}
