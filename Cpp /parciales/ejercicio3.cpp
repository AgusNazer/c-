#include <iostream>


using namespace std;


//! DATOS IMPORTANTES

// el dia debe ser mayor que 0 y menor o igual que 31 (por el mes)
//  procesar los datos en otro ciuclo
// al ignresar engativo finaliza el ciclo

//1 pedir el dia, usarlo como indice de los registros
// 2 pedir que ingrese el importe recaudado del inmpuestato inmonbiliraio y el 
// impouesto automotor
//3 calcular el total recaudado para el dia sumando los dos importes
//4 calcular el porcentaje del importe auutomor respecto al del total recaudado
//5 veirificar is el ipmrote recaudado por el impoesta inmobiliraio es el menor hasta aohra, si es 
// asi, actualizar el registros del menor ipmorte y el dia correpsondiente

//! NOTA: no llegue a desarrolllar el codigo de este ejercicio en los 90 minutos :(
int main() {
    int dia;
    
    
    cout << "Ingrese el día (1-31): ";
    cin >> dia;

    while (dia > 0 && dia <= 31) {
     
        cout << "Ingrese el día (1-31): ";
        cin >> dia;
    }

    return 0;
}
