#include <iostream>
using namespace std;

int main(){
	int cont;
	float n, m, v;
	
	cont = 0;
	
	cout << "Las veces que comparas: ";
	cin >> v;
	
	while(cont < v){
		cout<<"Teclee un numero: ";
		cin >> n;
		
		if(cont == 0){
			m = n;
		}
		else{
			if(n > m){
				m = n;
			}
		}
		cont++;
	}
	cout<<"\nEl numero mayor es: "<<m;
	
	
}