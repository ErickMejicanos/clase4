#include <iostream> 
using namespace std;
int main()
{
    float angulo;
    cout << "Ingrese el angulo: \n";
    cin >> angulo;

    if (angulo < 90)
    {
        cout << "El angulo es agudo \n";
    }
    else if (angulo > 90)
    {
        cout << "El angulo es obtuso \n";
    }
    else if (angulo = 90)
    {
        cout << "El angulo es recto \n";
    }
   return 0; 
}