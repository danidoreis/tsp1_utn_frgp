/*
    2) Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla
       con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, resto;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    resto = n2 % n1;

    if (resto == 0)
    {
        cout << "El primer numero es multiplo del segundo";
    }

    return 0;
}