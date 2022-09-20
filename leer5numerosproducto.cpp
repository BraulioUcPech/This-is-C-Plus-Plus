#include <iostream>
using namespace std;

int main() {

    int cont;
    float num, producto;

    cont = 0;
    producto = 1;

    while (cont < 5) {

        cout << "\nTeclee un numero: ";
        cin >> num;
        producto = producto * num;
        cont++;
    }
    cout << "El producto es: " << producto;
    return 0;
}