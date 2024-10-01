#include <iostream>

using namespace std;

int main() {
    int n_art = -1; 
    int dia, cantidad;
    float precio_costo, precio_venta;
    float ganancia, ganancia_maxima = 0;
    int n_art_max = 0, cantidad_maxima = 0, ganancia_acumulada = 0;
   
    while (n_art != 0) {
        cout << "Ingrese el numero de articulo (0 para finalizar): ";
        cin >> n_art;

        if (n_art == 0) {
            break; 
        }

        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese la cantidad de articulos vendidos: ";
        cin >> cantidad;
        cout << "Ingrese el precio de costo: ";
        cin >> precio_costo;
        cout << "Ingrese el precio de venta: ";
        cin >> precio_venta;

        // calculo la ganancia
        ganancia = (precio_venta - precio_costo) * cantidad;

    
 // Acumular la ganancia total del artículo actual
        ganancia_acumulada += ganancia;

        // verificar si la ganancia acumulada es mayor que la mxima registrada
        if (ganancia_acumulada > ganancia_maxima) {
            ganancia_maxima = ganancia_acumulada;
            n_art_max = n_art;
        }
    }


    cout << "El articulo que mas ganancia ha recaudado es el numero: " << n_art_max << endl;
    cout << "Con una ganancia total de: " << ganancia_maxima << endl;

    return 0;
}