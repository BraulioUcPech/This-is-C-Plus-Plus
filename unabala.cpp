#include <iostream>
using namespace std;

int main(){

    float d, vel;

    cout << "la velocidad que fue la bala: ";
    cin >> d;

    vel = d * 3600 / 1000;

    cout << "velocidad: " <<vel << "km/h";

    return 0;
}