#include <iostream>

using namespace std;

// Hacer un programa para ingresar una lista de números que finaliza cuando 
// se ingresa un cero y luego informar el porcentaje de números primos y el 
// porcentaje de números no primos. Se informan 2 resultados al final.

int main(){
    int numero;
    int counterPrimo = 0, counterNoPrimo = 0, total = 0;
    bool isPrimo;

    // Bucle para ingresar números
    while(true){
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if(numero == 0){ // Condición de salida
            break;
        }

        total++; // Incrementamos el total de números ingresados
        isPrimo = true; // Inicializamos la variable para cada número

        // Comprobamos si es primo
        if(numero <= 1){ // Los números menores o iguales a 1 no son primos
            isPrimo = false;
        } else {
            for(int i = 2; i <= numero / 2; i++){
                if(numero % i == 0){ // Si el número es divisible por otro número
                    isPrimo = false;
                    break;
                }
            }
        }

        // Contamos primos y no primos
        if(isPrimo){
            counterPrimo++;
        } else {
            counterNoPrimo++;
        }
    }

    // Evitamos división por cero
    if(total > 0){
        // Cálculo de porcentajes
        float porcentajePrimo = (float(counterPrimo) / total) * 100;
        float porcentajeNoPrimo = (float(counterNoPrimo) / total) * 100;

        // Mostramos los resultados
        cout << "Porcentaje de numeros primos: " << porcentajePrimo << " %" << endl;
        cout << "Porcentaje de numeros no primos: " << porcentajeNoPrimo << " %" << endl;
    } else {
        cout << "No se ingresaron números válidos." << endl;
    }

    return 0;
}
