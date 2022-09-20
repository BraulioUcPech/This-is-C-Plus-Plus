#include <iostream>
using namespace std;

int main(){
	float num;
	int salir;
	
	salir = 0;

	while(salir != 1){
		cout<<"pon un numero: ";
		cin>>num;
		
		cout<<"Desea salir? (1=SI, 2=NO) -";
		cin>>salir;
		
	}
	cout<<"GRACIAS!";
	
	
	//OTRA MANERA:
	/*float num;
	char resp = 'N';
	
	while(resp !='S' || resp != 'S'){
		cout<<"pon un numero: ";
		cin>>num;
		
		cout<<"Desea salir? (S / N) -";
		cin>>resp;
		
	}
	cout<<"GRACIAS!";*/
	
	
	//OTRA MENERA:
	/*float num;
	char resp;
	
	while(1){
		cout<<"pon un numero: ";
		cin>>num;
		cout<<"Desea salir? (S/N) -";
		cin>>resp;
		
		if(resp == 's' || resp == 's'){
			break;
		}
	}
	cout<<"GRACIAS!";*/
	
	
	
	
	
	
	
	return 0;
}