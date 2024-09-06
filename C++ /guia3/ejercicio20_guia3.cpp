#include <iostream>

using namespace std;

// Se define a un número entero como primo cuando tiene solamente dos divisores. Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
// Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
// Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

// Hacer un programa para ingresar un número y luego
// informar con un cartel aclaratorio si el mismo es un número primo o es número no primo.

int main()
{

    int numeroIngresado, numeroPrimo;
    bool primo = true;

    cout << "Ingrese un numero: ";
    cin >> numeroIngresado;

    if (numeroIngresado <= 1)
    {
        primo = false;
    }
    else
    {

// El bucle for verifica si el número es divisible por algún número 
// diferente de 1 y de sí mismo.

 // El bucle comienza en 2 porque todo número es divisible por 1
 // y eso no nos ayuda a determinar si es primo.
 
//  Hasta numeroIngresado / 2: No es necesario verificar divisores más 
//  allá de la mitad del número, porque si n es divisible por un número 
//  mayor que n/2, entonces es divisible por un número menor.

        for (int i = 2; i <= numeroIngresado / 2; i++)
        {
            if (numeroIngresado % i == 0){
                primo = false;
                break; // si enceuntra divisor no es primo y cortamos
            }
        }
    }
    if (primo) {
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }

    return 0;
}