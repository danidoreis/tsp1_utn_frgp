/*
    2) Hacer un programa que solicite por teclado que se ingresen dos n�meros y luego
    guardarlos en dos variables distintas. A continuaci�n se deben intercambiar mutuamente los
    valores en ambas variables y mostrarlos por pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
    entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/
#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int nx;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    nx = n2;
    n2 = n1;
    n1 = nx;

    cout << endl;

    cout << "El valor del primer numero es: " << n1 << endl;
    cout << "El valor del segundo numero es: " << n2 << endl;


    return 0;
}
