#include "guardar.h"

guardar::guardar()
{

}

int guardar::getAng()
{
    return ang;
}

int guardar::getPosx()
{
    return posx;
}

int guardar::getPosy()
{
    return posy;
}

int guardar::getVelx()
{
    return velx;
}

int guardar::getVely()
{
    return vely;
}
int guardar::getRad()
{
    return r;
}

void guardar::setAng(int a)
{
    ang=a;
}

void guardar::setPosx(int x)
{
    posx=x;
}

void guardar::setPosy(int y)
{
    posy=y;
}

void guardar::setVel(int vx, int vy)
{
    velx=vx;
    vely=vy;
}
void guardar::setRad(int rad)
{
    r=rad;
}
