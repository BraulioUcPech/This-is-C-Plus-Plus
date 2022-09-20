#include <iostream>
using namespace std;

int main(){

	int cont, apro, repro, calif;
	float p_apro, p_repro;
	
	cont = 0;
	apro = 0;
	repro = 0;
	while(cont < 20){
		cout<<"Tu calificacion: ";
		cin>>calif;
		
		if(calif >= 6){
			apro ++;
		}
		else{
			repro++;
		}
		cont++;
		
	}
	
	p_apro = 100.0 * apro / 20;
	p_repro = 100.0 * repro / 20;
	
	cout<<"\n APROVADOS: "<<apro<<" El porcentaje: "<<p_apro;
	cout << "\n REPROVADOS: " << repro << " El porcentaje:"<<p_repro;
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*int cont;
	float calif, aprovados, reprovados, porapro, porrepro;

	cont = 0;
	aprovados = 0;
	reprovados = 0;
	porapro = 1;
	porrepro = 1;

	while (cont < 20){
		cout<<"\nTU Calificacion: \n";
		cin>>calif;
		cont++;

		if(num < 6 ){
			reprovados ++;
			porrepro = (reprovados / cont) * 100;
		}
		else{
			aprovados ++;
			porapro = (aprovados / cont) * 100;
		}
	}
	cout<<"\n APROVADOS: "<<aprovados<<" El porcentaje: "<<porapro;
	cout << "\n REPROVADOS: " << reprovados << " El porcentaje:"<<porrepro;

	return 0;*/
}