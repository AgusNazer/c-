#include <iostream>;

using namespace std;

int main(){

int sold, total_salary, prime;

cout << " Ingrese la cantidad de autos vendidos: ";
cin >> sold;

prime = sold * 700;
total_salary = prime + 5000;

cout << "El salario total es de: " << total_salary << endl;

return 0;

}
