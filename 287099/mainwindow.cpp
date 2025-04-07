#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , firstNum(0)
    , isNewNumber(true)
    , currentOperation(None)
{
    ui->setupUi(this);
    ui->label->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::appendNumber(const QString &number)
{
    if (isNewNumber) {
        ui->label->setText(number);
        isNewNumber = false;
    } else {
        QString currentText = ui->label->text();
        if (currentText == "0" && number != ".") {
            ui->label->setText(number);
        } else {
            ui->label->setText(currentText + number);
        }
    }
}

void MainWindow::on_zero_clicked()
{
    appendNumber("0");
}

void MainWindow::on_jeden_clicked()
{
    appendNumber("1");
}

void MainWindow::on_dwa_clicked()
{
    appendNumber("2");
}

void MainWindow::on_trzy_clicked()
{
    appendNumber("3");
}

void MainWindow::on_cztery_clicked()
{
    appendNumber("4");
}

void MainWindow::on_piec_clicked()
{
    appendNumber("5");
}

void MainWindow::on_szesc_clicked()
{
    appendNumber("6");
}

void MainWindow::on_siedem_clicked()
{
    appendNumber("7");
}

void MainWindow::on_osiem_clicked()
{
    appendNumber("8");
}

void MainWindow::on_dziewiec_clicked()
{
    appendNumber("9");
}

void MainWindow::processOperation(Operation op)
{
    double currentNum = ui->label->text().toDouble();

    if (currentOperation == None) {
        firstNum = currentNum;
    } else {
        double result = 0;
        switch (currentOperation) {
        case Add:
            result = kalkulator.add(firstNum, currentNum);
            break;
        case Subtract:
            result = kalkulator.sub(firstNum, currentNum);
            break;
        case Multiply:
            result = kalkulator.mul(firstNum, currentNum);
            break;
        case Divide:
            if (currentNum == 0) {
                QMessageBox::warning(this, "Błąd", "Nie można dzielić przez 0!");
                return;
            }
            result = kalkulator.divi(firstNum, currentNum);
            break;
        case Modulo:
            if (currentNum == 0) {
                QMessageBox::warning(this, "Błąd", "Nie można dzielić przez 0!");
                return;
            }
            result = kalkulator.mod(firstNum, currentNum);
            break;
        default:
            break;
        }

        ui->label->setText(QString::number(result, 'g', 12));
        firstNum = result;
    }

    currentOperation = op;
    isNewNumber = true;
}

void MainWindow::on_plus_clicked()
{
    processOperation(Add);
}

void MainWindow::on_minus_clicked()
{
    processOperation(Subtract);
}

void MainWindow::on_razy_clicked()
{
    processOperation(Multiply);
}

void MainWindow::on_podzielic_clicked()
{
    processOperation(Divide);
}

void MainWindow::on_modulo_clicked()
{
    processOperation(Modulo);
}

void MainWindow::on_rowna_sie_clicked()
{
    processOperation(None);
}

void MainWindow::on_autor_clicked()
{
    QMessageBox::information(this, "O Autorze", "Szymon Nowak 287099");
}
