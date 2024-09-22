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

// lote = todos los dias de agosto 
// 1 registro = cada dia ( 1, 2, 3, 4, etc...)
// cada duia va a tener: 
// dia 1 : x cantidad de impeusto inmo, x cantidad de impuesto auto.

int main() {
    int dia = 1; 
    int diaMenorRecauInmo = 0;
    float porcentajeImpuestoAuto;
    int impInmo, impAuto, total, totalInmo = 0;
    int menorRecaudacionInmo = -1; //-1 porque si pongo 0, se confundiria con un dia que haya 0 recaudacion
    int mayorRecauAuto = 0;

    while (dia != 0) { 
        cout << "Ingrese el día (1-31): ";
        cin >> dia;
        
        if (dia <= 0) break; 

        cout << "Ingrese importe inmobiliario: ";
        cin >> impInmo;
        cout << "Ingrese importe automotor: ";
        cin >> impAuto;

        total = impInmo + impAuto;
        porcentajeImpuestoAuto = (static_cast<float>(impAuto) / total) * 100;

        // Punto b): Determinar el día con menor recaudación inmobiliaria
        if (menorRecaudacionInmo == -1 || impInmo < menorRecaudacionInmo) {
            menorRecaudacionInmo = impInmo;
            diaMenorRecauInmo = dia;
        }
        // c) mayor recaudación automotor que inmobiliario. 
        if(impAuto > impInmo){
           mayorRecauAuto++;
        }

        // Acumulo el total de impuesto inmobiliario
        totalInmo += impInmo;

    
        cout << "Total importe: " << total << endl;
        cout << "El porcentaje total del importe automotor es de: " << porcentajeImpuestoAuto << " %" << endl;
        cout << "El porcentaje total del importe automotor es de: " << porcentajeImpuestoAuto << " %" << endl;
        cout << "--------------------------"<< endl;
    }

    if (diaMenorRecauInmo != 0) {
        cout << "El día que menos se recaudó por el impuesto inmobiliario fue el día: " << diaMenorRecauInmo << " con una recaudación de " << menorRecaudacionInmo << endl;
        cout << "--------------------------"<< endl;
    } else {
        cout << "No se ingresaron días válidos." << endl;
    }
    

            cout << " Los dias que hubo mayor recaudacion automotor que inmobiliario fueron los dias:  "<<mayorRecauAuto<<endl;

    return 0;
}
