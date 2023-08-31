//
// Created by raman on 22/08/2023.
//
#include "iostream"
#include "Producto.h"

using namespace std;

Producto::Producto(float precio,string nombre, int barras[] ): nombre(), precio(), barras(){}


void Producto::setCompra(float precio, string nombre, int *barras) {
    cout << "Ha comprado" << nombre << "por un valor de" << precio << endl;

}