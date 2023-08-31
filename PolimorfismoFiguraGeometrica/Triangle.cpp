//
// Created by raman on 29/08/2023.
//

#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(float lado, float altura) {
    this->altura = altura; //this hace referencia al mimebro de esa clase
    this->lado = lado;
}
void  Triangle::calculateArea() {
    int area =  (lado * altura)/2 ;
    cout << "El area del triangulo es " << area << endl;
}