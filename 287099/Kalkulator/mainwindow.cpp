#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

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

void MainWindow::on_zero_clicked()
{
    ui->label->setText("0");
}

void MainWindow::on_jeden_clicked()
{
    ui->label->setText("1");
}


void MainWindow::on_dwa_clicked()
{
    ui->label->setText("2");
}


void MainWindow::on_trzy_clicked()
{
    ui->label->setText("3");
}


void MainWindow::on_cztery_clicked()
{
    ui->label->setText("4");
}


void MainWindow::on_piec_clicked()
{
    ui->label->setText("5");
}


void MainWindow::on_szesc_clicked()
{
    ui->label->setText("6");
}


void MainWindow::on_siedem_clicked()
{
    ui->label->setText("7");
}


void MainWindow::on_osiem_clicked()
{
    ui->label->setText("8");
}


void MainWindow::on_dziewiec_clicked()
{
    ui->label->setText("9");
}


void MainWindow::on_autor_clicked()
{
    QMessageBox::information(this, "O Autorze", "Szymon Nowak 287099");
}

