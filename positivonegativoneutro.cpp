#include <iostream>
using namespace std;

int main(){
	
	float num;
	
	cout<<"Teclee un numero: ";
	cin>>num;
	
	if(num > 0){
		cout<<"Es Positivo";
	}
	else{
		if(num < 0){
			cout<<"Es Negativo";
			
		}
		else{
				cout<<"Es Neutro";
			}
	}
	
   

    return 0;
}