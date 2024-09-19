#include <iostream>

using namespace std;

int main(){

int horas, min_ingresados, minutos;

cout << "Ingrese la cantidad de minutos: ";
cin >> min_ingresados;

horas = min_ingresados / 60;
minutos = min_ingresados % 60;

cout << "Las horas son: " << horas << endl;
cout << "Los minutos son: " << minutos << endl;;

return 0;
}
