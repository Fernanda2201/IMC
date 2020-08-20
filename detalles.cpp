#include "detalles.h"
#include "ui_detalles.h"

Detalles::Detalles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detalles)
{
    ui->setupUi(this);


    QStringList titulos;
    ui->outDetalles->setColumnCount(3);
    titulos<<"Fecha"<<"Peso"<<"Altura";
    ui->outDetalles->setHorizontalHeaderLabels(titulos);
}

Detalles::~Detalles()
{
    delete ui;
}
