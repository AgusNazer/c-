///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

///recaudación total: suma de todos los importes para ese número de artículo
using namespace std;

int main(){
    int numArticulo, cantidad, articuloMas;
    float rec1, rec2, rec3, importe;
    int total1, total2, total3;

    total1=total2=total3=0;

    rec1=rec2=rec3=0;

    cout<<"INGRESAR NUMERO ARTICULO ";
    cin>>numArticulo;
    while(numArticulo!=0){
        cout<<"INGRESAR LA CANTIDAD ";
        cin>>cantidad;
        cout<<"INGRESAR EL IMPORTE ";
        cin>>importe;
        switch(numArticulo){
            case 1: rec1+=importe;
                    total1+=cantidad;
                    break;
            case 2: rec2+=importe;
                    total2+=cantidad;
                    break;
            case 3: rec3+=importe;
                    total3+=cantidad;
                    break;
        }

        cout<<"INGRESAR NUMERO ARTICULO ";
        cin>>numArticulo;
    }
    cout<<"RECAUDACION ARTICULO 1 "<<rec1<<endl;
    cout<<"RECAUDACION ARTICULO 2 "<<rec2<<endl;
    cout<<"RECAUDACION ARTICULO 3 "<<rec3<<endl;
    if(total1>total2 && total1>total3){
        articuloMas=1;
    }
    else{
        if(total2>total3){
            articuloMas=2;
        }
        else{
            articuloMas=3;
        }
    }
    cout<<"NUMERO DE ARTICULO CON MAS UNIDADES VENDIDAS "<<articuloMas<<endl;
	cout<<endl;
	system("pause");
	return 0;
}


