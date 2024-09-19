#include <iostream>

using namespace std;

int main(){

int precio_sin_descuento, precio_con_descuento, descuento_aplicado, porcentaje_descuento;

cout << "Ingrese el importe de venta sin descuento: ";
cin >> precio_sin_descuento;

cout << "Ingrese el importe de venta con descuento: ";
cin >> precio_con_descuento;

descuento_aplicado = precio_sin_descuento - precio_con_descuento;
porcentaje_descuento = descuento_aplicado * 100 / precio_sin_descuento;

cout << "El porcentaje de descuento aplicado es de: " << porcentaje_descuento << "%" <<endl;

return 0;

}
