//
// Created by raman on 21/08/2023.
//

#ifndef TRIANGULO_TRIANGULO_H
#define TRIANGULO_TRIANGULO_H
#include <string>
using namespace std;
class triangulo {
private:
    int vertices[6]; //Definimos cada vector como un arreglo de dos posiciones (Ejes X,Y)

    int base; //Definimos variables base y altura
    int altura;
    int area;
public:
    void setVertex(int vertices[]); //Estas son nuestras funciones
    void setBase(int vertices[]); //Pasamos a nuestra funcion los paramteros
    void setAltura(int vertices[]);
    void setArea();
    float getArea();
};



#endif //TRIANGULO_TRIANGULO_H

