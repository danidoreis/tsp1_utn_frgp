/*
    9) Hacer un programa para ingresar tres n�meros y listar el m�ximo de ellos.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << endl
             << "El maximo de los numeros es: " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << endl
             << "El maximo de los numeros es: " << n2 << endl;
    }
    else
    {
        cout << endl
             << "El maximo de los numeros es: " << n3 << endl;
    }

    return 0;
}