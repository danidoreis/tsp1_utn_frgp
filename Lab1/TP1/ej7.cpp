/* 7) Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de
descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a
pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar
será de $ 800. */

#include <iostream>

using namespace std;

int main()
{
    int venta, descuento, desPorc, total;
   
    cout << "Ingrese el importe de la venta: ";
    cin >> venta;

    cout << "Ingrese el porcentaje de descuento por venta: ";
    cin >> desPorc;

    descuento = venta * (desPorc / 100);
    total = venta - descuento;

    cout << "Total: $" << total;

    return 0;
}