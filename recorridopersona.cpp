#include <iostream>
using namespace std;

int main(){
    float lun, mier, vier, TP;


    cout << "Cuanto recorriste el Lunes: ";
    cin >> lun;
    cout << "Cuando recorriste el Miercoles: ";
    cin >> mier;
    cout << "Cuando recorriste el viernes: ";
    cin >> vier;
    
	TP = (lun + mier + vier) / 3;
	
	cout << "El tiempo recorrido es: "<<TP;

    return 0;
}