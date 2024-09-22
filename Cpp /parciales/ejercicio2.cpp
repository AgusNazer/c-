#include <iostream>

//! DATOS!

// primero hacer la entrada de datos
// 2 contar cada estacion que se ingresa
// 3 comprar la cantidad de nafta vendidad con la maxima registrada,si la nueva
//es mayor actualizar el codigo de la estacion q mas vendió
//4 acunular la cantidad de gasoil vendido

//5 calcular el promedio de gasoil al fginal,m dividiendo el total de gasoil vendido entre los 
// numeros de estacions
// 6 mosrtar los resultados! 

using namespace std;

int main() {
    int codigoEstacion, naftaVendida, gasoilVendido;
    int contadorEstaciones = 0;
    int codigoMaxNafta = 0, maxNaftaVendida = 0;
    int totalGasoilVendido = 0;

    cout << "Ingrese el codigo de la estación: ";
    cin >> codigoEstacion;

    while (codigoEstacion != 0) {
        cout << "Ingrese la cantidad de nafta vendida: ";
        cin >> naftaVendida;
        cout << "Ingrese la cantidad de gasoil vendido: ";
        cin >> gasoilVendido;

        //cuento la cantidad de estaciones
        contadorEstaciones++;

        // pregunto si estacion vendio mas nafta que la maxima registrada
        if (naftaVendida > maxNaftaVendida) {
            maxNaftaVendida = naftaVendida;
            codigoMaxNafta = codigoEstacion;
        }

        // Acumulo la cantid de gasoil
        totalGasoilVendido += gasoilVendido;

        // pedir el nuevbo dato de la estacion
        cout << "Ingrese el codigo de la estacion: ";
        cin >> codigoEstacion;
    }

    // calculos para mostrar
    if (contadorEstaciones > 0) {
        float promedioGasoil = static_cast<float>(totalGasoilVendido) / contadorEstaciones;

        cout << "Cantdad de estaciones: " << contadorEstaciones << endl;
        cout << "Estacion con mayor venta de nafta: " <<"estacion numero: " << codigoMaxNafta << " con " << maxNaftaVendida << " litros vendidos" << endl;
        cout << "Promedio de gasoil vendido: " << promedioGasoil << " litros" << endl;
    } else {
        cout << "No se ingresaron estaciones." << endl;
    }

    return 0;
}
