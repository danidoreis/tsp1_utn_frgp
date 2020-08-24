/* 1) Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Ingrese un numero:  ";
    cin >> n;

    if (n < 0)
    {

        cout << n << " Es negativo" << endl;
    }

    if (n > 0)
    {
        cout << n << " Es positivo" << endl;
    }
   
    if (n == 0)
    {
        cout << n << " Es neutro" << endl;
    }
    return 0;
}
