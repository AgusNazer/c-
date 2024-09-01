#include <iostream>

using namespace std;
/*
Hacer un programa para ingresar una lista de 10 números,
luego informar cuántos son positivos, cuántos son negativos,
y cuántos iguales a cero..
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/

int main(){

int numero;



// nmero positivo = numero > 0
// numero negativo = numero < 0



for( int i = 1; i <=10; i++){
cout << "Ingrese un numero: ";
cin >> numero;

if (numero > 0) {
    cout << "El numero " << numero << " es positivo" << endl;
} else if (numero < 0) {
    cout << "El numero " << numero << " es negativo" << endl;
} else if (numero == 0) {
    cout << "El numero " << numero << " es cero" << endl;
}
}

return 0;
}
