#include <iostream>

using namespace std;

int main(){

int num1, num2, resultado, diferencia1, diferencia2;

cout << "Ingrese un numero: ";
cin >> num1;

cout << "Ingrese otro numero: ";
cin >> num2;

if (num1 > num2){
int diferencia1 = num1 - num2;
cout << diferencia1;
}else if(num2 > num1){
int diferencia2 = num2 - num1;
cout << diferencia2;
}


return 0;

}
