//
// Created by raman on 29/08/2023.
//

#ifndef POLIMORFISMOFIGURAGEOMETRICA_CIRCLE_H
#define POLIMORFISMOFIGURAGEOMETRICA_CIRCLE_H
#include "GeometricShape.h"
#include <cmath>
class Circle: public GeometricShape{
public:
    Circle(float radio);
    void calculateArea() override;
private:
    float radio ;
    double pi = M_1_PI ;



};


#endif //POLIMORFISMOFIGURAGEOMETRICA_CIRCLE_H
