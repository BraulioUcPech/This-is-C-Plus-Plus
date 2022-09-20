#include <iostream>
using namespace std;

int main (){
	int n, cont;
	float no, su, ht, vh;
	
	cont = 0;
	no = 0;
	
	cout<<"\nnumeros de obreros: ";
	cin>>n;
	
	while(cont < n){
		cout<<"\nlas horas trabajadas: ";
		cin>> ht;
		
		if(ht <= 40){
			su = ht + 100;
		}
		else{
			su = 4000 + 150 * (ht - 40);
			
		}
		no = no + 50;
		cont++;
		
		cout<<"\nEl salario del obrero: "<<cont<<" | "<<su;
	}
	
	return 0;
}