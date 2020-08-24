/*
    16) Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas
        por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
        - �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
        - �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
        - �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
        - �Recursa la materia�, si no aprob� ning�n examen parcial.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, nFInal;

    cout << "Ingrese la primera nota: ";
    cin >> n1;

    cout << "Ingrese la segunda nota: ";
    cin >> n2;

    cout << "Ingrese la tercera nota: ";
    cin >> n2;

    cout << "Ingrese la cuarta nota: ";
    cin >> n3;

    //Promociona

    if (n1 >= 7 && n2 >= 7 && n3 >= 7 && n4 >= 7)
    {
        cout << "Promociona" << endl;
    }

    //Rinde final

    else if (n1 >= 4)
    {
        nFInal++;
    }
    else if (n2 >= 4)
    {
        nFInal++;
    }
    else if (n3 >= 4)
    {
        nFInal++;
    }
    else if (n4 >= 4)
    {
        nFInal++;
    }
    else if (nFInal >= 3)
    {
        cout << "Rinde examen final" << endl;
    }
    //Recupera Parciales

    else if (nFInal == 1)
    {
        cout << "Recupera parciales" << endl;
    }

    //Recursa la materia

    else if (nFInal == 4)
    {
        cout << "Recrusa la materia" << endl;
    }

    return 0;
}
