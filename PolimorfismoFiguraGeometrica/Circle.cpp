//
// Created by raman on 29/08/2023.
//

#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;
Circle::Circle(float radio) {
    this->radio = radio ;

}

void Circle::calculateArea() {
    float area= pi*(radio*radio);
    cout<< "El araea del circulo es "<< area << endl;
}