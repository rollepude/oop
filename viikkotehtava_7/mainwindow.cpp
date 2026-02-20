#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QString txt = "27";
    //ui->lineEdit->setText(txt);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_countButton_clicked()
{
    QString luku = ui->countEdit->text();
    qDebug()<< "Nykyinen luku merkkijonona " << luku;
    int num = luku.toInt();
    qDebug()<< "NYkyinen luku kokonaislukuna " << num;
    num += 1;
    QString txt = QString::number(num);
     ui->countEdit->setText(txt);

}


void MainWindow::on_resetButton_clicked()
{
    QString txt = "0";
    ui->countEdit->setText(txt);
}

