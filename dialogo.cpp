#include "dialogo.h"
#include "ui_dialogo.h"

Dialogo::Dialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogo)
{
    ui->setupUi(this);
}

Dialogo::~Dialogo()
{
    delete ui;
}
void Dialogo::on_buttonBox_accepted()
{
    accept();
}
void Dialogo::on_buttonBox_rejected()
{
   reject();
}
int Dialogo::getPos_InicX()
{
    return ui->spinBox->value();
}
int Dialogo::getPos_InicY()
{
    return ui->spinBox_2->value();
}

int Dialogo::getVel_Inic()
{
    return ui->spinBox_3->value();
}

int Dialogo::getAngulo()
{
    return ui->spinBox_4->value();
}

int Dialogo::getRadio()
{
    return ui->spinBox_5->value();
}

