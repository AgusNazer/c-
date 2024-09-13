


#include <iostream>

using namespace std;
// Un número primo es aquel que solo tiene dos divisores: el 1 y el mismo número.
//  Esto significa que un número n es primo
//  si no es divisible por ningún número entre 2 y n-1

int main() {
    int numero;
    bool esPrimo = true;  // Asumimos que el número es primo al inicio

    cout << "Ingrese un numero: ";
    cin >> numero;

    // Cualquier número menor o igual a 1 no es primo
    if (numero <= 1) {
        esPrimo = false;
    } else {
        // Verificamos si tiene divisores entre 2 y numero-1
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;  // No es necesario seguir buscando divisores
            }
        }
    }

    // Resultado
    if (esPrimo) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}


// Explicación:
// Entrada: Se ingresa un número y se almacena en la variable numero.
// Verificación de número primo:
// Si el número es menor o igual a 1, se considera que no es primo.
// Si es mayor, se usa un ciclo for para verificar si hay algún divisor entre 2 y numero-1.
// Si encuentra algún divisor (es decir, si numero % i == 0), se establece que no es primo y el ciclo termina.
// Salida: Si no se encontraron divisores, el número es primo; de lo contrario, no lo es.
// Este código es sencillo y eficiente para números pequeños, pero si el número es grande, puede ser mejor utilizar 
// la raíz cuadrada del número como límite para mejorar el rendimiento, pero en este caso, dado que no se utilizan otras librerías, 
// estamos revisando divisores hasta numero-1.