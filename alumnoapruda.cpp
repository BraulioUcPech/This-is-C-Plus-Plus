#include <iostream>
using namespace std;

int main(){
    float calf1, calf2, calf3, calft;

    cout << "tu calificacion del primer parcial: ";
    cin >> calf1;
    cout << "tu calificacion del segundo parcial: ";
    cin >> calf2;
    cout << "tu calificacion del tercer parcial: ";
    cin >> calf3;

    calft = (calf1 + calf2 + calf3) / 3;

    if (calft >= 70){
        cout << "Aprobaste: " << calft;
    }
    else{
        cout << "No Aprobaste: " << calft;
    }
    return 0;
}