//
// Created by raman on 28/08/2023.
//

#ifndef BANCOEJEMPLO_CUENTABANCO_H
#define BANCOEJEMPLO_CUENTABANCO_H
#include <string>

using namespace std;

struct bankAccount{ //Hacemos una estructura que tenga el n de cuenta, nombre y saldo
    int accountNumber;
    string name;
    int saldo;
};

class CuentaBanco {
private:
    bankAccount cuenta; //nuestra estructura tiene el constructor cuenta


public:
    CuentaBanco(int accountNumber, string name, int saldo); //Constructor de la clase

    void addMoney(int saldo);
    void withdrawMoney(int saldo);
};


#endif //BANCOEJEMPLO_CUENTABANCO_H