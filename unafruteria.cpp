#include <iostream>
using namespace std;

int main(){

    int kilo;
    float precio, total, descuento, TL;


    cout << "Cuantas kilos de manzanas compro?: ";
    cin >> kilo;
    cout << "El precio del kilo de manzanas?: ";
    cin >> precio;

    total = precio * kilo;
    if (kilo <= 2){
        descuento = 0;
        cout << "\nSe esta aplicando el 0%:";
    }
    else{
        if (kilo > 2 && kilo <= 5){
            descuento = total * .05;
            cout << "\nSe esta aplicando el 5%:";
        }
        else{
            if (kilo > 5 && kilo <= 10){
                descuento = total * .10;
                cout << "\nSe esta aplicando el 10%:";
            }
            else{
                descuento = total * .20;
                cout << "\nSe esta aplicando el 20%:";
            }
        }
    }
    // PAGO = PRECIO * KILO - DESCUENTO * PRECIO * KILO;
    TL = total - descuento;
    cout << "\nEl descuento aplicado es: " << descuento;
    cout << "\nEl total a pagar es: " << T;

    return 0;
}