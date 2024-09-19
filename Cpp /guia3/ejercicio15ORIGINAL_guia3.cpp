#include <iostream>

using namespace std;

int main(){

int nuevoNumero;
int primerNumero;
int resultadoOrdenado = true;

cout << "Ingrese un numero: ";
cin >> primerNumero;

// Leer los siguientes 7 números y compararlos con el número anterio
for ( int i = 0; i <= 7; i++ ){
    cout << "Ingrese un numero: ";
    cin >> nuevoNumero;
    
// Comparar el número ingresado con el número anterior    
    if( primerNumero > nuevoNumero ){
       resultadoOrdenado = false;
    }
    // actualizar el número anterio
    primerNumero = nuevoNumero;
}

if ( resultadoOrdenado ){
    cout << "Conjunto Ordenado" << endl;
}else{
    cout << "Conjunto No Ordenado" << endl;
}

return 0;
}
