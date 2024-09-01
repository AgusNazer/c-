#include <iostream>

using namespace std;

int main(){

/*ejercicio 6
Hacer un programa para ingresar un N valor que indica
la cantidad de números que componen una lista y luego
solicitar se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5,
y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6,
y luego se ingresa: -10, -3, -2, 0, -5, -4.
 Se listará: Cantidad de Positivos: 0
*/




int N;  // La cantidad de números a ingresar
int numero;  // Variable para almacenar cada número ingresado
int cantidadPositivos = 0;  // Contador de números positivos

cout << "Ingrese la cantidad de numeros: ";
cin >> N;

for (int i = 0; i < N; i++) {
cout << "Ingrese un numero: ";
cin >> numero;

if (numero > 0) {
    cantidadPositivos++;
  }
}

cout << "Cantidad de Positivos: " << cantidadPositivos << endl;
return 0;
}
