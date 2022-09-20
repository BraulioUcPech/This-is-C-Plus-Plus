#include <iostream>
using namespace std;

int main(){
    int cont, N;
    float total, sueldo, descuento, sumaArt;

    cont = 0;
    sumaArt = 1;
    descuento = 1;
    total = 0;

    cout << "Las ventas del mes son: ";
    cin >> N;

    if(N > 0){
        cout << "El sueldo: ";
        cin >> sueldo;
        while(cont <= N){
            sumaArt = N * sueldo;
            descuento = sumaArt * 0.10;
            total = sumaArt + descuento;
            cont++;
        }
    }
    //cout << "\nLa suma de los articulos: " << sumaArt;
    cout << "\nEL aumento del descuento: " << descuento;
    cout << "\nEl cobra: mas el aumento: " << total;
    
    return 0;
}