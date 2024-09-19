// Para averiguar el número máximo de los números ingresados, puedes usar una variable para almacenar el 
// valor máximo. A medida que se ingresan los números, comparas cada número ingresado con el 
// valor máximo actual. Si el número ingresado es mayor que el máximo actual, actualizas el valor de la variable.
// Aquí te dejo un ejemplo en C++ que pide al usuario ingresar varios números y determina cuál es el mayor:




#include <iostream>

using namespace std;

int main() {
    int cantidad, numero, maximo;

    // Preguntar cuántos números se van a ingresar
    cout << "¿Cuántos números deseas ingresar? ";
    cin >> cantidad;

    // Pedir el primer número para inicializar el máximo
    cout << "Ingresa un número: ";
    cin >> numero;
    maximo = numero;  // Inicializamos 'maximo' con el primer número

    // Ciclo para ingresar los siguientes números y encontrar el máximo
    for (int i = 1; i < cantidad; i++) {
        cout << "Ingresa un número: ";
        cin >> numero;

        if (numero > maximo) {
            maximo = numero;  // Actualizamos el máximo si el número es mayor
        }
    }

    // Mostrar el número máximo
    cout << "El número máximo es: " << maximo << endl;

    return 0;
}
// Explicación:
// Cantidad de números: Primero pedimos al usuario cuántos números desea ingresar.
// Inicialización del máximo: El primer número ingresado se guarda en la variable maximo 
// porque es el único valor que hemos recibido hasta ese momento.
// Ciclo para encontrar el máximo: Para cada número ingresado, comparamos si es mayor que el 
// valor actual de maximo. Si lo es, actualizamos maximo con ese número.
// Resultado: Al finalizar el ciclo, se muestra el número más grande ingresado.