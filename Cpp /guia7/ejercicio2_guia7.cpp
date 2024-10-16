#include <iostream>

using namespace std;


int main() {
    int vectorNums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declaración e inicialización del vector

    // Mostrar los números guardados
    cout << "Los números guardados son: ";
    for (int i = 0; i < 10; i++) {
        cout << vectorNums[i] << " "; 
    }
    cout << endl; // Para un salto de línea al final

    return 0;
}
