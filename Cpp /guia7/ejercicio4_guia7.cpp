#include <iostream>

using namespace std;

// 4
// Leer 10 números y guardarlos en un vector. 
// Determinar e informar cuál es el valor máximo 
// absoluto del vector. Por ejemplo 20, -43 y 5, 
// el máximo absoluto es -43.


// calcular valor absoluto
int absolute(int num){
    if(num < 0){
        return -num;
    }
    return num;
}



int main() {
    int vector[10];
    int maxAbsValue;
    int numberWithMaxAbsValue;

    // Input 10 numbers and store them in the vector
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }

    // Initialize the maxAbsValue and store the corresponding number
    maxAbsValue = absolute(vector[0]);
    numberWithMaxAbsValue = vector[0];

    // Iterate through the vector to find the maximum absolute value
    for (int i = 1; i < 10; i++) {
        if (absolute(vector[i]) > maxAbsValue) {
            maxAbsValue = absolute(vector[i]);
            numberWithMaxAbsValue = vector[i]; // Store the number with max absolute value
        }
    }

    // Output the number with the maximum absolute value (keeping the original sign)
    cout << "El valor con el máximo absoluto es: " << numberWithMaxAbsValue << endl;

    return 0;
}