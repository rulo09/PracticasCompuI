//
// Created by raman on 21/08/2023.
//

#include "triangulo.h"
//Este es el cuerpo de nuestras funciones
void triangulo:: setVertex(int vertex[]){ //Tenemos un vertex que es recibido por el usuario
    vertices[0] = vertex[0];//El valor 0 de vertice 1 es igual al valor 0 de vertex
    vertices[1] = vertex[1];
    vertices[2] = vertex[2];
    vertices [3] = vertex [3];
    vertices [4] = vertex [4];
    vertices[5] = vertex[5];
/* 0    1   2   3   4   5
   x1   y1  x2  y2  x3  y3*/
}


void triangulo:: setBase(int vertices[]){ //Siempre la primera linea es un copy paste de .h
    base = vertices[2] - vertices[0] ;
}
void triangulo::setAltura(int vertices[]){
    altura = vertices[5] - vertices[3];
}
void triangulo::setArea(){
    area = base * altura/2;
}
float triangulo::getArea() {
    return area;
}