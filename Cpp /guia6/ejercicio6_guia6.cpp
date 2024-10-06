#include <iostream>

using namespace std;

// Hacer una función que reciba un número entero por valor llamado día y 
// un string llamado nombre por referencia y le asigne el nombre correspondiente 
// según el número de día. Siendo 0 → Domingo y 6 → Sábado.


int DiaNumero(int dia, string &nombre){

switch (dia) {
        case 0:
            nombre = "Lunes";
            break;
        case 1:
            nombre = "Martes";
            break;
        case 2:
            nombre = "Miércoles";
            break;
        case 3:
            nombre = "Jueves";
            break;
        case 4:
            nombre = "Viernes";
            break;
        case 5:
            nombre = "Sábado";
            break;
        case 6:
            nombre = "Domingo";
            break;
        default:
            nombre = "Número inválido";
            return -1;  // Retornamos -1 para indicar que hubo un error
    }
    return 0;
}

int main(){


int dia;
string  nombre;

cout <<"Ingrese un dia: "; 
cin >> dia;

if(DiaNumero(dia, nombre) == 0 ){
    cout <<"El dia ingresado es: " << nombre <<endl;
    cin >> dia;
}else{
    cout << nombre << endl;
}


    return 0;
}