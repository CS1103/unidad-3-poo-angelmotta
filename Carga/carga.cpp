#include "carga.h"
#include <cmath>

carga::carga(double _x, double _y, double _q){
    x = _x;     //Posicion en X
    y = _y;     //Posicion en Y
    q = _q;     //q es Valor de Carga
};

double carga::potencial(double _r_x, double _r_y) {
    float k = 8.99 * pow(10,9);     // Valor de la constante K
    float r_x = x - _r_x;
    float r_y = y - _r_y;
    float distancia = sqrt(r_x * r_x + r_y* r_y);
    float v;
    if(distancia == 0){
        v = 0;
    }
    else{
        v = (k * q)/distancia;
    }
    return v;
}