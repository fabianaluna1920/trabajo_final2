#ifndef GUARDAR_H
#define GUARDAR_H


class guardar
{
public:
    guardar();
    int getAng();
    int getPosx();
    int getPosy();
    int getVelx();
    int getVely();
    int getRad();

    void setAng(int a);
    void setPosx(int x);
    void setPosy(int y);
    void setVel(int vx, int vy);
    void setRad(int rad);


private:
    int ang;
    int posx;
    int posy;
    int velx;
    int vely;
    int r;
};

#endif // GUARDAR_H
