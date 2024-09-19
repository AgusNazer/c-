#include <iostream>

using namespace std;

// ingresar numeros, cortan cuando iungresa 0
// luego informar el maximo

int main(){

    int numeroIngresado;
    int maximo;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numeroIngresado;

//! por si arranca ingresando 0
    // if (numeroIngresado == 0) {
    //     cout << "No se ingresaron numeros." << endl;
    //     return 0; // Terminar si el primer número es 0
    // }

    // Inicializar el máximo con el primer número ingresado
    maximo = numeroIngresado;

    // Continuar ingresando números
    while (numeroIngresado != 0) {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numeroIngresado;

        if (numeroIngresado > maximo && numeroIngresado != 0) {
            maximo = numeroIngresado;
        }
    }

    // Mostrar el número máximo ingresado
    cout << "El numero maximo es: " << maximo << endl;

    return 0;
}