#include <iostream>
using namespace std;

int main(){
	
	float hrs, hrsEx, pago;
	
	cout<<"Escribe las horas trabajadas: ";
	cin>>hrs;
	
	if(hrs > 40){
		hrsEx = hrs - 40;
		pago = (40 * 20) + (hrsEx * 30);
	}
	else{
		pago = hrs * 20;
	}
	cout<<"El pago de lal semana. Tu salario es: "<<pago<<" $";
	
	return 0;
}