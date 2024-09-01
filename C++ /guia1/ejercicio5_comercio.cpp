#include <iostream>

using namespace std;

int main(){

int a,b,c;
float porcentaje_a, porcentaje_b, porcentaje_c;

cout << "Ingrese los alfajores pepito vendidos: ";
cin >> a;

cout << "Ingrese los alfajores jorgito vendidos: ";
cin >> b;

cout << "Ingrese los alfajores oreo vendidos: ";
cin >> c;

int porcentaje_total = a + b + c;

porcentaje_a = a / (float)porcentaje_total * 100;
porcentaje_b = b / (float)porcentaje_total * 100;
porcentaje_c = c / (float)porcentaje_total * 100;

cout << " % de pepito: " << porcentaje_a << "%";
cout << " % de jorgito: " << porcentaje_b << "%";
cout << " % de oreo: " << porcentaje_c << "%";


return 0;
}
