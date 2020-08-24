/* 5) Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, total;

    float aPorcentaje;
    float bPorcentaje;
    float cPorcentaje;

    cout << "Ingrese la cantidad de alfajores vendidos de A: ";
    cin >> a;

    cout << "Ingrese la cantidad de alfajores vendidos de B:  ";
    cin >> b;

    cout << "Ingrese la cantidad de alfajores vendidos de C:  ";
    cin >> c;

     total = a + b + c;

    aPorcentaje = (float) a * 100 / total;
    bPorcentaje = (float) b * 100 / total;
    cPorcentaje = (float) c * 100 / total;

    cout << endl;


    cout << "A:  " << aPorcentaje << "%" << endl;
    cout << "B:  " << bPorcentaje << "%" << endl;
    cout << "C: " << cPorcentaje << "%" << endl;



    return 0;
}