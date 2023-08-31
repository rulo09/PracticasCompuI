//
// Created by raman on 29/08/2023.
//

#ifndef POLIMORFISMOFIGURAGEOMETRICA_SQUARE_H
#define POLIMORFISMOFIGURAGEOMETRICA_SQUARE_H
#include "GeometricShape.h"


class Square : public GeometricShape {

public:
    Square(float lado);
    void calculateArea () override;
private:
    float lado;
};


#endif //POLIMORFISMOFIGURAGEOMETRICA_SQUARE_H
