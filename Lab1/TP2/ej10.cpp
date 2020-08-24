/*
    10) Hacer un programa para ingresar cinco n�meros y listar el m�ximo de ellos.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    cout << "Ingrese el quinto numero: ";
    cin >> n5;

    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
    {
        cout << endl << "El maximo numero es: " << n1 << endl;
    }
    else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
    {
        cout << endl << "El maximo numero es: " << n2 << endl;
    }
    else if(n3 > n1 && n3 > n4 && n3 > n4 && n3 > n5)
    {
        cout << endl << "El maximo numero es: " << n2 << endl;
    }
    else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 >n5)
    {
        cout << endl << "El maximo numero es: " << n4 << endl;
    }
    else
    {
        cout << endl << "El maximo numero es: " << n5 << endl;
    }
    return 0;
}