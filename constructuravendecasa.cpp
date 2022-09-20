#include <iostream>
using namespace std;

int main(){
	float costo, ingreso;
	int enganche, mes;
	
	cout<<"Escribir el costo de la casa: ";
	cin>>costo;
	cout<<"Escribir el ingreso: ";
	cin>>ingreso;
	
	if(ingreso > 10000){
		enganche = costo * .15;
		mes = (costo - enganche) / (12 * 10);
		cout<<"Es el 15%: ";
	}
	else{
		enganche = costo * .30;
		mes = (costo - enganche) / (12 * 7);
		cout<<"Es el 30%: ";
	}
	cout<<"\nEl enganche a pagar es: "<<enganche;
	cout<<"\nLos meses a pagar es: "<<mes;
	
	return 0;
	
}