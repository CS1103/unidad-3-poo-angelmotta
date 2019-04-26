#include <iostream>
#include <vector>
#include "carga.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<carga> vect_cargas;
    carga q1(2,3,2);
    std::cout << "El potencial es: " << q1.potencial(0,0) << std::endl;
    carga q2(5,8,0.03);
    std::cout << "El potencial es: " << q2.potencial(0,0);
    return 0;
}