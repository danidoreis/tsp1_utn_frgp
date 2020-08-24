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

    if (n1 == n2 & n2 == n3)
    {
        cout << "Todos los numeros son iguales:" << endl
             << n1 << endl
             << n2 << endl
             << n3 << endl;
    }

    return 0;
}
