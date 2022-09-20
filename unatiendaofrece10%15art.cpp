#include <iostream>
using namespace std;

int main(){

    int art;
    float precio, descuento, total;
    art = 0;

    cout << "Ingrese el numero de articulos: \n";
    cin >> art;

    while (art > 0){
        cout << "Ingresa el precio del articulo:"<<art<<"\n";
        cin >> precio;

        if(precio >= 1500){
            descuento = precio * 0.10;
            total = precio - descuento;
            cout << "El total a pagar es: "<<total;
        }
        else{
            total = precio * art;
            cout << "\nEl total a pagar es: "<<precio;
        }
        art--;
        cout <<"\nEl descuento aplicado es: " << descuento;
        cout<<"\nEl precio con descuento es: "<<total;
    }
    cout<<"\nEl total a pagar es: "<<total;

    return 0;
}