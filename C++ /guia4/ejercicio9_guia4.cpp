#include <iostream>

using namespace std;

// ingresar una lista de numeros, finaliza con 0
// informar el maximo par

int main(){

    int numeroIngresado, maximoPar;

    cout << "Ingrese un numero: ";
    cin >> numeroIngresado;

//! por si comienzan con 0   
    if ( numeroIngresado == 0){
        cout <<"El numero es 0" <<endl;
        return 0;
    }

        maximoPar = numeroIngresado;
    while( numeroIngresado !=0 ){
        cout <<"Ingrese un numero: ";
        cin >> numeroIngresado;
        if( numeroIngresado > maximoPar){
            maximoPar = numeroIngresado;
        }
    }
    cout << "El maximo par es: " << maximoPar <<endl;
    

    return 0;
}