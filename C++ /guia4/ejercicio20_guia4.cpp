#include <iostream>

using namespace std;

// 20
// Dada una lista de números que finaliza cuando se ingresa un cero,
//  informar el primer número par ingresado y su ubicación en la lista
//  y el último de los números primos y su ubicación en la lista.

// Ejemplo A: 7, 4, 5, 6, 9, 13, 10
// se informa Primer número par: 4
// ubicación 2.
// Último primo: 13 ubicación 6.
// Ejemplo B: 9, 5, 21, 9, 13, 15, 6
// se informa Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.

int main() {
    int numeroIngresado;
    int primerPar = 0, ultimoPrimo = 0;
    int posicion = 1, posicionPrimerPar = -1, posicionUltimoPrimo = -1;
    bool parEncontrado = false, primoEncontrado = false;

    cout << "Ingrese un numero (0 para finalizar): ";
    cin >> numeroIngresado;

    // Bucle que sigue pidiendo números hasta que se ingrese un 0
    while (numeroIngresado != 0) {
        // Verificar si es el primer número par
        if (numeroIngresado % 2 == 0 && !parEncontrado) {
            primerPar = numeroIngresado;
            posicionPrimerPar = posicion;  // Guardar la posición del primer número par
            parEncontrado = true;
        }

        // Verificar si el número es primo
        if (numeroIngresado >= 2) {
            bool esPrimo = true;
            int divisor = 2;
            while (divisor < numeroIngresado) {
                if (numeroIngresado % divisor == 0) {
                    esPrimo = false;  // Si es divisible por algún número distinto de 1 y él mismo, no es primo
                    break;
                }
                divisor++;
            }

            // Si es primo, lo guardamos como el último primo
            if (esPrimo) {
                ultimoPrimo = numeroIngresado;
                posicionUltimoPrimo = posicion;  // Guardar la posición del último número primo
                primoEncontrado = true;
            }
        }

        // Incrementar la posición y pedir el siguiente número
        posicion++;
        cout << "Ingrese otro numero (0 para finalizar): ";
        cin >> numeroIngresado;
    }

    // Mostrar el primer número par y su ubicación
    if (parEncontrado) {
        cout << "El primer numero par ingresado es: " << primerPar << " y se encuentra en la posicion: " << posicionPrimerPar << endl;
    } else {
        cout << "No se ingresaron numeros pares." << endl;
    }

    // Mostrar el último número primo y su ubicación
    if (primoEncontrado) {
        cout << "El ultimo numero primo ingresado es: " << ultimoPrimo << " y se encuentra en la posicion: " << posicionUltimoPrimo << endl;
    } else {
        cout << "No se ingresaron numeros primos." << endl;
    }

    return 0;
}