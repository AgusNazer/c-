#include <iostream>

using namespace std;

int esBisiesto(int anio) {
    if(anio % 4 != 0) {
        return 0; // No es divisible por 4, no es bisiesto
    }
    if(anio % 100 == 0) {
        if(anio % 400 == 0) {
            return 1; // Divisible por 400, es bisiesto
        } else {
            return 0; // Divisible por 100 pero no por 400, no es bisiesto
        }
    }
    return 1; // Divisible por 4 y no por 100, es bisiesto
}

int main() {
    int anio, bisiesto;
    cout << "Ingrese un anio: ";
    cin >> anio;

    bisiesto = esBisiesto(anio);
    
    if(bisiesto == 1) {
        cout << "El anio es bisiesto" << endl;
    } else {
        cout << "El anio no es bisiesto" << endl;
    }

    return 0;
}
