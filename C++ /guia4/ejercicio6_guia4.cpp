#include <iostream>

using namespace std;

int main()
{

    // ingresar numeros
    // finaliza cuando detecta un 0
    // informar cuantos + y cuantos - hay.

    int numeros;
    int positivos = 0, negativos = 0;

    while (numeros != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros;
         if (numeros > 0)
        {
            positivos++;
           
        }
        else
        {
            negativos++;
        }

    }
     cout << "Los numeros positivos son: " <<positivos <<endl;
     cout << "Los numeros negativos son: "<< negativos <<endl;
   
    return 0;
}