/* 1) Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
corresponda.
 */

#include <iostream>
using namespace std;

int main(){
    int hsTrab;
    int valorHoras;
    int sueldo;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> hsTrab;

    cout << "Ingrese el valor por hora trabajada: ";
    cin >> valorHoras;

    sueldo = hsTrab * valorHoras;

    cout << "Sueldo a cobrar: $" << sueldo;


    return 0;
}
