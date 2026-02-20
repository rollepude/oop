#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plusButton_clicked()
{
    if(tila == 2){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug()<< num1 << " + " << num2;

        result = num1 + num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        tila = 0;
    }

}


void MainWindow::on_minusButton_clicked()
{
    if(tila == 2){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug()<< num1 << " + " << num2;

        result = num1 - num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        tila = 0;
    }
}


void MainWindow::on_timesButton_clicked()
{
    if(tila == 2){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug()<< num1 << " + " << num2;

        result = num1 * num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        tila = 0;
    }
}


void MainWindow::on_divideButton_clicked()
{
    if(tila ==2){
        bool ok1, ok2;
        float num1 = locale().toFloat(ui->num1Edit->text(), &ok1);
        float num2 = locale().toFloat(ui->num2Edit->text(), &ok2);

        qDebug() << num1 << " / " << num2;

        float result = num1 / num2;

        QString r = QString::number(result, 'f',2);
        ui->resultEdit->setText(r);
        tila = 0;
    }
}


void MainWindow::on_n1Button_clicked()
{

    setEditNum(1);

}


void MainWindow::on_n2Button_clicked()
{
    setEditNum(2);

}


void MainWindow::on_n3Button_clicked()
{
    setEditNum(3);

}

void MainWindow::on_n4Button_clicked()
{
    setEditNum(4);

}

void MainWindow::on_n5Button_clicked()
{
    setEditNum(5);

}

void MainWindow::on_n6Button_clicked()
{
    setEditNum(6);

}

void MainWindow::on_n7Button_clicked()
{
    setEditNum(7);

}

void MainWindow::on_n8Button_clicked()
{
    setEditNum(8);

}

void MainWindow::on_n9Button_clicked()
{
    setEditNum(9);

}

void MainWindow::on_n0Button_clicked()
{
    setEditNum(0);

}

void MainWindow::setEditNum(int num)
{
    if(tila == 0){
        QString lukunyt = ui->num1Edit->text();
        lukunyt += QString::number(num);
        ui->num1Edit->setText(lukunyt);
    }
    else if(tila == 1){
        QString lukunyt = ui->num2Edit->text();
        lukunyt += QString::number(num);
        ui->num2Edit->setText(lukunyt);

    }

}
void MainWindow::on_enterButton_clicked()
{
    if(tila == 0){
        tila = 1;
    }
    else if(tila == 1){
        tila = 2;
    }

}


void MainWindow::on_clearButton_clicked()
{

QString txt = "0";
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();

    tila = 0;
}

