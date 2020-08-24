/*
    13) Hacer un programa para leer tres n�meros diferentes y determinar e informar el n�mero
        del medio. Ejemplo: si se ingresan 6, 10, 8, se emitir� 8.
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

    if (n1 > n2 && n2 < n3)
    {
        if (n3 > n1)
        {
            cout << endl
                 << "El numero del medio es: " << n1 << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "El numero del medio es: " << n3 << endl
                 << endl;
        }
    }
    else if (n1 < n2 && n2 > n3)
    {
        if (n3 < n1)
        {
            cout << endl
                 << "El numero del medio es: " << n1 << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "El numero del medio es: " << n3 << endl
                 << endl;
        }
    }
    else if (n1 < n2 && n2 < n3)
    {
        if (n3 > n1)
        {
            cout << endl
                 << "El numero del medio es: " << n2 << endl
                 << endl;
        }
    }
    else
    {
        cout << endl
             << "El numero del medio es: " << n2 << endl
             << endl;
    }

    return 0;
}