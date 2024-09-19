#include <iostream>

using namespace std;

// indicar la edad correspondiente al mayor numero de legajo
int main(){

 int legajo, legajoMaximo, edad, maximo = 0;

const int tope =5;

for ( int i=1; i <= tope; i++ ){

cout << "Ingrese un legajo: ";
cin >> legajo;
cout << "Ingrese una edad: ";
cin >> edad;

if(edad>maximo){

    maximo = edad;
    legajoMaximo = legajo;
   }

}
cout << "El legajo del alumno con mayor edad es: " << legajoMaximo;
cout << endl;

    return 0;
}