#include <iostream>
using namespace std;

int main(){
    int cont;
    float num, promedio, suma;

    cont = 0;
    suma = 0;
    
    while(cont < 10){
        cout << "Ingrese un numero: ";
        cin >> num;
        suma = suma + num;
        cont++;
    }
    promedio = suma / 10;
    cout << "El promedio es: " << promedio;

}