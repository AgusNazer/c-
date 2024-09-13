#include <iostream>

using namespace std;

// Hacer un programa para ingresar una lista de 10 números y luego informar cuántos
//  de los números ingresados son primos. Se informa 1 resultado al final.

int main(){

int numero, cantidadPrimos = 0;

for( int i = 1; i <= 10; i++){ 
    cout << "Ingrese un numero: ";
    cin >> numero;

// Verificar si el número es primo
        int cantidadDivisores = 0;
    
    for (int j = 1; j <= numero; j++){
//por cada numero averiguar si es divisor exacto
        if (numero % j == 0){
            cantidadDivisores++; // cuento divisores exactos
        }
    }
    // averiguo si hay 2 divisores exactos para ver si es primo
    if (cantidadDivisores == 2){
        cantidadPrimos++;
    }

}
cout << "S ingresaron " <<cantidadPrimos <<" numeros primos" <<endl;

    return 0;
}