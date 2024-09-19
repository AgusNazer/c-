#include <iostream>;

using namespace std;

int main(){
float hst, hsvalue, salary;

//Entrada: pedir al usuario l;as horas trabajadas y erl valor de esa hora

cout <<"ingrese la cantidad de horas trabajadas: ";
cin >> hst;

//
cout <<"Ingrese el valor de la hora trabajada: ";
cin >> hsvalue;

//Proceso: calcular el sueldo
salary = hst * hsvalue;

//salida mostrar el sueldo

cout << "El sueldo correspondiente es: " <<salary<<endl;


return 0;
}
