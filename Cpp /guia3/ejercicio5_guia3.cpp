#include <iostream>

using namespace std;

int main(){

int num1, num2, diferencia, temporal;

cout <<"Ingrese el primer numero: ";
cin >> num1;

cout <<"Ingrese el segundo numero: ";
cin >> num2;

// variable temporal para guardar el valor de num1
  if (num1 > num2) {
        int temporal = num1;
        num1 = num2;
        num2 = temporal;
    }

for( int i = num1; i <= num2; i++){
diferencia = i - num1;
cout << i << endl;
}
return 0;
}
