//
// Created by raman on 24/08/2023.
//

#ifndef ANIMALS_PERRO_H
#define ANIMALS_PERRO_H

#include "animal.h"
using namespace std;

class perro : public animal { //Nuestra clase perro hereda atributos de la clase animal
public:
    perro(int age, string raza) : animal(age, raza) { //perro hereda edad y shify de la clase animal

    }

};

#endif //ANIMALS_PERRO_H

