#include <iostream>

using namespace std;

bool EsPar(int n){

 if( n % 2 == 0){
    return true;
 }else{
    return false;
 }


}

int main(){

int n;    
  
cout <<"Ingrese un numero: ";
cin >> n;

if(EsPar(n)){
cout << "El numero " <<n <<" es par" <<endl;
}else{
    cout << "El numero " <<n <<" es impar" <<endl;
}

    return 0;
}