#include <iostream>

using namespace std;

int main(){

int asientos_totales, pasajes_vendidos;
float porcentaje_ocupado, porcentaje_no_ocupado;

cout << "Ingrese la cantidad de asientos totales: ";
cin >> asientos_totales;

cout << "Ingrese la cantidad de pasajes ocupados: ";
cin >> pasajes_vendidos;

porcentaje_ocupado = (float)pasajes_vendidos / asientos_totales * 100;
porcentaje_no_ocupado = 100 - porcentaje_ocupado;

cout << "El porcentaje ocupado es de: " << porcentaje_ocupado << "%" << endl;
cout << "El porcentaje no ocupado es de: " << porcentaje_no_ocupado << "%" <<endl;


return 0;
}
