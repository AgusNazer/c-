#include <iostream>

using namespace std;

int main(){

int mes;
int bimestre;

cout << "Ingrese el numero del mes: ";
cin >> mes;

if( mes < 1 || mes > 12){
    cout << "Mes invalido";
}else{
    bimestre = ( mes + 1 ) / 2;
    cout << "El mes pertenece al bimestre: " << bimestre <<endl; 
}

    return 0;
}