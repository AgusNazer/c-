#include <iostream>;

using namespace std;

int main(){

 int a, b, aux;
 cout << "Ingrese el primer valor";
 cin >> a;

 cout << "Ingrese el segundo valor";
 cin >> b;

 //intercambiar valores
 aux = a;
 a = b;
 b = aux;

  cout << "Después del intercambio:" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

    return 0;
 }
