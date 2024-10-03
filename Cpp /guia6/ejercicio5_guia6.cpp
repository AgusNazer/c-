#include <iostream>

using namespace std;

/// solucion inexacta
int Redondear( float n){
 float a = n;
 int b = ( int )(a + 0.5);
 return b;
}

// solucion con tipo duouble

// int Redondear( double n){
//     return (int)(n + 0.5); // suma 0.5 para redondear
// }

int main(){

int numero;
cout <<"Ingrese un numero: ";
cin >> numero;

int Redonda = Redondear( numero );
cout << "El numero redondeado es: " << Redonda <<endl;

    return 0;
}