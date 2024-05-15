#include <iostream>
using namespace std;
int main()
{
    float alfa, beta, gamna;
    cout << "Ingrese su primer angulo: \n";
    cin >> alfa;
    
    cout << "Ingrese su segundo angulo: \n";
    cin >> beta;

    if (alfa + beta <= 180)
    {
    gamna = 180 - alfa - beta ;
    cout << "El tercer angulo es: " << gamna << "\n"; 
    }

    else if (alfa + beta > 180)
    {
        cout << "La suma de los dos angulos debe ser menor a 180  \n";
    }
    

    return 0;
}