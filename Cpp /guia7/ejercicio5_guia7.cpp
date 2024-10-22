#include <iostream>

using namespace std;

//!Ejercicio 5 guia 7 vectores
// Leer 10 números y guardarlos en un vector. Determinar e informar 
// cuál es el menor de los impares y el mayor de los pares. Suponer que 
// habrá al menos un número par y uno impar.


int main(){

int numero;
int vecNums[10];
int menorImpar = 0;
int mayorPar = 0;


for( int i = 0; i < 10; i++){
    cout <<"Ingrese un numero: ";
    cin >> vecNums[i];
}
 // Procesamos el vector para encontrar el menor impar y mayor par
    for (int i = 0; i < 10; i++) {
        if (vecNums[i] % 2 == 0) {  // Si el número es par
            if (vecNums[i] > mayorPar) {
                mayorPar = vecNums[i];  // Actualizamos el mayor par
            }
        } else {  // Si el número es impar
            if (vecNums[i] < menorImpar) {
                menorImpar = vecNums[i];  // Actualizamos el menor impar
            }
        }
    }

    // Mostramos los resultados
    cout << "El mayor de los números pares es: " << mayorPar << endl;
    cout << "El menor de los números impares es: " << menorImpar << endl;


    return 0;
}