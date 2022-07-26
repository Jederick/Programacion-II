#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../../lib/include/tienda.h"
#include "./../../lib/include/producto.h"

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


void MainWindow::on_btnCrearTienda_clicked()
{
    QString nombreTienda = this->ui->txtNombreTienda->text();
    QString paginaWeb = this->ui->txtPaginaWeb->text();
    QString direccionFisica = this->ui->txtDireccionFisica->text();
    QString numeroTelefono = this->ui->txtNumeroTelefono->text();
    Tienda *tienda = new Tienda(nombreTienda.toStdString(), paginaWeb.toStdString(), direccionFisica.toStdString(), numeroTelefono.toStdString());


    delete tienda;
}


