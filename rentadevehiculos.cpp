#include <iostream>
using namespace std;

int main(){

    int CF, dias;
    float km, total, extras;
    
	CF = 1500;

    cout << "Cuantos kilometros recorristes?: ";
    cin >> km;
    cout << "Cuantos dias recorriste?: ";
    cin >> dias;
    
    
    if (km <= 100){
        total = CF * dias;
        
    }
    else{
        if (km > 100 && km <= 300){
            extras = (km - 100) * 20;
            total = CF * dias + extras;
        }
        else{
            extras = (km - 300) * 50;
            total = ((300 - 100) * 20) + CF * dias + extras;  
        }
    }
	cout<<"Va a pagar (Por los kilosmtros y los dias recorridos): " <<total;

    return 0;
}