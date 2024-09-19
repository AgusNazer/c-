#include <iostream>
using namespace std;

int main() {
   int n = 5;
   
   {
      int n;
      n++;
   }
   
   cout << n << endl;
   int i;
   for(int i=1; i<=10; i++){
      for(int i=1; i<=10; i++){
         cout << "0 ";
      }
      cout << endl;
   }
	
	return 0;
}