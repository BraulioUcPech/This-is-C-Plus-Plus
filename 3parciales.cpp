#include <iostream>
using namespace std;

int main(){
    float E1, E2, E3, prom;

    cout << "tu promedio del primer parcial: ";
    cin >> E1;
    cout << "tu promedio del segundo parcial: ";
    cin >> E2;
    cout << "tu promedio del tercer parcial: ";
    cin >> E3;

    prom = (E1 + E2 + E3) / 3;
    
    cout<<"el promedio de las calificaciones: "<<prom;
    
    return 0;
}