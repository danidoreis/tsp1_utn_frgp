/*
    3) Hacer un programa para ingresar por teclado un n�mero y luego informar por pantalla con
       un cartel aclaratorio si el mismo es par o impar.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, rta;

    cout << "Ingrese un numero: ";
    cin >> n;

    rta = n % 2;

    if (rta == 0)
    {
        cout << endl
             << "El numero es par" << endl;
    }
    else
    {
        cout << endl
             << "El numero es impar" << endl;
    }

    return 0;
}