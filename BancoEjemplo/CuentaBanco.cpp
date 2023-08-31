//
// Created by raman on 28/08/2023.
//

#include "CuentaBanco.h"
#include "iostream"
using namespace std;
CuentaBanco::CuentaBanco(int accountNumber, string name, int saldo) {
  cuenta.accountNumber= accountNumber;
  cuenta.name = name;
  cuenta.saldo = saldo; //La referencia cuenta de nuestra estructura bankaccount
  //Recibe los parámetros del constructor cuentabanco para tner to do solo en cuenta
}

void CuentaBanco::addMoney(int saldo) {
    int suma = 0 ;
    cout << "Tu saldo actual es de " << saldo <<  " Cuanto dinero vas a depositar?" << endl;
    cin >> suma;
    suma = suma + saldo;
    cout << "Tu nuevo saldo es de " << suma << endl;
}

void CuentaBanco::withdrawMoney(int saldo) {
    int resta;
    cout << "Tu saldo actual es de " << saldo << endl;
    if (saldo > 0)
        cout<< "Cuanto dinero vas a retirar"<< endl;
        cin>> resta;
    if ( resta >= saldo){
        cout<< "Tiene un saldo menor de lo que desea retirar"<< endl;
        exit(1);
    }
    else
        (resta<= saldo );
        resta = saldo - resta ;
        cout<< "Tu nuevo saldo es de:"<< resta;

}