#include <iostream>

using namespace std;


// Se define como divisores propios de un número entero a aquellos que 
// son sus divisores excluyendo al número en sí mismo. 
// Ejemplo A. Los divisores propios del 4 son: 1 y 2. 
// Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.

// Se define a un número como perfecto cuando la suma de todos sus
//  divisores propios coincide con el número en sí mismo. 
// Ejemplo A: 6 es número perfecto pues 1+2+3=6 
// Ejemplo B: 28 es número perfecto pues 1+2+4+7+14=28 
// Ejemplo C: 12 no es número perfecto pues 1+2+3+4+6=16 


// 1 pedir ingresar un numero
// 2 comparar el nmero ingresado con sus divisidores
// 3 si los divisores sumados son el mismo numero igresado = perfecto
// 4 sino NO
// entonce primero saber los divisores, luego sumarlos y verificar 
// si es perfecto o no
int main(){

int numeroIngresado, numeroPerfecto, divisores, suma = 0, i;
bool divisor = false;

cout << "ingrese un numero: ";
cin >> numeroIngresado;

for( int i = 1; i < numeroIngresado; i++ ){
    if( numeroIngresado % i == 0 ){
        //Salida cout: Imprime el valor de i seguido del mensaje 
        //"es un divisor" cada vez que i divide exactamente a numeroIngresado
        cout << i <<" Es divisor de " <<numeroIngresado <<endl;
        suma += i;// Sumar el divisor encontrado a la suma total
    }
     // SOLUCIONAR LA SEGUNDA PARTE 
}
    if( suma == numeroIngresado){
        cout << numeroIngresado <<" Es un numero perfecto!" <<endl;
    }else{
        cout << numeroIngresado << " No es un numero perfecto" << endl;
    }

    return 0;
}