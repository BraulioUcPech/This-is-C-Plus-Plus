#include <iostream>
using namespace std;

int main(){
	int calif[5], cont;
	
	cont = 0;
	for(cont = 0; cont < 5; cont++){
		cout<<"calificaciones: ";
		cin>>calif[cont];
	}
	cont = 4;
	while(cont >= 0){
		cout<<"\n"<<calif[cont];
		cont--;
		
	}
	
}