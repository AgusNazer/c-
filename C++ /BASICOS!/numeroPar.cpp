// Para encontrar los divisores de un número, debes buscar 
// todos los números enteros que dividen al número dado de manera exacta, 
// es decir, sin dejar un residuo. Un número d es divisor de otro número n 
// si el resto de la división de n entre d es 0, o sea:

// 𝑛
// %
// 𝑑
// =
// =
// 0
// n%d==0
// Donde % es el operador que devuelve el resto de la división entera.

// Ejemplo de código en C++ para encontrar los divisores de un número:

#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Los divisores de " << numero << " son: ";

    for (int i = 1; i <= numero; i++) {
        // Si el residuo es 0, entonces i es un divisor
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
// Explicación:
// Entrada del número: El usuario ingresa un número.
// Bucle for: Se recorre desde 1 hasta el número ingresado, verificando si cada número divide al número ingresado sin dejar residuo (numero % i == 0).
// Imprimir divisores: Cuando se encuentra un divisor, se imprime.
// Ejemplo de ejecución:
// Si ingresas el número 12, el programa imprimirá:

// yaml
// Copiar código
// Los divisores de 12 son: 1 2 3 4 6 12
// Ya que esos son los divisores de 12.