#include <iostream>

using namespace std;

// Escribir una función que reciba un número y retorne 1
//  si el número recibido es perfecto y 0 si no es perfecto.
// Hacer un programa para que, dada una lista de números que 
// finaliza con cero, informe cuántos de ellos eran perfectos. Utilizar la función solicitada

int NumeroPerfecto(int n){
    int perfecto = 0;
// si la suma de sus divisores == n entonces es perfecto
for( int i = 1; i < n; i++ ){
    if( n % i == 0 ){
     perfecto += i;
    }
  
}

    // Si la suma de los divisores es igual al número, es perfecto
    if (perfecto == n) {
        return 1;
    }
    return 0;

}

int main(){

int numero;
bool result;
int contadorPerfectos = 0;

cout << "ingrese un numero: ";
cin >> numero;

while( numero != 0 ){

     result = NumeroPerfecto(numero);  // Llamada correcta a la función
    if (result) {
        contadorPerfectos++;
        cout << "El número " << numero << " es perfecto." << endl;
    } else {
        cout << "El número " << numero << " no es perfecto." << endl;
    }

        // Pedimos otro número
        cout << "Ingrese otro número (0 para finalizar): ";
        cin >> numero;
        // Informamos la cantidad de números perfectos
    cout << "Cantidad de números perfectos ingresados: " << contadorPerfectos << endl;

    return 0;
   }
}