#include <iostream>

using namespace std;

int CalcularMaximo(int n1, int n2){
    if (n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main(){

    int n1, n2;

    cout <<"Ingrese un numero: ";
    cin >> n1;
        cout <<"Ingrese un numero: ";
    cin >> n2;

    int maximo = CalcularMaximo(n1, n2);
    cout << "El numero maximo es: " << maximo <<endl;

    return 0;
}