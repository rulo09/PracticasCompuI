//
// Created by raman on 17/08/2023.
//

#include "Persona.h"
void persona::setNombre(string nom){
    Nombre = nom;
}
string persona::getNombre() {
    return Nombre;
}
void persona::setEdad(int age){
    edad = age;
}
int persona::getEdad() {
    return edad;
}
void persona::setAltura(float height){
    altura = height;
}
float persona::getAltura(){
    return altura;
}
void persona::setPeso(float weight) {
    peso = weight;
}
float persona::getPeso(){
    return peso;
}