#include <iostream>
using namespace std;

int main(){

	int num, suma, cont, producto;
	float promedio;

	cont = 0;
	suma = 0;
	producto = 1;

	while(cont < 10){
		cout<<"\nDame un numero: ";
		cin>>num;
		cont++;

		if(num%2 == 0){
			cout<<"Es PAR";
			suma = suma + num;
			promedio = suma / 10;
		}
		else{
			cout<<"Es IMPAR";
			producto = producto * num;
		}
	}
	cout<<"\nEl PROMEDIO: "<<promedio;
	cout<<"\nEL PRODUCTO: "<<producto;

	return 0;
}

