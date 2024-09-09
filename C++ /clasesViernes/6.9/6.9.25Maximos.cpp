#include <iostream>

using namespace std;

// CLASE Daniel Kloster
// maximo y posicion de un conjuntyo dado de numeros
int main(){
const int VUELTAS = 5;
int i, num, maximo, posmaximo;

for( i = 1; i < VUELTAS; i++){

    cout <<"NUMERO: ";
    cin >> num;

    if( i == 1){
        maximo = num;
        posmaximo = 1;
    }else{
        if( num > maximo) {
            posmaximo = i;
        }
    }
}
cout << "MAXIMO " <<maximo << "POSICION " <<posmaximo;
cout << endl;

    return 0;
}
