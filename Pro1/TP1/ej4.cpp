/*
   4) Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
      avi�n y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de
      ocupaci�n y el porcentaje de no ocupaci�n del mismo.
      Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
      ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
*/
#include <iostream>

using namespace std;

int main()
{
    int asientosDis;
    int pasajesOcu;

    int total;

    float porOcu;
    float porDis;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> asientosDis;

    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajesOcu;

    total = asientosDis + pasajesOcu;

    porDis = (float) asientosDis * 100 / total;
    porOcu = (float) pasajesOcu * 100 / total;

    cout << endl;
    cout << "Porcentaje ocupado: " << porOcu << "%" << endl;
    cout << "Porcentaje no ocupado: " << porDis << "%" << endl;


    return 0;
}
