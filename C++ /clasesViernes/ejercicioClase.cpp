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
int main()
{

    int numero;

    int cantidad = 0;
    while (numero != 0)
    {

        if (numero % 2 == 0)
        {
            cantidad++;
        }

        cout << "Inrgesa numeros positivos: ";
        cin >> numero;
    }
        cout << "CAntidad numeros positivos: " << cantidad;

    return 0;
}