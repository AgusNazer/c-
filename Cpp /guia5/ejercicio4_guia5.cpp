#include <iostream>

using namespace std;

// hacer una lista de numero de 10 numeros separadas entre si por un cero
// 1- maximo de los pares e impartes de cada grupo. mostrar 2 resultados
// 2- porcentaje de num - y +. mostrar 2 resultados
// 3- numeros totles entre los 10 grupos. mostrar 1 resultado
int main() {
	
	
    int numero;
    int maximoPar, maximoImpar;
    int totalNumerosPos = 0;

    for (int i = 1; i <= 3; i++) { // Puedes cambiar el número de grupos
        maximoPar = 0; // Reiniciar el máximo par para cada grupo
        maximoImpar = 0; // Reiniciar el máximo impar para cada grupo
        bool hayPar = false; // Para verificar si hay al menos un número par
        bool hayImpar = false; // Para verificar si hay al menos un número impar
        int totalNumeros = 0;
        int cantidadPositivos = 0;
        int cantidadNegativos = 0;
        float porcentajePositivos = 0.0;
        float porcentajeNegativos = 0.0;
        

        cout << "Grupo " << i << " (Ingrese numeros, 0 para finalizar el grupo):" << endl;
        
        // Ciclo para ingresar números en el grupo
        while (true) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            // contar numeros positovs para mostrar total de todos los grupos.
            if(numero > 0){
            totalNumerosPos++;
        }
            
            if (numero == 0) {
                break; // Salimos del ciclo si el número es 0
            }
            
            // buscamos el maximo par e impar. 
            if (numero % 2 == 0) { // Número par
                if (!hayPar || numero > maximoPar) {
                    maximoPar = numero;
                    hayPar = true;
                }
            } else { // Número impar
                if (!hayImpar || numero > maximoImpar) {
                    maximoImpar = numero;
                    hayImpar = true;
                }
            }
            totalNumeros++; 
            // porcentajes
            if(numero > 0){
                cantidadPositivos++;
            }else{
                if(numero < 0) {
                    cantidadNegativos++;
            }
            }
        }
        // mostrar porcentajes
        if(totalNumeros > 0){
            porcentajePositivos = float(cantidadPositivos) / totalNumeros * 100;
            porcentajeNegativos = float(cantidadNegativos) / totalNumeros * 100;
        }
        cout << "El porcentaje de numeros positivos es de " <<porcentajePositivos <<" % " << endl;
        cout << "El porcentaje de numeros negativos es de " <<porcentajeNegativos <<" % " << endl;
        


        // Mostramos los máximos de cada grupo
        if (hayPar) {
            cout << "Maximo par en el grupo " << i << ": " << maximoPar << endl;
        } else {
            cout << "No se ingresaron numeros pares en el grupo " << i << endl;
        }

        if (hayImpar) {
            cout << "Maximo impar en el grupo " << i << ": " << maximoImpar << endl;
        } else {
            cout << "No se ingresaron numeros impares en el grupo " << i << endl;
        }

        
        cout << "-------------------------" << endl;
    }
    

    cout << "El total de numeros positivos es de " <<totalNumerosPos <<endl;

    return 0;
}

