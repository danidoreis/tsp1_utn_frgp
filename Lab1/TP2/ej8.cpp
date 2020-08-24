/*
    8) Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la
       longitud de los tres lados de un tri�ngulo y luego listar que tipo de tri�ngulo es:
        - Equil�tero: si los tres lados son iguales
        - Is�sceles: si dos de los tres lados son iguales
        - Escaleno: si los tres lados son distintos entre s�
*/
#include <iostream>
using namespace std;

int main()
{
    int l1, l2, l3;

    cout << "Ingrese el primer lado: ";
    cin >> l1;

    cout << "Ingrese el primer lado: ";
    cin >> l2;

    cout << "Ingrese el primer lado: ";
    cin >> l3;

    if (l1 == l2 && l2 == l3)
    {
        cout << endl
             << "Es equilatero." << endl;
    }
    else if (l1 == l2 || l2 == l3 || l1 == l3)
    {
        cout << endl
             << "El isosceles." << endl;
    }
    else
    {
        cout << endl
             << "El escaleno." << endl;
    }

    return 0;
}