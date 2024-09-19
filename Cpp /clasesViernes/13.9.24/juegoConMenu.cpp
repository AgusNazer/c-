#include <iostream>
#include <ctime>

// para rtabajar con archivos
#include <fstream>
using namespace std;

/***
   Un menu
      1- Jugar (Adivina un numero) 
      2- Puntaje mas Alto ( El que menos intentos tuvo )
      3- Creditos
      0- Salir
*/

/***
   repito (game loop)
      borro pantalla
      muestro menu
      ejecuto accion
      pausa
*/

void limpiarPantalla(){
    system("clear");  // Si estás en Windows, usa system("cls");
}

void pausar() {
    cout << "Presiona Enter para continuar...";
    cin.ignore();
    cin.get();  // Espera hasta que el usuario presione Enter
}
// Función para leer el menor intento desde el archivo
int leerIntentoMinimo() {
    ifstream archivo("estadisticas.txt");
    int intentoMinimo = 0;
    
    if (archivo.is_open()) {
        archivo >> intentoMinimo;
        archivo.close();
    }
    
    return intentoMinimo;
}
// Función para guardar el menor intento en el archivo
void guardarIntentoMinimo(int intentoMinimo) {
    ofstream archivo("estadisticas.txt");
    
    if (archivo.is_open()) {
        archivo << intentoMinimo;
        archivo.close();
    }
}


int main() {
   srand(time(0)); /// una sola vez en el main

   int opcion;
   int intentoMinimo = leerIntentoMinimo();
//    intentoMinimo = 0;
   int intentos = 0;  // Declara los intentos aquí, para que esté disponible en todo el programa

   do{
      limpiarPantalla();
      cout << "MENU PRINCIPAL" << endl;
      cout << "--------------------" << endl;
      cout << "1- Jugar" << endl;
      cout << "2- Estadisticas" << endl;
      cout << "3- Creditos" << endl;
      cout << "0- Salir" << endl;
      cout << "--------------------" << endl;
      cout << "Opcion: ";
      cin >> opcion;
      
      switch(opcion){
      case 1:{
            limpiarPantalla();
            int numeroPensado = 1 + rand() % 100;
            int numero;
            intentos = 0;  // Resetea el conteo de intentos cada vez que juegas
            
            do{
               intentos++;
               cout << "---------" << endl;
               cout << "Intento #" << intentos << endl;
               cout << "Ingrese numero: ";
               cin >> numero;
               
               if(intentos >= 3){
                  if(numero > numeroPensado){
                     cout << "El numero pensado es mas chico." << endl;
                  }
                  else if(numero < numeroPensado){
                     cout << "El numero pensado es mas grande." << endl;
                  }
               }
            }while(numero != numeroPensado);
            
            cout << "¡Adivinaste el número en el intento #" << intentos << "!" << endl;
            
            // Algoritmo para buscar el menor intento
            if(intentoMinimo == 0 || intentos < intentoMinimo){
               intentoMinimo = intentos;
               // funcion para guardar intento minimo en un archivo
               guardarIntentoMinimo(intentoMinimo);
            }
         }
         break;
         
      case 2:
         limpiarPantalla();
         if(intentoMinimo > 0){

            // cout << "El numero de intentos totales es de " << intentos << " intentos" << endl; //corregir
            cout << "El menor intento hasta ahora es el intento #" << intentoMinimo << endl;
         }
         else{
            cout << "Aun no se ha jugado..." << endl;
         }
         break;
         
      case 3:
         limpiarPantalla();
         cout << "Silent Gil" << endl;
         cout << "Es un excelente juego donde debes ser más inteligente que la computadora" << endl;
         cout << "*********************" << endl;
         cout << "*   TEAM SILENCIO   *" << endl;
         cout << "*********************" << endl;
         cout << endl << endl;
         break;
         
      case 0:
         cout << "Gracias por jugar!!! " << endl;
         break;
         
      default:
         cout << "Opción no válida, por favor intenta de nuevo." << endl;
         break;
      }
      
      // Pausar antes de limpiar la pantalla
      pausar();
      
   } while(opcion != 0);
   
   return 0;
}
