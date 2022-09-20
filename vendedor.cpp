#include <iostream>
using namespace std;

int main()
{

    float v1, v2, v3, comision, sueldo, ST;

    cout << "Las ventas del mes UNO: ";
    cin >> v1,
    cout << "Las ventas del mes DOS: ";
    cin >> v2;
    cout << "Las ventas del mes TRES: ";
    cin >> v3;

    cout << "Su sueldo base: ";
    cin >> sueldo;

    comision = (v1 + v2 + v3) * .10;
    ST = sueldo + comision;

    cout <<"Sueldo base: " <<sueldo;
    cout <<"\nEl mes: " <<comision;
    cout <<"\nTotal: " <<ST;

    return 0;
}