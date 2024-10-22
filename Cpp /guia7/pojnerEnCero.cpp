#include <iostream>

using namespace std;

// poner en cero un vector
void ponerEnCero(int tam, int vec[]){

    for (int i = 0; i < tam; i++)
{
        vec[i] = 0;
    }
}

int main(){
    int tam = 2;
    int vec[5];

    ponerEnCero(tam, vec);
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}