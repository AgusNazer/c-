#include <iostream>

using namespace std;

// Modificar el ej 16 de manera tal que acepte el ingreso de 5 listas de números.
// Al igual que en el caso anterior, las listas terminan con 2 números iguales.
// Para cada lista informar el máximo.

int main() {
    int num, numAnterior;
    int maximo;
    bool seguir;

    // Repetir 5 veces para 5 listas
    for (int i = 1; i <= 5; i++) {
        seguir = true; // Reiniciar variable para cada lista
        cout << "Lista " << i << ": INGRESAR NUMERO: ";
        cin >> num;
        maximo = num;

        while (seguir) {
            numAnterior = num;
            cout << "INGRESAR NUMERO: ";
            cin >> num;

            if (num > maximo) {
                maximo = num; // Actualizar máximo
            }

            // Si se ingresan dos números consecutivos iguales, terminar la lista
            if (num == numAnterior) {
                seguir = false;
            }
        }

        // Mostrar el máximo de la lista actual
        cout << "NUMERO MAXIMO DE LA LISTA " << i << ": " << maximo << endl;
        cout << endl;
    }

    return 0;
}
