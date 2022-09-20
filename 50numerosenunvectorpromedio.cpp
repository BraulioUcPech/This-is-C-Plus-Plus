#include <iostream>
using namespace std;

int main(){
	float num[50], suma, promedio, mayores;
	int cont, mayor;
	
	while(cont < 50){
		cout<<"Teclee un numero: ";
		cin>>num[cont];
		
		suma = suma + num[cont];
		cont++;
	}
	cont = 49;
	
	promedio = suma / 50;
	mayor = 0;
	while(cont >= 0){
		if(num[cont] > promedio){
			mayores++;
		}
		cont --;
	}
	cout<<"Total de numeros mayores al promedio: "<<mayores;
}