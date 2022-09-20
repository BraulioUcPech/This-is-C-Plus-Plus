#include <iostream>
using namespace std;

int main(){
    float Gino, Pedia, Urge, PA;


    cout << "El prosupuesto: ";
    cin >> PA;
    
	Gino = PA * .40;
	Pedia = PA * .30;
	Urge = PA * .30;
	
	cout << "Prosupuesto de Ginologia: "<<Gino<<"%";
	cout << "\nProsupuesto de Pediatria: "<<Pedia<<"%";
	cout << "\nProsupuesto de Urgencias: "<<Urge<<"%";

    return 0;
}