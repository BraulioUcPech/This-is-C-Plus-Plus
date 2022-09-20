#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout<<"Indruce un numero: ";
	cin>>num;
	
	if(num % 3 == 0){
		cout<<"Es divisible. "<<num;		
	}
	else{
		cout<<"\nNo es divisible. "<<num;
	}
		if(num >= 0){
			cout<<"\nEs positivo. "<<num;
		}	
		else{
			if(num <= 0){
				cout<<"\nEs negativo. "<<num;
			}
		}	
	return 0;		
}
