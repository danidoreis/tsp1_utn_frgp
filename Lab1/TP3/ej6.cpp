/*
    6) Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
       y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos.
       Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará Cantidad de Positivos: 4
       Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará Cantidad de Positivos: 0
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i;
    int con = 0;

    cout << "Ingrese la cantidad de numeros ingresar: ";
    cin >> n1;

    cout << endl
         << "Ingresar los " << n1 << " numeros." << endl
         << endl;

    for (i = n1; i > 0; i--)
    {
        cout << "Ingrese un numero: ";
        cin >> n2;

        if (n2 > 0)
        {
            con++;
        }
    }

    cout << endl
         << "Se contaron:  " << con << " numeros positivos" << endl;

    return 0;
}