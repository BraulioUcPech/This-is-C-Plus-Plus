#include <iostream>
using namespace std;

int main(){
	
	float cantidad, descuento, TOTAL;
	
	cout<<"Escribe la catidad comprada: ";
	cin>>cantidad;
	
	if(cantidad >= 1500){
		descuento = cantidad * .20;
		TOTAL = cantidad - descuento;
	}
	cout<<"\nLa cantidad a pagar es: "<<TOTAL<<" Pesos";
	cout<<"\nEl descuento aplicado es: "<<descuento<<" Pesos";
	
	return 0;
}