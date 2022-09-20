#include <iostream>
using namespace std;

int main(){

    float a, l, alambre, prod;

    cout << "ancho del campo: ";
    cin >> a;
    cout << "largo del campo: ";
    cin >> l;

    alambre = (a + l) * 2 * 5;
    prod = a * l / 10000 * 14500;

    cout << "\nalambre requerido: "<<alambre <<"mts";
    cout << "\nrendiminto: " << prod << "kg";

    return 0;
}