/*
    5) Hacer un programa para que el usuario ingrese dos números y luego el programa muestre
       por pantalla los números entre el menor y el mayor de ambos.
       Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
       y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, menor, mayor, i;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if (n1 < n2)
    {
        menor = n1;
        mayor = n2;
    }
    else
    {
        menor = n2;
        mayor = n1;
    }

    for (i = menor - 1; i < mayor; i++)
    {
        cout << i << endl;
    }

    return 0;
}