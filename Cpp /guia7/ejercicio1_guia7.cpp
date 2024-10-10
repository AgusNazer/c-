#include <iostream>

using namespace std;



int main(){


int sumVector[3];
int suma = 0;

for( int i = 0; i < 10; i++ ){
    cout <<"Ingrese un numero: ";
    cout << "Numero " << i + 1 <<": ";
    cin >> sumVector[i];
    suma += sumVector[i];
}

cout << "La suma de los numeros es: " <<suma <<endl;


    return 0;
}