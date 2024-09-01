#include <iostream>

using namespace std;

/*
dado una lista de numero positivos
q finaliza con cero mostra:
1- cuantos de ellos son pares

------------------------
! WHILE
 ! Con while la variable que va en la condicion, siempre se debe inicializar
 ! antes del while y siempre se debe modificar dentro del while
! DO WHILE
 !do {}while(expression logica){} // primero hace y despues hace, siempre ejecuta al menos 1 vez

*/

// pdada una lista de numeros positivos hacer quese ingresen numero y se corte de ingrsar ene l 3er poar
int main()
{

int numero, cantidadPares, cantidad;
    cantidadPares = 0;
    cantidad = 0;

    do {
        cout << "Ingresa un numero: ";
        cin >> numero;

        // Incrementa el contador de pares si el número es par
        if (numero % 2 == 0 && numero != 0) {
            cantidadPares++;
        }

        // Incrementa la cantidad total de números ingresados (excluyendo el 0 final)
        if (numero != 0) {
            cantidad++;
        }

    } while (cantidadPares < 3);  // El ciclo continúa mientras haya menos de 3 números pares

    cout << "La cantidad de numeros fueron: " << cantidad << endl;

    return 0;
}