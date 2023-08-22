//
// Created by raman on 22/08/2023.
//

#ifndef TIENDADEPARTMENTAL_PRODUCTO_H
#define TIENDADEPARTMENTAL_PRODUCTO_H
#include <string>
using namespace std;

class Producto {
private:
    float precio;
    string nombre;
    int inventario;
    int barras[4];

public:
    void setCompra(float precio, string nombre, int barras[]);
    void setInventario(int inventario);
};


#endif //TIENDADEPARTMENTAL_PRODUCTO_H
