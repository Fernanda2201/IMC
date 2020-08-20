#include "principal.h"
#include "ui_principal.h"

#include "detalles.h"
#include "altura.h"
#include <QTableWidgetItem>
Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);


}

Principal::~Principal()
{
    delete ui;
}




void Principal::on_cmdDetalles_clicked()
{
    int res;

    Detalles d(this);
   res= d.exec();
   if(res==QDialog::Rejected)
       return;



}

void Principal::on_cmdEditar_clicked()
{
    double peso, altura;
    int fila;
    int resp;
    Altura at(this);
    resp = at.exec();

    peso=at.peso();
    altura=at.altura();

    ui->inAltura->insertRow(ui->inAltura->rowCount());
    fila=ui->inAltura->rowCount()-1;
    ui->inAltura->setItem(fila, peso, new QTableWidgetItem(QString::number(peso)));
}




