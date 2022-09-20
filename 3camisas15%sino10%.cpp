#include <iostream>
using namespace std;

int main(){
	
	int camisas;
	float desc, pago, precio, PC;
	
	cout<<"Cuantas camisas esta comprando: ";
	cin>>camisas;
	
	cout<<"Precio de todas las comisas: ";
	cin>>precio;
	
	if(camisas >= 3){
		PC = camisas * precio;
		desc = PC * .15;
		pago = PC - desc;
		cout<<"\nEl descuento aplicado es: "<<desc<<"$";
		cout<<"\nSu total a pagar por mas de 3 camisas es: "<<pago<<"$";
	}
	else{
		PC = camisas * precio;
		desc = PC * .10;
		pago = PC - desc;
		cout<<"\nNo compro mas de tres camisas: "<<desc<<"$";
		cout<<"\nSu total a pagar es de: "<<PC<<"$";
	}
	
	
	
}