#include <iostream>

using namespace std;

int CalcularMaximoAbsoluto(int a, int b){

int absA = 0;
int absB = 0;
int maxAbs = 0;
if(a < 0) {
  absA = -a;
} else{
   absA = a;
}
if(b < 0) {
  absB = -b;
} else{
   absB = b;
}
if(absA > absB){
    maxAbs = absA;
}else{
    maxAbs = absB;
}
return maxAbs;

}

int main(){
int numero1, numero2;

cout <<"Ingrese un numero: ";
cin >> numero1;

cout <<"Ingrese un numero: ";
cin >> numero2;

int result = CalcularMaximoAbsoluto(numero1, numero2);

cout  <<"El maximo absoluto entre los dos numeroes es: " << result << endl;
    return 0;
}