#include <iostream>

using namespace std;


/*
pedir lista de 7 numeros
informar el primer numero par ingresado y su ubicacion
informar el uilitmo de los numeros primos y su ubicacion.


*/
int main(){

int numero, primerNumeroPar = 0;
int ultimoPrimo, ubicacionUltimoPrimo;
int ubicacionPrimerNumeroPar = -1;
int par = 0;
int i = 0;

for( i = 0; i < 7; i++ ){

    cout <<"Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0 && ubicacionPrimerNumeroPar == -1) {
            primerNumeroPar = numero;
            ubicacionPrimerNumeroPar = i + 1;  // Guardar la ubicación (1 a 7)
        }
}
if (ubicacionPrimerNumeroPar != -1) {
        cout << "El primer numero par es el numero: " << primerNumeroPar << endl;
        cout << "y su posicion es: " << ubicacionPrimerNumeroPar << endl;
    } else {
        cout << "No se ingreso ningun numero par." << endl;
    }

    return 0;
}