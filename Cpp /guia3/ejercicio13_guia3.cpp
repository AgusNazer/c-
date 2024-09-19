#include <iostream>

using namespace std;
// ejercicio 13
int main()
{

    int numeroIngresado;
    int numeroNuevo;
    int maxPar;
    int numerosPares = 0;

    for (int i = 0; i <= 9; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeroIngresado;

        if (numeroIngresado % 2 == 0) {
            maxPar = numeroIngresado;
            if( numeroIngresado > maxPar ){
                maxPar = numeroIngresado;
            }
        }
    }
     cout << " Este es el numer PAR mas grande: " << maxPar << endl; 

    return 0;
}
