#include <iostream>
using namespace std;

int main(){
    int cont;
    float inversion, interes;

    cont = 0;
    interes = 1;
	inversion = 0;
	
    cout << "ingrese el monto de su inversion: ";
    cin >> inversion;

    while ( cont < 12 ){
        //inversion = inversion + (inversion * 0.02);
        interes = inversion * 0.02;
        inversion = inversion + interes;
        cout << "\nla ganancia del mes: "<<inversion<<" el interes: "<<interes;
        cont++;
    }

    cout<< "\nlas ganacias del todo del año: "<<inversion;

    return 0;
}