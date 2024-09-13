#include <iostream>
#include <ctime>
using namespace std;

int main() {
   srand(time(0));/// una sola vez en el main
   
   /**
       0    1
      99  100
   */
   
   cout << 1 + rand() % 100 << endl; /// rand se llama por la cantidad de numeros
   cout << 1 + rand() % 100 << endl;
   cout << 1 + rand() % 100 << endl;
   cout << 1 + rand() % 100 << endl;
	
	return 0;
}