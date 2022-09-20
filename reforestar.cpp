#include <iostream>
using namespace std;

int main(){

    float metros, pino, roble, cedro;
    int hectarea, CS;

    cout << "Ingrese las hectareas: ";
    cin >> hectarea;

    metros = hectarea * 10000;
    pino = metros * .50;
    roble = metros * .30;
    cedro = metros * .20;

    CS = pino / 10 * 8;
    CS = roble / 15;
    CS = cedro / 18 ;

    cout << "arboles que se pueden plantar\n: ";
    cout << "\npinos: " << pino << " m2 " << " cantidad sembrada " << CS;
    cout << "\nroble: " << roble << " m2 " << " cantidad sembrada " << CS;
    cout << "\ncedro: " << cedro << " m2 " << " cantidad sembrada " << CS;
    return 0;
}