/*
    4) Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla la
       diferencia absoluta entre ambos.
       Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
       Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, r;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    r = n1 - n2;

    if (r < 0)
    {
        r = r * (-1);
    }

    cout << "La diferencia es: " << r << endl;

    return 0;
}