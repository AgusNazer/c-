#include <iostream>

using namespace std;

int main(){

int numero;

cout << "Ingrese un numero: ";
cin >> numero;
if ( numero > 0){
 cout << "El numero es positivo";
}else if ( numero == 0){
cout << "El numero es 0";
}else{
cout << "El numero es negativo";
}


return 0;
}
