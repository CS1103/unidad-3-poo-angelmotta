//
// Created by Angel Motta on 2019-04-24.
//

#ifndef CARGA_CARGA_H
#define CARGA_CARGA_H


class carga {
public:
    double x,y,q;
    carga(){};
    carga(double _x, double _y, double _q);
    double potencial(double _r_x, double _r_y);
};


#endif //CARGA_CARGA_H
