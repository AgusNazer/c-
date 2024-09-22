#include <iostream>

using namespace std;


// 1) Una sala teatral asigna el valor a las entradas de acuerdo al siguiente criterio:
// - Lunes y martes: 70% de la tarifa total
// - Miércoles: 50% de la tarifa total.
// - Jueves a domingos: 100 % de la tarifa total ($ 15000).
 
// Hacer un programa para que dados un día de la semana (1 a 7), y una cantidad, se 
// informe el importe de las entradas.

//! DATOS IMPORTANTE QUE VEO:
//! 1 = lunes, 2 = martes... 7 = domingo
//! 100% = 15000

//! 1ero: ingresar datos 
//! 2do: hjacer la logica para la equivalencia de dias, osea, 1=lunes.. 2 = martes...etc
//! 3ero calcular los valores de las entradas.
//! 4to mostrar precio segun dia y cantidad de entradas. ( con su respectivo descuento )

// Aclaracion: Me parecio que utiilzando switch es una manera suimple de resolverlo.

int main() {
    int totalTarifa = 15000;
    float tarifa = 0; 
    int dia, entradas = 0;

    cout << "Ingrese el día de la semana (1: Lunes, 2: Martes, ..., 7: Domingo): " << endl;
    cin >> dia;
    cout << "Ingrese la cantidad de entradas: " << endl;
    cin >> entradas;

    switch (dia) {
    case 1:
        cout << "Lunes" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        break;
    case 3:
        cout << "Miércoles" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        break;
    case 5:
        cout << "Viernes" << endl;
        break;
    case 6:
        cout << "Sábado" << endl;
        break;
    case 7:
        cout << "Domingo" << endl;
        break;
    default:
        cout << "Día no válido." << endl;
        return 1; 
    }

    // caluclo segun el dia el precio
    switch (dia) {
    case 1: // lunes
    case 2: // martes
        tarifa = totalTarifa * 0.70;
        break;
    case 3: // miercoles
        tarifa = totalTarifa * 0.50;
        break;
    case 4: // jueves
    case 5: // viernes
    case 6: // sabadi
    case 7: // domingo
        tarifa = totalTarifa; // 100% de la tarifa
        break;
    }

    float importeTotal = tarifa * entradas;
    cout << "El importe a pagar por " << entradas << " entradas es: $" << importeTotal << endl;

    return 0;
}