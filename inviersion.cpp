#include <iostream>
using namespace std;

int main(){

    float cant1, cant2, cant3, total, TP1, TP2, TP3;

    cout << "cantidad invertida persona uno: ";
    cin >> cant1;

    cout << "cantidad invertida persona dos: ";
    cin >> cant2;

    cout << "cantidad invertida persona tres: ";
    cin >> cant3;

    total = cant1 + cant2 + cant3;
    TP1 = (cant1 / total) * 100;
    TP2 = (cant2 / total) * 100;
    TP3 = (cant3 / total) * 100;

    cout << "porcentaje de la persona uno\n: " << TP1;
    cout << "porcentaje de la persona dos\n: " << TP2;
    cout << "porcentaje de la persona tres\n: " << TP3;

    return 0;
}