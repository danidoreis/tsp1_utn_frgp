/*
    7) Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos,
       cuántos son negativos, y cuántos iguales a cero.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int conPos = 0;
    int conNeg = 0;
    int conNeutro = 0;

    for (i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if (n > 0)
        {
            conPos++;
        }
        else if (n < 0)
        {
            conNeg++;
        }
        else
        {
            conNeutro++;
        }
    }

    cout << endl
         << "Se contaron " << conPos << " numeros positivos" << endl;
    cout << endl
         << "Se contaron " << conNeg << " numeros negativos" << endl;
    cout << endl
         << "Se contaron " << conNeutro << " numeros iguales a cero" << endl;

    return 0;
}