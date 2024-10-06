///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

///Hacer una función que reciba un entero que represente el valor de un año
///y un string por referencia y devuelva true o false si el año es o no bisiesto.
///En la variable string debe escribir BISIESTO o NO BISIESTO según el caso
using namespace std;


bool esBisiesto(int anio, string &paraEscribir){
    if((anio%4==0)&& (anio%100!=0 || anio%400==0)){
        paraEscribir="BISIESTO";
        return true;
    }
    paraEscribir="NO BISIESTO";
    return false;
}



int main(){
    string palabra="CAMBIA?" ;
    int anio;
    cout<<"INGRESE UN ANIO ";
    cin>>anio;
    esBisiesto(anio, palabra);
    cout<<palabra;///va a imprimir BISIESTO o NO BISIESTO
	cout<<endl;
	system("pause");
	return 0;
}
