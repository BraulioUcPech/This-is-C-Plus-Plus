#include <iostream>
using namespace std;

int main(){

	int cont, positivo, negativo, neutro;
	float num;

	cont = 0;
	positivo = 0;
	negativo = 0;
	neutro = 0;

	while(cont < 10){
		cout<<"\nDame un numero: \n";
		cin>>num;
		cont++;

		if(num > 0){
		
			positivo = positivo + 1;
		}
		else{
			if(num < 0){
			
				negativo = negativo + 1;
			}
			else{
			
				neutro = neutro + 1;
			}
		}
	}
	cout<<"\ncantidad de positivos: "<<positivo;
	cout<<"\ncantidad de negativo: "<<negativo;
	cout<<"\ncantidad de neutro: "<<neutro;



	return 0;
}