//
// Created by raman on 17/08/2023.
//

#ifndef POOEJEMPLO1_PERSONA_H
#define POOEJEMPLO1_PERSONA_H
#include <string>

using namespace std;

class persona {
    //Los atributos deben ser privados
private:
    string Nombre;
    int edad;
    float altura, peso;

public:
    void setNombre(string nom);//set nos sirve para declarar el nombre (En este caso en 0)
    string getNombre();//get nos sirve para obtener el nombre
    void setEdad(int age);
    int getEdad(); //No olvides poner el () para indicar que es una función
    void setAltura(float height);
    float getAltura();
    void setPeso(float weight);
    float getPeso();
};

#endif //POOEJEMPLO1_PERSONA_H
