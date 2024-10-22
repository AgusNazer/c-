#include <iostream>

using namespace std;



int main(){

    int vectorNums[10];
    int numero = 0;
    int ultimoPar = -1, penultimoPar = -1;
    int posUltimoPar = -1, posPenultimoPar = -1;

    for (int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> vectorNums[i];
    }
    for (int i = 0; i < 10; i++){
      if(vectorNums[i] % 2 == 0){
        penultimoPar = ultimoPar;
        posPenultimoPar = posUltimoPar;

            // Guardamos el nuevo par como el último
            ultimoPar = vectorNums[i];
            posUltimoPar = i;
      }
    }
      // Imprimir los dos últimos números pares y sus posiciones
    cout << "El penúltimo número par es " << penultimoPar 
         << " en la posición " << posPenultimoPar << endl;
    cout << "El último número par es " << ultimoPar 
         << " en la posición " << posUltimoPar << endl;

    return 0;
}