#include <iostream>

using namespace std;

int main() {
    // Declarar variables para los 8 números
    int numeroIngresado;
    int numeros[8]; // Array para almacenar los números
    int temp;

    // Leer los 8 números
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeroIngresado;
        numeros[i] = numeroIngresado; // Almacenar el número en el array
    }

    // Ordenar los números usando el método de bubble sort
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Intercambiar los números si están en el orden incorrecto
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Imprimir los números ordenados
    cout << "Números ordenados: ";
    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Explicación:
Declaración de Variables:

numeros[8]: Un array para almacenar los 8 números ingresados.
Lectura de Números:

Se usa un bucle for para leer los 8 números y almacenarlos en el array numeros.
Ordenamiento (Método de Burbuja):

Se usa un doble bucle for para ordenar los números.
El bucle exterior controla el número de pasadas necesarias.
El bucle interior compara y ordena pares de números adyacentes.
Si un número es mayor que el siguiente, se intercambian.
Impresión de Números Ordenados:

Se usa otro bucle for para imprimir los números ya ordenados.
Este código realiza el ordenamiento de los números usando el método de burbuja y los imprime en orden creciente. El método de burbuja es sencillo y adecuado para esta tarea, dado que solo se permite el uso de ciclos for y if
*/