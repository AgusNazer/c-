#include <iostream>
using namespace std;

/***
   ACTIVIDAD PARA TAREA DE MENU
   -----------------------------
   hacer un programa con un menu:
      1- Ingresar los metros (el programa debe recordar los metros ingresados)
      2- Mostrar los metros en centimetros
      3- Mostrar los metros en kilometros
      4- Mostrar los metros en Pies
      0- Salir
*/

int main() {
   int opcion;
   
   do{
    //   system("cls");
      cout << "MENU PRINCIPAL" << endl;
      cout << "-------------------" << endl;
      cout << "1- Opcion 1"<<endl;
      cout << "2- Opcion 2"<<endl;
      cout << "3- Opcion 3"<<endl;
      cout << "-------------------" << endl;
      cout << "0- Salir"<<endl;
      cout << "Opcion: ";
      cin >> opcion;
      
      switch(opcion){
         case 1:
            cout << "Seleccionaste la opcion 1"<<endl;
            break;
         case 2:
            cout << "Seleccionaste la opcion 2"<<endl;
            break;
         case 3:
            cout << "Seleccionaste la opcion 3"<<endl;
            break;
         case 0:
            cout << "Gracias por utilzar mi aplicacion :)"<<endl;
            break;
         default:
            cout << "Opcion no valida... :(" << endl;
      }
    //   system("pause");
   }while(opcion != 0);
   
	
	return 0;
}