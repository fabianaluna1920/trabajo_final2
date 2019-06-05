#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "particula.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    timer = new QTimer(this);
    escena = new QGraphicsScene(this);
    escena->setSceneRect(0,0,ANCHO,ALTO);

    ui->Fondo->setScene(escena);

    escena->addRect(escena->sceneRect());

    particle = new Particula(90,90,19);  //Declarando un objeto grafico de la clase Part
    escena->addItem(particle); //Agregando el objeto grafico a la escena

    particle->mp_parabolico(ALTO);

    timer->stop();
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizarEscena()));

}
MainWindow::~MainWindow()
{
    delete ui;
    delete particle;
    delete timer;
    delete escena;
}

void MainWindow::actualizarEscena(void)
{
   particle->mp_parabolico(ALTO);
   particle->colisionParticula(ANCHO,ALTO);
}

void MainWindow::on_pushButton_clicked()
{
    int result;

    Dialogo objeto(this);
    objeto.setWindowTitle("Movimiento parabolico");
    result=objeto.exec();

    if (result==QDialog::Rejected)
        return;

    guardar objeto1;

    objeto1.setVel(objeto.getVel_Inic(),objeto.getVel_Inic());
    objeto1.setPosx(objeto.getPos_InicX());
    objeto1.setPosy(objeto.getPos_InicY());
    objeto1.setAng(objeto.getAngulo());
    objeto1.setRad(objeto.getRadio());

    datos.insert(datos.begin(),objeto1);

    int pox=datos.at(0).getPosx();
    int poy=datos.at(0).getPosy();
    int ra=datos.at(0).getRad();
    int  a=datos.at(0).getAng();
    int vx=datos.at(0).getVelx();
    int vy=datos.at(0).getVely();

     particle->setposicion(pox, poy);
     particle->setradio(ra);
     particle->setangulo(a);
     particle->setvelocidad(vx,vy);

     particle->mp_parabolico(ALTO);

     timer->start(30);
}


void MainWindow::on_pushButton_3_clicked()
{
    int result;

    Dialogo objeto(this);
    objeto.setWindowTitle("Rebotes");
    result=objeto.exec();

    if (result==QDialog::Rejected)
        return;

    guardar objeto1;

    objeto1.setVel(objeto.getVel_Inic(),objeto.getVel_Inic());
    objeto1.setPosx(objeto.getPos_InicX());
    objeto1.setPosy(objeto.getPos_InicY());
    objeto1.setAng(objeto.getAngulo());
    objeto1.setRad(objeto.getRadio());

    datos.insert(datos.begin(),objeto1);

    int pox=datos.at(0).getPosx();
    int poy=datos.at(0).getPosy();
    int ra=datos.at(0).getRad();
    int  a=datos.at(0).getAng();
    int vx=datos.at(0).getVelx();
    int vy=datos.at(0).getVely();

    particle->setposicion(pox, poy);
    particle->setradio(ra);
    particle->setangulo(a);
    particle->setvelocidad(vx,vy);

    particle->mp_parabolico(ALTO);
    particle->colisionParticula(ANCHO,ALTO);
    timer->start(30);
}

