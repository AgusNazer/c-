///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Máximo y posición de un conjunto dado de números
int main(){
    const int VUELTAS=5;
    int i, num, maximo, segundoMaximo;

    for(i=1;i<=VUELTAS;i++){
        cout<<"NUMERO ";
        cin>>num;

        if(i==1){
            maximo=num;
        }
        else{
            if(i==2){
                if(num>maximo){
                    segundoMaximo=maximo;
                    maximo=num;
                }
            }
            else{
                if(num>maximo){
                    segundoMaximo=maximo;
                    maximo=num;
                }
                else{
                    if(num>segundoMaximo){
                        segundoMaximo=num;
                    }
                }
            }
        }

    }
    cout<<"MAXIMO "<<maximo;
	cout<<endl;
	cout<<"SEGUNDO MAXIMO "<<segundoMaximo<<endl;
	system("pause");
	return 0;
}
