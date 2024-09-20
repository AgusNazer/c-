#include <iostream>

using namespace std;

int numero;
float promedio = 0.0;
int totalGrupo;
int acuNum;

int main(){

   for(int i = 1; i <=3; i++){// son 10 grupos pero hago 3 por simplificar
        totalGrupo = 0;
        acuNum = 0;

        cout << "Ingrese un numero: ";
        cin >> numero;
    
      
    while (numero != 0){
        totalGrupo++;
         acuNum += numero; // sumar los valores cada iteracion
       
        cout <<"Ingrese un numero: ";
        cin >> numero;
    }
    if(totalGrupo > 0){
        promedio = float(acuNum) / totalGrupo;
        cout << "El promedio del grupo " <<i <<" es de " << promedio <<endl;
    }
    cout <<"total de numeros en el grupo " <<i <<": " <<totalGrupo <<" numeros" <<endl;

    }
    return 0;
}