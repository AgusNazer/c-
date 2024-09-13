#include <iostream>

using namespace std;

// hacer un lote ( lote = todos los numeros) con 5 sublotes. osea:
// ingresar 5 sublotes dividios por un 0

// numero perfecto = divisores del numero suman el mismo num

int main(){
    int numero;
    int numerosPerfectos = 0;
    int suma = 0;

    for (int i = 0; i < 10; i++){
        int suma = 0; // para sumar lols dividores
        cout << "Ingresar un numero: ";
        cin >> numero;

        for (int j = 1; j < numero; j++){
            if (numero % j == 0)
            {
                suma += j; // sumar le divisor en cada vuelta
            }
        }
        if (suma == numero)
        {
            numerosPerfectos++;
        }
    }
    cout << "Numeros perfectos: " << numerosPerfectos << endl;
    return 0;
}