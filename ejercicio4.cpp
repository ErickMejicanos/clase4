#include <iostream>
using namespace std;
int main()
{
    int corto1, corto2, parcial1, parcial2, laboratorio, proyecto, promedio;
    string nombre;
    cout << "Ingrese su nombre: \n";
    cin >> nombre;

    cout << "Ingrese la nota del corto 1: \n";
    cin >> corto1;

    cout << "Ingrese la nota del corto 2: \n";
    cin >> corto2;

    cout << "Ingrese la nota del parcial 1: \n";
    cin >> parcial1;

    cout << "Ingrese la nota del parcial 2: \n";
    cin >> parcial2;

    cout << "Ingrese la nota del laboratorio: \n";
    cin >> laboratorio;

    cout << "Ingrese la nota del proyecto: \n";
    cin >> proyecto;

    promedio = (corto1 *0.10) + (corto2 *0.10) + (parcial1 * 0.15) + (parcial2 * 0.20) + (laboratorio * 0.20) + (proyecto * 0.25); 

    if (promedio >= 6)
    {
        cout << nombre << " felicidades paso la materia :) \n" << "su promedio es: " << promedio << "\n";
    }
    else if (promedio <= 5)
    {
    cout << nombre << " lamentablemente dejo la materia :( \n" << " su promedio es: " << promedio << "\n";
    }
    return 0; 
}