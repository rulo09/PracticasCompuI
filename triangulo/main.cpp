#include <iostream>
#include "triangulo.h"
using namespace std;
int main() {
    triangulo t1;
    int vertices[] = {1,1 ,3,1,3,3};

    t1.setVertex(vertices); // hacemos que el objeto creado t1 llame a las funciones las cuales tienen el parametro vertices
    t1.setBase(vertices);
    t1.setAltura(vertices);
    t1.setArea();
    t1.getArea();


    cout << "El triangulo tiene un area de " << t1.getArea();

    return 0;
}
