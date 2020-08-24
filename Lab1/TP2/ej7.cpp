/*
    7) Hacer un programa para ingresar por teclado tres n�meros e informar con una leyenda
       aclaratoria si los tres son todos distintos entre s�, caso contrario no emitir nada.
       Ayuda: Si A es distinto de B y B es distinto de C, es no s�gnica que A y C sean distintos.
       Ejemplo: A=8, B=6 y C=8.
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

    if (n1 != n2 && n1 != n3 && n2 != n3)
    {
        cout << endl
             << "Todos los numeros son distintos" << endl
             << n1 << endl
             << n2 << endl
             << n3 << endl;
    }

    return 0;
}