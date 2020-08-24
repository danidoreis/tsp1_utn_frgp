/*
    5) Un negocio de perfumer�a efect�a descuentos seg�n el importe de la venta.
        - Si el importe es menor a $100 aplicar un descuento del 5%
        - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
        - Si el importe es mayor a $500 aplicar un descuento del 15%
       Hacer un programa donde se ingresa el importe original sin descuento y que se informe por
       pantalla el importe con el descuento ya aplicado.
*/
#include <iostream>
using namespace std;

int main()
{
    int importe, descuento;

    cout << "Ingrese el importe: ";
    cin >> importe;

    if (importe < 100)
    {
        descuento = importe * 0.95;
        cout << endl
             << "Total con descuento: $  " << descuento << endl;
    }
    else if (importe >= 100 && importe <= 500)
    {
        descuento = importe * 0.90;
        cout << endl
             << "Total con descuento: $ " << descuento << endl;
    }
    else if (importe > 500)
    {
        descuento = importe * 0.85;
        cout << endl
             << "Total con descuento: $  " << descuento << endl;
    }

    return 0;
}