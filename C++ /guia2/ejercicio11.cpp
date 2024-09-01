#include <iostream>

using namespace std;
/*
Ejercicio 11 - guia 2
Hacer un programa para ingresar cinco números y
listar cuantos de esos cinco números son positivos,
cuantos son negativos y cuantos son iguales a 0.
*/

int main() {
    int numero;
    int positivos = 0, negativos = 0, ceros = 0;

    // Ingreso del primer número
    cout << "Ingresa el primer número: ";
    cin >> numero;
    if (numero > 0) positivos++;
    else if (numero < 0) negativos++;
    else ceros++;

    // Ingreso del segundo número
    cout << "Ingresa el segundo número: ";
    cin >> numero;
    if (numero > 0) positivos++;
    else if (numero < 0) negativos++;
    else ceros++;

    // Ingreso del tercer número
    cout << "Ingresa el tercer número: ";
    cin >> numero;
    if (numero > 0) positivos++;
    else if (numero < 0) negativos++;
    else ceros++;

    // Ingreso del cuarto número
    cout << "Ingresa el cuarto número: ";
    cin >> numero;
    if (numero > 0) positivos++;
    else if (numero < 0) negativos++;
    else ceros++;

    // Ingreso del quinto número
    cout << "Ingresa el quinto número: ";
    cin >> numero;
    if (numero > 0) positivos++;
    else if (numero < 0) negativos++;
    else ceros++;

    // Mostrar los resultados
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Iguales a 0: " << ceros << endl;

return 0;
}
