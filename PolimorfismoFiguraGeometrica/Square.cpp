//
// Created by raman on 29/08/2023.
//

#include "Square.h"
#include <iostream>
using namespace std;
Square::Square(float lado) {
    this->lado = lado ;
}
void Square::calculateArea() {
    int area= (lado * lado);
    cout<< " El area del cuadrado es "<< area<< endl;
}
