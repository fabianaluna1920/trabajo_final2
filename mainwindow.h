
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "guardar.h"
#include "Dialogo.h"
#include <particula.h>
#define ANCHO 1000
#define ALTO 500

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    vector<guardar>datos;

private slots:
    void on_pushButton_clicked();
    void actualizarEscena();

    void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;
    Particula *particle;
    QTimer *timer;

};

#endif // MAINWINDOW_H
