#include<iostream>
using namespace std;

int main()
{
    /// Variables importantes
    int nroart, dia, preciocost, preciovent, cantartvend;
    /// Punto A
    int gananciamax, ganancia, cantmax, nroartmax;
    gananciamax = 0;
    /// Punto C
    int totalventas, ventasprimerasemana, porcentajeprimersemana;
    totalventas = ventasprimerasemana = porcentajeprimersemana = 0;
    /// Punto D
    int ventas_art5_dia16 = 0;  // Variable para llevar cuenta de las ventas del artículo 5 en el día 16

/// Punto E
    int gananciaFinDeSemana = 0;
    /// Pedido de datos
    cout << "ingrese numero de articulo: ";
    cin >> nroart;
    cout << "ingrese dia: ";
    cin >> dia;
    cout << "ingrese precio de costo: $";
    cin >> preciocost;
    cout << "ingrese precio de venta: $";
    cin >> preciovent;
    cout << "ingrese cantidad de articulos vendidos: ";
    cin >> cantartvend;

    /// Corte de programa (con un 0)
    while (nroart > 0)
    {
        /// Corte de control
        int artact = nroart;
        cout << endl << "articulo actual es: " << artact << endl << endl;

        while (nroart == artact)
        {
            /// Punto A
            ganancia = (preciovent - preciocost) * cantartvend;

            if (gananciamax == 0){
                gananciamax = ganancia;
                cantmax = cantartvend;
                nroartmax = nroart;
            }
            if (gananciamax < ganancia){
                gananciamax = ganancia;
                cantmax = cantartvend;
                nroartmax = nroart;
            }
            if (gananciamax == ganancia){
                if (cantartvend > cantmax)
                {
                    cantmax = cantartvend;
                    nroartmax = nroart;
                }
            }
            //Punto B

            int Quno = 0;
            if(cantartvend > 0){
                if(dia >=1 && dia <15){
                    Quno+= cantartvend;
                }
                cout << "La cantiadd vendida en la quincena numero: " <<Quno;
            }

            /// Punto C
            totalventas += cantartvend;
            if (dia >= 1 && dia <= 7){
                ventasprimerasemana += cantartvend;
            }
            if (ventasprimerasemana > 0){
                porcentajeprimersemana = (ventasprimerasemana * 100) / totalventas;
            }

            /// punto D: 
            // La cantidad de ventas del artículo 5 el día 16 del mes. 
            // De no detectar ventas, indicarlo con un cartel aclaratorio.
            if (nroart == 5 && dia == 16){
                ventas_art5_dia16 += cantartvend;  
            }
            // punto E
             ///Calcular la ganancia del primer fin de seman
            if (dia == 6 || dia == 7) {
                gananciaFinDeSemana += ganancia;
            }

            /// Solicitar nuevos datos
            cout << "ingrese numero de articulo: ";
            cin >> nroart;
            if (nroart == 0) { break; }
            cout << "ingrese dia: ";
            cin >> dia;
            cout << "ingrese precio de costo: $";
            cin >> preciocost;
            cout << "ingrese precio de venta: $";
            cin >> preciovent;
            cout << "ingrese cantidad de articulos vendidos: ";
            cin >> cantartvend;
        }
        /* extra */ 
        cout << "cantidad de articulos vendidos hasta ahora es: " << totalventas << endl;
    }

    // Mostrar resultados finales
    cout << "su ganancia maxima es: $" << gananciamax << " del articulo " << nroartmax << endl << endl;
    cout << " porcentaje de ventas de la primer semana es " << porcentajeprimersemana << "%" << endl;

    /// Punto D: 
   // De no detectar ventas, 
    // indicarlo con un cartel aclaratorio.
    if (ventas_art5_dia16 > 0){
        cout << "La cantidad de ventas del articulo 5 el dia 16 es: " << ventas_art5_dia16 << endl;
    }
    else{
        cout << "No se detectaron ventas del articulo 5 el dia 16." << endl;
    }
    // Punto E
     cout << "La ganancia total del primer fin de semana (días 6 y 7) es: $" << gananciaFinDeSemana << endl;

    cout << endl;
    system("pause");
    return 0;
}
