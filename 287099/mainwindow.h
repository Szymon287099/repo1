#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Kalkulator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_zero_clicked();
    void on_jeden_clicked();
    void on_dwa_clicked();
    void on_trzy_clicked();
    void on_cztery_clicked();
    void on_piec_clicked();
    void on_szesc_clicked();
    void on_siedem_clicked();
    void on_osiem_clicked();
    void on_dziewiec_clicked();

    void on_plus_clicked();
    void on_minus_clicked();
    void on_razy_clicked();
    void on_podzielic_clicked();
    void on_modulo_clicked();
    void on_rowna_sie_clicked();
    void on_autor_clicked();

private:
    Ui::MainWindow *ui;
    Kalkulator kalkulator;
    double firstNum;
    bool isNewNumber;
    enum Operation {None, Add, Subtract, Multiply, Divide, Modulo};
    Operation currentOperation;

    void appendNumber(const QString &number);
    void processOperation(Operation op);
};
#endif // MAINWINDOW_H
