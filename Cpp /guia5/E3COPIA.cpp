#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	//cout << "Ingrese un numero: ";
	//cin >> num;
	bool esPrimo = false;
	int primosCounter = 0;
	
	for( int i = 1; i <= 10; i++ ){
		cout << " Ingrese un numero: ";
		cin >> num;
		esPrimo = true;
		
		if( num <= 1){
			esPrimo = false;
		}else {
			for(int j = 2; j <= num /2; j++){
				if(num % j == 0){
					esPrimo = false; // si es divisible por otro numero no es primo
					break;
				}
			}
		}
		if(esPrimo){
			primosCounter++;
		}
	}
	cout << "La cantidad de numeros primos ingresados es de " << primosCounter <<endl;
	
	return 0;
}
