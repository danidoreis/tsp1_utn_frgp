/*
    18) Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
        $ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
        $ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
        $ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.
        Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el
        programa calcule e informe el total a pagar por el mismo.
        Ejemplo 1: Un consumo de 55 kilovatios, se calcular�: $ 10 x 55= $ 550
        Ejemplo 2: Un consumo de 125 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 25=$ 1300
        Ejemplo 3: Un consumo de 250 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950
*/
#include <iostream>
using namespace std;

int main()
{
    int kWh, t1, t2, t3, total;

    cout << "Ingrese los kilovatios de consumo: ";
    cin >> kWh;

    if (kWh <= 100)
    {
        total = kWh * 10;
    }
    else if (kWh >= 101 && kWh <= 200)
    {
        t2 = kWh - 100;
        t1 = kWh - t2;
        kWh = t2 * 12 + t1 * 10;
    }
    else
    {
        t2 = kWh - 100;
        t1 = kWh - t2;
        t3 = t2 - 100;

        total = (t1 * 10) + (t2 * 12) + (t3 * 15);
    }

    cout << "Su total a pagar es: $ " << total << endl;

    return 0;
}