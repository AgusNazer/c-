#include <iostream>
#include <ctime>
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

int main() {
   srand(time(0));/// una sola vez en el main
	int opcion, intentoMinimo=0;
   
   do{
      system("cls");
      cout << "MENU PRINCIPAL" << endl;
      cout << "--------------------"<<endl;
      cout << "1- Jugar"<<endl;
      cout << "2- Estadisticas"<<endl;
      cout << "3- Creditos"<<endl;
      cout << "0- Salir"<<endl;
      cout << "--------------------"<<endl;
      cout << "Opcion: "<<endl;
      cin >> opcion;
      
      switch(opcion){
      case 1:{
            /// TODO: Pedir el nombre
            system("cls");
            /// Pensar un numero
            int numeroPensado = 1 + rand() % 100;
            int numero, intentos;
            
            intentos = 0;
            
            /// pedir el numero al usuario hasta que lo adivine (do while)
               /// por cada numero cuento los intentos
            do{
               intentos++;
               cout << "---------"<<endl;
               cout << "Intento #"<<intentos << endl;
               cout << "Ingrese numero: ";
               cin >> numero;
               
               if(intentos >=3){
                  if(numero > numeroPensado){
                     cout << "El numero pensado es mas chico."<<endl;
                  }
                  else if(numero < numeroPensado){
                     cout << "El numero pensado es mas grande."<<endl;
                  }
               }
              
            }while(numero != numeroPensado);
            
            cout << "Adivinaste el numero en el intento #" << intentos  << endl;
            
            /// algorimo de busqueda de menor
            if(intentoMinimo==0 || intentos < intentoMinimo){
               intentoMinimo = intentos;
            }
         }
         break;
      case 2:
         /// TODO: Muestre el numero que adivino
         system("cls");
         if(intentoMinimo > 0){
            cout << "El menor intento hasta ahora es: #" << intentoMinimo << endl;
         }
         else{
            cout << "Aun no se ha jugado..."<<endl;
         }
         break;
      case 3:
         
        system("cls");
        cout << "Silent Gil" << endl;
        cout << "Es un excelente juego donde debes ser mas inteligente que la computadora"<<endl;
        cout << "*********************"<<endl;
        cout << "*   TEAM SILENSIO   *"<<endl;
        cout << "*********************"<<endl;
        cout << endl << endl;
        break;
      case 0:
         cout << "Gracias por jugar!!! " << endl;
         break;
      }
      cout << "Presione cualquier tecla para continuar...";
      system("pause>nul");
      
   }while(opcion != 0);
   
	return 0;
}