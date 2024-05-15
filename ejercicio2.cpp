#include <iostream>
using namespace std;
int main()
{
    float edad;
    cout << "Ingrese su edad: \n";
    cin >> edad;
    
    if (edad < 0 || edad > 100)
    {
        cout << "Error: edad incorrecta \n";
    }
    
   else if (edad <= 17)
    {
        cout << "Usted es menor de edad \n";
    }
    else if (edad >= 18)
    {
        cout << "Usted es mayor de edad \n";
    }
   return 0; 
}