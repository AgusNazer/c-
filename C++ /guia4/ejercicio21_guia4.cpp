#include <iostream>

using namespace std;

// Hacer un programa que permita ingresar una lista de números positivos,
// negativos o cero hasta que la diferencia entre el máximo y el mínimo sea
// mayor a 10. Calcular e informar:
// La cantidad de números que componen la lista.

// Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
// Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7

// 1 ingresar numeros
// 2 calcular la diferencia de esos numeros
// 3 finalizar cuando la diferencia e/ minimo y maximo se amayor a 10

int main(){
    int numero, minimo, maximo;
    int cantidadNumeros = 0;
    bool primerNumero = true;

    // Seguimos solicitando números hasta que la diferencia entre máximo y mínimo sea mayor a 10
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        // Incrementar la cantidad de números ingresados
        cantidadNumeros++;

        // Si es el primer número ingresado, inicializamos mínimo y máximo con este número
        if (primerNumero) {
            minimo = numero;
            maximo = numero;
            primerNumero = false;
        } else {
            // Actualizar mínimo y máximo
            if (numero < minimo) {
                minimo = numero;
            }
            if (numero > maximo) {
                maximo = numero;
            }
        }

    // Continuar el ciclo mientras la diferencia entre el máximo y el mínimo sea menor o igual a 10
    } while ((maximo - minimo) <= 10);

    // Mostrar la cantidad de números ingresados
    cout << "Cantidad de numeros: " << cantidadNumeros << endl;

    return 0;
}