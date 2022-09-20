#include <iostream>
using namespace std;

int main(){
	
	float num1, num2, num3;
	
	cout<<"Teclee UN NUMERO: ";
	cin>>num1;
	cout<<"Teclee OTRO NUMERO: ";
	cin>>num2;
	cout<<"Teclee OTRO PORFAVOR(NUMEROS): ";
	cin>>num3;
	
	if(num1 > num2 && num1 > num3){
		if(num2 > num3){
			cout<<"= "<<num1<<num2<<num3;
		}
		else{
			cout<<"= "<<num1<<num3<<num2;
		}
	}
	else{
		if(num2 > num1 && num2 > num3){
			if(num1 > num3){
				cout<<"= "<<num2<<num1<<num3;
			}
			else{
			cout<<"="<<num2<<num3<<num1;
			}
		}
		else{
			if(num1 > num2){
				cout<<"= "<<num3<<num1,num2;
			}
			else{
				cout<<"= "<<num3<<num2<<num1;
			}	
		}
	}
	
	return 0;
}