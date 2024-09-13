#include <iostream>

using namespace std;


/***
 Hacer un menu
 1 - jugar ( adivinar un numero )
 2 - puntaje mas alto ( el que menos intentos tuvo)
 3 - creditos
 0 - salir
 */

int main(){

int option;

do{
    // system("clear");
    cout << "MENU PRINCIPAL" <<endl;
    cout << "1- Jugar "<<endl; 
    cout << "1- Puntaje mas alto "<<endl; 
    cout << "3- Creditos "<<endl; 
    cout << "-------------------" <<endl;
    cout << "Option: "<<endl; 
    cin >> option;

    switch (option)
    {
    case 0 :
        cout << "Gracias por jugar" <<endl;
        break;
    
    default:
        break;
    }
    cout << "Press any key " <<endl;
// system("pause > nul");
}while(option !=0 );

    return 0;
}

// FLUJO DEL MENÚ 
// borro pantalla
// meustro make_uniqueejecuto accion
// pausa