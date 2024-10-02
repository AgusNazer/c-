#include <iostream>

using namespace std;

bool EsPrimo(int n){
 if (n <= 1){
    return false;
 }

 for( int i = 2; i <= n / 2; i++){
    if( n % i == 0){
         return false;
    }
 } 
 return true;

}

bool EsPrimoSophieGermain(int n){
  if( !EsPrimo(n)){
    return false;
  }
   // Luego verificamos si 2 * n + 1 también es primo
    int numeroSeguro = 2 * n + 1;
    return EsPrimo(numeroSeguro);
}

int main(){

int n;

cout <<"Ingrese un numero: ";
cin >> n;


if (EsPrimoSophieGermain(n)){
    cout <<"El numero es sohiegermain";
}else{
   cout <<"El numero no es sohiegermain";
}
    return 0;
}