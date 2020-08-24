/* 6) Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por
semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%. */

#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3, s4, recPromedio;

    float s1Por, s2Por, s3Por, s4Por, PromXsemana;

    cout << "Ingrese la recaudacion de la semana 1: ";
    cin >> s1;

    cout << "Ingrese la recaudacion de la semana 2:  ";
    cin >> s2;

    cout << "Ingrese la recaudacion de la semana 3:  ";
    cin >> s3;

    cout << "Ingrese la recaudacion de la semana 4:  ";
    cin >> s4;

    recPromedio = s1 + s2 + s3 + s4;
    PromXsemana = (float)recPromedio / 4;

    s1Por = (float)s1 * 100 / recPromedio;
    s2Por = (float)s2 * 100 / recPromedio;
    s3Por = (float)s3 * 100 / recPromedio;
    s4Por = (float)s4 * 100 / recPromedio;

    cout << endl;
    cout << "El promedio de recaudacion por semana es: $" << PromXsemana << endl
         << endl;
    cout << "Semana 1:  " << s1Por << "%" << endl;
    cout << "Semana 2:  " << s2Por << "%" << endl;
    cout << "Semana 3: " << s3Por << "%" << endl;
    cout << "Semana 4: " << s4Por << "%" << endl;

    return 0;
}