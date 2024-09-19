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

    int numero, div;

    // 1 pedir numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    // 2 contar los divisores exactos
    div = 2;
    while( numero % div != 0 && numero > 1){
        cout <<"Intentos" <<endl;
        div++;
    }
    // averiguar si hay 2 divisores exactos, entonce el primo
    if(numero ==div){
        cout << "el numero es Primo" <<endl;
    }else{
        cout << "el numero no es Primo" <<endl;
    }

    return 0;
}