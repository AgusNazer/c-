#include <iostream>

using namespace std;


/*
ingresar un numero entero (pedir)
informar sus divisores
*/
int main(){

int numero, divisores;

cout << "Ingrese un numero: ";
cin >> numero;

for(int i = 0; i <= numero; i++ ){
// si i divide a numero sin residuo, entonces es un divisor
   if ( numero % i == 0 ){ 
    cout << i <<endl;
   }

}

    return 0;
}