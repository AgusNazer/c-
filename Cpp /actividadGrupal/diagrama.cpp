#include <iostream>

using namespace std;

int main() {
    int n_art = -1; // Inicializar n_art para que entre en el ciclo
    int dia, cantidad;
    float precio_costo, precio_venta;
    float ganancia, ganancia_maxima = 0;
    int n_art_max = 0, cantidad_maxima = 0;

    // Ciclo para leer los datos
    while (n_art != 0) {
        cout << "Ingrese el numero de articulo (0 para finalizar): ";
        cin >> n_art;

        if (n_art == 0) {
            break; // Cortar el ciclo si el número de artículo es 0
        }

        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese la cantidad de articulos vendidos: ";
        cin >> cantidad;
        cout << "Ingrese el precio de costo: ";
        cin >> precio_costo;
        cout << "Ingrese el precio de venta: ";
        cin >> precio_venta;

        // Calcular la ganancia
        ganancia = (precio_venta - precio_costo) * cantidad;

        // Verificar si hay una nueva ganancia máxima
        if (ganancia > ganancia_maxima) {
            ganancia_maxima = ganancia;
            n_art_max = n_art;
            cantidad_maxima = cantidad; // Actualizar la cantidad máxima
        } else if (ganancia == ganancia_maxima) {
            // Si hay empate, verificar la cantidad de artículos vendidos
            if (cantidad > cantidad_maxima) {
                n_art_max = n_art;
                cantidad_maxima = cantidad; // Actualizar la cantidad máxima
            }
        }
    }

    // Informar el resultado
    cout << "El articulo que mas ganancia ha recaudado es el numero: " << n_art_max << endl;
    cout << "Con una ganancia total de: " << ganancia_maxima << endl;

    return 0;
}