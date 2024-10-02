#include <iostream>

using namespace std;

bool EsPrimo (int numero){
   if (numero <= 1) {
    return false; //menor o igual a uno no es primo
   }
    for( int i = 2; i <= numero / 2; i++){
       if( numero % i == 0){
        return false; // tiene mas divisores
       }
    }
    return true;
}

int main(){

int numero;

cout << "Ingrese un numero: ";
cin >> numero;

bool primo = EsPrimo(numero);
if(primo){
cout << "El numero ingresado es primo" <<endl;
} else{
    cout << "El numero ingresado no es primo" <<endl;
}

    return 0;
}