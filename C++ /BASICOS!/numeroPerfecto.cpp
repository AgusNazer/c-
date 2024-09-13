#include <iostream>

using namespace std;


//número perfecto porque sus divisores propios son 1, 2 y 3, y 1 + 2 + 3 = 6.

// Algoritmo para verificar si un número es perfecto:
// Encuentra los divisores propios de un número (es decir, 
// los divisores que van desde 1 hasta el número - 1).
// Suma esos divisores.
// Si la suma es igual al número, entonces es un número perfecto.
int main() {
    int numero, suma = 0;

    // Solicitar al usuario un número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Calcular la suma de los divisores propios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;  // Sumar el divisor
        }
    }

    // Verificar si la suma de los divisores es igual al número
    if (suma == numero) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}
