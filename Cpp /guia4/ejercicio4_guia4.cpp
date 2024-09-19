#include <iostream>

using namespace std;

// ingresar un numero POSITIVO!!
// mostrar por pantalla los numeros entre el 1 y el 
// numero ingresado.


// tengo que contar desed el 1 hasta 
// el numero ingresado

int main(){
int numeroIngresado;
int i = 0;

cout <<"Ingrese un unmero positivo: ";
cin >> numeroIngresado;


while ( i < numeroIngresado){
    i++;
    cout << i << endl;
    
}

    return 0;
}