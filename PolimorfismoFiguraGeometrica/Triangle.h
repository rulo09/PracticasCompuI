//
// Created by raman on 29/08/2023.
//

#ifndef POLIMORFISMOFIGURAGEOMETRICA_TRIANGLE_H
#define POLIMORFISMOFIGURAGEOMETRICA_TRIANGLE_H
#include "GeometricShape.h"

class Triangle : public GeometricShape { //Clase hija de figura geometrica incluir public
public:
    Triangle(float lado, float altura); //El constructor va primero
    void calculateArea() override; // Sobreescribimos la funcion
private:
    float lado;
    float altura;
};


#endif //POLIMORFISMOFIGURAGEOMETRICA_TRIANGLE_H
