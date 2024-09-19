#include <iostream>
using namespace std;

	// 1- ingresar lista de numero
	// 2- informar porcentaje de primos y no primos.
	// 3- mostrar 2 resultados al final.
int main() {
	int numero;
	int totalNumeros = 0;
	int totalPrimos = 0;
	int totalNoPrimos = 0;
	
	cout << "Ingrese un numero (0 para terminar): ";
	cin >> numero;
	
	while (numero != 0) {
		totalNumeros++; // Contar el número ingresado
		
		bool esPrimo = true; // Supongamos que el número es primo
		
		if (numero <= 1) {
			esPrimo = false; // Los números menores o iguales a 1 no son primos
		} else {
			for (int i = 2; i <= numero / 2; ++i) {
				if (numero % i == 0) {
					esPrimo = false; // Si es divisible por otro número, no es primo
					break;
				}
			}
		}
		
		if (esPrimo) {
			totalPrimos++;
			//cout << numero << " es primo" << endl;
		} else {
			totalNoPrimos++;
			//cout << numero << " no es primo" << endl;
		}
		
		cout << "Ingrese otro numero (0 para terminar): ";
		cin >> numero;
	}
	
	// Calcular y mostrar el porcentaje de primos y no primos sin usar double
	if (totalNumeros > 0) {
		int porcentajePrimos = (totalPrimos * 100) / totalNumeros;
		int porcentajeNoPrimos = (totalNoPrimos * 100) / totalNumeros;
		
		cout << "Porcentaje de primos: " << porcentajePrimos << "%" << endl;
		cout << "Porcentaje de no primos: " << porcentajeNoPrimos << "%" << endl;
	} else {
		cout << "No se ingresaron numeros." << endl;
	}
	
	return 0;
}
