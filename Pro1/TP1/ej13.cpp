/*
    13) Hacer un programa para un cajero autom�tico para ingresar un importe a retirar y
        convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
        Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrara por pantalla que se deber�n entregar
        2 billetes de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100. SIGUE >>
        Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrara por pantalla que se deber�n entregar
        3 billetes de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
        Ejemplo 3: Si el importe a retirar es $ 300 se mostrara por pantalla que se deber�n entregar 1
        billete de $ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
        Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos
        m�ltiplo de $ 100 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.
*/
#include <iostream>
using namespace std;

int main()
{
    int imporRetira;
    int Bmil, Bquini, Bdos, Bcien;
    int resto;

    cout << "Ingrese el importe que desea retirar: ";
    cin >> imporRetira;

    //  1000
    Bmil = imporRetira / 1000;
    resto = imporRetira % 1000;

    //  500
    Bquini = resto / 500;
    resto = resto % 500;

    // 200
    Bdos = resto / 200;
    resto = resto % 200;

    // 100
    Bcien = resto / 100;

    cout << "Cantidad de billetes de 1000 a entregar : " << Bmil << endl;
    cout << "Cantidad de billetes de 500 a entregar : " << Bquini << endl;
    cout << "Cantidad de billetes de 200 a entregar : " << Bdos << endl;
    cout << "Cantidad de billetes de 100 a entregar : " << Bcien << endl;

    return 0;
}