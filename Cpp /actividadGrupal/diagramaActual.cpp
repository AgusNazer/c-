# include<iostream>
using namespace std;

int main()
{
///variables importantes
    int nroart,dia,preciocost,preciovent,cantartvend;
///punto A
    int gananciamax,ganancia,cantmax,nroartmax;
    gananciamax=0;
///punto C
    int totalventas,ventasprimerasemana,porcentajeprimersemana;
    totalventas=ventasprimerasemana=porcentajeprimersemana=0;

///pedido de datos
    cout<<"ingrese numero de articulo: ";
    cin>>nroart;
    cout<<"ingrese dia: ";
    cin>>dia;
    cout<<"ingrese precio de costo: $";
    cin>>preciocost;
    cout<<"ingrese precio de venta: $";
    cin>>preciovent;
    cout<<"ingrese cantidad de articulos vendidos: ";
    cin>>cantartvend;

///corte de programa(con un 0)
    while(nroart>0)
    {

///corte de control
        int artact=nroart;
        cout<<endl<<"articulo actual es: "<<artact<<endl<<endl;

        while(nroart==artact)
        {
///punto A
            ganancia=(preciovent-preciocost)*cantartvend;

            if(gananciamax==0)
            {
                gananciamax=ganancia;
                cantmax=cantartvend;
                nroartmax=nroart;
            }
            if(gananciamax<ganancia)
            {
                gananciamax=ganancia;
                cantmax=cantartvend;
                nroartmax=nroart;
            }
            if(gananciamax==ganancia)
            {
                if(cantartvend>cantmax)
                {
                    cantmax=cantartvend;
                    nroartmax=nroart;
                }
            }

///punto C
            totalventas+=cantartvend;
            if(dia>=1&&dia<=7)
            {
                ventasprimerasemana+=cantartvend;
            }
            if(ventasprimerasemana>0){
                porcentajeprimersemana=(ventasprimerasemana*100)/totalventas;
            }

            cout<<"ingrese numero de articulo: ";
            cin>>nroart;
            if(nroart==0){break;}
            cout<<"ingrese dia: ";
            cin>>dia;
            cout<<"ingrese precio de costo: $";
            cin>>preciocost;
            cout<<"ingrese precio de venta: $";
            cin>>preciovent;
            cout<<"ingrese cantidad de articulos vendidos: ";
            cin>>cantartvend;
        }
/* extra */ cout<<"cantidad de articulos vendidos hasta ahora es: "<<totalventas<<endl;
    }
cout<<"su ganancia maxima es: $"<<gananciamax<<" del articulo "<<nroartmax<<endl<<endl;
cout<<" porcentaje de ventas de la primer semana es "<<porcentajeprimersemana<<"%"<<endl;
   cout<<endl;
   system ("pause");
       return 0;
}
