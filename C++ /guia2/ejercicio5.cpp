#include <iostream>

using namespace std;

int main(){

float descuento, importe, importe_5_descuento,importe_10_descuento,importe_15_descuento;


cout << "Ingrese el importe original: ";
cin >> importe;

if(importe < 100){
importe_5_descuento = importe * 0.95;
cout << "El importe con el 5% de descuento es:"  <<importe_5_descuento;
}else if(importe <= 500){
importe_10_descuento = importe * 0.90;
cout << "El importe con el 10% de descuento es:" <<importe_10_descuento;
}else{
importe_15_descuento = importe * 0.85;
cout << "El importe con el 15% de descuento es:" <<importe_15_descuento;
}


return 0;
}
