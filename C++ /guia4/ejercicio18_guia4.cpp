#include <iostream>

using namespace std;

// 18
// Se define a un número como primo cuando tiene solamente dos divisores. \
// Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
// Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
// Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

// Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número primo o es no es un número primo. Debe usar un ciclo inexacto para resolver este ejercicio.

int main()
{

    int numero, cantidadDivisores;

    // 1 pedir numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    // 2 contyar los divisores exactos
    cantidadDivisores = 0;
    // recorrer los numeros de 1 a N
    for (int i = 1; i <= numero; i++)
    {
        // por cada numero averiguar si es divisor exacto
        if (numero % i == 0)
        {
            // si lo es lo cuento
            cantidadDivisores++;
        }
    }
    // 3 averiguar si hay 2 divisores exactos, enconters es priomo
    if (cantidadDivisores == 2)
    {
        cout << "El numero " <<numero  <<" es primo" <<endl;
    }
    else
    {
        cout << "El numero " <<numero <<" no es primo" <<endl;
    }

    return 0;
}