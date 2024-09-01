#include <iostream>

using namespace std;

int main(){

int n1, n2, n3, num_intermedio;

cout <<"Ingrese un numero: ";
cin >> n1;
cout <<"Ingrese otro numero: ";
cin >> n2;
cout <<"Ingrese el ultimo numero: ";
cin >> n3;

if ((n1 >= n2 && n1 <= n3) || (n1 >= n3 && n1 <= n2)) {
	num_intermedio = n1;
} else if ((n2 >= n1 && n2 <= n3)  || (n2 >= n3 && n2 <= n1)){
	num_intermedio = n2;
} else {
	num_intermedio = n3;
}
cout << "El numero intermedio es: " << num_intermedio << endl;

return 0;
}
