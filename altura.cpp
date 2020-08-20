#include "altura.h"
#include "ui_altura.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

Altura::Altura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Altura)
{
    ui->setupUi(this);
}

Altura::~Altura()
{
    delete ui;
}

int Altura::peso() const
{
    return ui->inPeso->value();

}

int Altura::altura() const
{
    return ui->inAltura->value();
}




void Altura::on_cmdOC_accepted()
{

accept();
}

void Altura::on_cmdOC_rejected()
{
    reject();
}

void Altura::imc()
{

}
