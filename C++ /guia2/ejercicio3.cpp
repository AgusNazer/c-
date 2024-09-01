#include <iostream>

using namespace std;

int main() {
int numero, resultado;

cout << "Ingrese un numero: ";
cin >> numero;

resultado = numero % 2;

if(resultado == 0){
cout << "El numero ingresado es par";
}else{
cout << "El numero ingresado es impar";
}

return 0;

}
