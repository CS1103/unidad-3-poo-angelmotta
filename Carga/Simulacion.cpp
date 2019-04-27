#include "Simulacion.h"
#include <ctime>
#include <iomanip>
#include <vector>
#include <iostream>
#include "carga.h"

void Simulacion::generar_cargas() {
    std::vector<carga> vector_cargas;
    srand(time(0));
    for(int i=0;i<=2;i++){  // genera 3 cargas en posiciones random
        //printf("random value: %d \n", (rand()%6));
        int value_x = (rand()%10);
        int value_y = (rand()%10);
        int value_q = (rand()%21)-10;
        printf("value x: %d value y: %d carga: %d \n", value_x, value_y, value_q);
        vector_cargas.push_back(carga(value_x, value_y, value_q));
    }
    //Lee las cargas generadas desde el vector
    /*
    std::cout << "Lee las cargas generadas desde el vector" << std::endl;
    std::vector<carga>::iterator ptr;
    for(ptr = vector_cargas.begin(); ptr < vector_cargas.end(); ptr++){
        std::cout << "value x: " << ptr->x << ", value y: " << ptr->y << ", carga: " << ptr->q << std::endl;
    }*/
}
