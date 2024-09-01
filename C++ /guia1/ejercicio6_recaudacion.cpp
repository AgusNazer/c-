#include <iostream>

using namespace std;

int main(){

int r1,r2, r3, r4;
float recaudacion_promedio_semana, recaudacion_total;
float porcentaje_recaudacion1, porcentaje_recaudacion2, porcentaje_recaudacion3, porcentaje_recaudacion4;

cout << "Ingrese la recaudacion de la semana 1: ";
cin >> r1;

cout << "Ingrese la recaudacion de la semana 2: ";
cin >> r2;

cout << "Ingrese la recaudacion de la semana 3: ";
cin >> r3;

cout << "Ingrese la recaudacion de la semana 4: ";
cin >> r4;

recaudacion_total = r1 + r2 + r3 + r4;

recaudacion_promedio_semana = recaudacion_total / 4.0;
    porcentaje_recaudacion1 = (r1 / recaudacion_total) * 100;
    porcentaje_recaudacion2 = (r2 / recaudacion_total) * 100;
    porcentaje_recaudacion3 = (r3 / recaudacion_total) * 100;
    porcentaje_recaudacion4 = (r4 / recaudacion_total) * 100;

cout << "La recaudacion promedio semanal es: " << recaudacion_promedio_semana <<endl;
cout << "El porcentaje de recaudacion de la sermana 1 es: " << porcentaje_recaudacion1 <<endl;
cout << "El porcentaje de recaudacion de la sermana 2 es: " << porcentaje_recaudacion2 <<endl;
cout << "El porcentaje de recaudacion de la sermana 3 es: " << porcentaje_recaudacion3 <<endl;
cout << "El porcentaje de recaudacion de la sermana 4 es: " << porcentaje_recaudacion4 <<endl;

return 0;
}
