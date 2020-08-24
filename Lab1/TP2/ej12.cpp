/*
    12) Hacer un programa para ingresar tres n�meros distintos y listarlos ordenados de menor a
        mayor. Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, posicion;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero distinto al anterior: ";
    cin >> n2;

    cout << "Ingrese el tercer numero distinto a los anteriores: ";
    cin >> n3;

    if (n1 < n2 && n1 < n3)
    {
        if (n2 < n3)
        {
            posicion = 1;
        }
        else
        {
            posicion = 2;
        }
    }
    else if (n2 < n1 && n2 < n3)
    {
        if (n1 < n3)
        {
            posicion = 3;
        }
        else
        {
            posicion = 4;
        }
    }
    else if (n3 < n1 && n3 < n2)
    {
        if (n1 < n2)
        {
            posicion = 5;
        }
        else
        {
            posicion = 6;
        }
    }

    cout << endl
         << "Los numeros ordenados de menor a mayor: " << endl
         << endl;

    switch (posicion)
    {
    case 1:
        cout << n1 << n2 << n3 << endl;
        break;
    case 2:
        cout << n1 << n3 << n2 << endl;
        break;
    case 3:
        cout << n2 << n1 << n3 << endl;
        break;
    case 4:
        cout << n2 << n3 << n1 << endl;
        break;
    case 5:
        cout << n3 << n1 << n2 << endl;
        break;
    case 6:
        cout << n3 << n2 << n1 << endl;
        break;
    }

    return 0;
}