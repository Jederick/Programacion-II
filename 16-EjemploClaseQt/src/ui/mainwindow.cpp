#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../calculadoraLocal/calculadoralocal.h"

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


void MainWindow::on_btnMultiplicarLocal_clicked()
{
    CalculadoraLocal *calc = new CalculadoraLocal();
    int resultado = calc->multiplicar(8,5);

    QString stringResultado = QString::number(resultado);
    this->ui->labelResultado->setText(stringResultado);

    delete calc;
}
