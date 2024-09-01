#include <iostream>

using namespace std;

int main(){

int vsd, vcd, porcentaje_de_descuento, descuento;

cout << "Ingrese el valor sin el descuento: ";
cin >> vsd;

cout << "Ingrese el valor con el descuento: ";
cin >> vcd;

descuento = vsd - vcd;
porcentaje_de_descuento = descuento * 100 / (float)vsd;

cout << "El porcentaje de descuento es de: " << porcentaje_de_descuento << "%";

return 0;
}
