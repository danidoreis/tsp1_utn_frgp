/*
    11) Hacer un programa para ingresar cinco n�meros y listar cu�ntos de esos cinco n�meros
        son positivos.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;
    int con;

    con = 0;

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

    if (n1 > 0)
    {
        con++;
    }
    if (n2 > 0)
    {
        con++;
    }
    if (n3 > 0)
    {
        con++;
    }
    if (n4 > 0)
    {
        con++;
    }
    if (n5 > 0)
    {
        con++;
    }

    cout << endl
         << "Esta es la cantidad de numeros positivos: " << con << endl;

    return 0;
}