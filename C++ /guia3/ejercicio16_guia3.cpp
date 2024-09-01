#include <iostream>

using namespace std;


/*
pedir 5 numeros
informar los 2 mayores valores, 
aclarar el maximo y el que le sigue
*/

// el mayor es numero + i
int main(){

int numeroIngresado;
int mayor = 0;
int segundoMayor = 0;

for( int i = 0; i < 5; i++ ){
    cout << "Ingrese un numero: ";
    cin >> numeroIngresado;
    if(numeroIngresado > mayor) {
        segundoMayor = mayor;  // El valor actual de mayor se convierte en el segundo mayor
        mayor = numeroIngresado;  // El nuevo número ingresado se convierte en el mayor
    } else if(numeroIngresado > segundoMayor && numeroIngresado < mayor) {
        segundoMayor = numeroIngresado;  // Actualiza el segundo mayor si el número ingresado está entre mayor y segundoMayor
    }
}
    cout << "El mayor numero ingresado es: " << mayor <<endl;
    cout << "El numero que le sigue es es: " << segundoMayor <<endl;

    return 0;
}