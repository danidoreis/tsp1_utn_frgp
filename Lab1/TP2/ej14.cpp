/*
    14) Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
        ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar la fecha actual
        ingresando d�a, mes y a�o como 3 datos individuales. Calcular luego la edad en a�os de esa
        persona y listarlo por pantalla.
        Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
        la edad de esa persona es 18 ya que los 19 reci�n los cumple en diciembre.
        Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la
        edad de esa persona es 19.
        Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019
        la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir los 19 a�os.
*/
#include <iostream>
using namespace std;

int main()
{
    int nDia, nMes, nYear, acDia, acMes, acYear, edad;

    char n = 164; //letra ñ

    //fecha de nacimiento
    cout << "Ingrese el dia de nacimiento: ";
    cin >> nDia;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> nMes;

    cout << "Ingrese el a" << n << "o de nacimiento: ";
    cin >> nYear;

    //fecha actual
    cout << endl
         << "Ingrese el dia actual: ";
    cin >> acDia;

    cout << "Ingrese el mes actual: ";
    cin >> acMes;

    cout << "Ingrese el a" << n << "o actual: ";
    cin >> acYear;

    edad = acYear - nYear;

    if (nMes >= acMes && nDia >= acDia)
    {
        edad -= 1;
    }

    cout << endl
         << "Usted tiene " << edad << " a" << n << "os de edad" << endl;

    return 0;
}