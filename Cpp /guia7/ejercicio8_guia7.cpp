#include <iostream>


using namespace std;
// option + z para acomodar textos largos
// Dada una lista de números compuesta por 10 subgrupos y cada grupo separado del siguiente por un cero, se pide generar un vector de 10 elementos con el máximo de cada uno de los subgrupos. Luego mostrar los elementos del vector por pantalla.




int main(){


int numero;
int listaNums[20];

for(int i = 0; i < 20; i++){ // 10 subgrupos
  cout <<"Ingrese un numero (0 para finalizar el grupo): ";
  cin >> numero;
  listaNums[i] =  numero;

}
 cout << endl << "Mostrando los subgrupos:" << endl;

 for(int i = 0; i < 20; i++){
  if(listaNums[i] == 0 ){
    cout <<"--Fin del grupo--" <<endl;
  }else{
    cout <<listaNums[i] << " ";
  }
 }

    return 0;
}