///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Un año es bisiesto cuando es divisible por cuatro
/*
bool esBisiesto(int anio){
    if(anio%4!=0){
        ///el valor recibido no corresponde a una año bisiesto
        return false;
    }
    if(anio%100==0){
        if(anio%400==0)return true;
        return false;
    }
    return true;
}
*/

bool esBisiesto(int anio){
    return ((anio%4==0)&& (anio%100!=0 || anio%400==0));

}
int main(){
    int anio;
    cout<<"INGRESE UN ANIO ";
    cin>>anio;
    if(esBisiesto(anio)){
        cout<<"EL ANIO INGRESADO ES BISIESTO";
    }
    else{
        cout<<"EL ANIO INGRESADO NO ES BISIESTO";
    }
	cout<<endl;
	system("pause");
	return 0;
}
