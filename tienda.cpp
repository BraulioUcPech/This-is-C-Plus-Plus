#include <iostream>
using namespace std;

int main()
{

    float total, descuento, ST;

    cout << "Total de la compra: ";
    cin >> total;

    descuento = total * .15;
    ST = total - descuento;

    cout << "\nEl total con descuento a pagar es: "<<ST;

    return 0;
}