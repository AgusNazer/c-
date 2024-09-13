#include <iostream>

using namespace std;

// hacer un lote ( lote = todos los numeros) con 5 sublotes. osea: 
// ingresar 5 sublotes dividios por un 0


int main()
{

    int numero;

    for (int i = 0; i < 5; i++)
    {
        cout << "Lote numero: " << i + 1 << endl;

        // Inicio en -1 numero para que entre en el ciclo while
        int numero = -1;
        while (numero != 0)
        {
            cout << "ingrese un numero: ";
            cin >> numero;
            numero;
        }
        // Cuando numero es 0, sale del while y empieza la siguiente iteración del for
    }

    return 0;
}