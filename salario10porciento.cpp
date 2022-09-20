#include <iostream>
using namespace std;

int main(){
    float sdo, nvd, ingremento, nueS;


    cout << "Tu salario: ";
    cin >> sdo;
    
	nvd = sdo * .10;
	nueS = nvd + ingremento;

	cout << "\nEL nuevo salario con ingremento del 10% es: "<<nueS<<"%";


    return 0;
}