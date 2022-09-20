#include <iostream>
using namespace std;

int main() {

    int cont;
    float num, suma;

    cont = 0;
    suma = 0;



    while (cont < 5) {

        cout << "\nTeclee un numero: ";
        cin >> num;
        suma = suma + num;
        cont++;
    }
    cout << "La suma es: " << suma;

    return 0;
}