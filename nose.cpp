#include <iostream>
using namespace std;

int main(){
	float C1, C2, C3, Ex, P, PA, A, Su, Su2, PG;
	int cont, alumnos, materias;
	
	Su2 = 0;
	
	cout<<"Numeros de alumnos:";
	cin>>alumnos;
	
	for(cont = 0; cont < alumnos; cont++){
		materias = 0;
		PA = 0;
		PG = 0;
		A = 0;
		while(materias < 7){
			
			cout<<"Calificaciones 1: ";
			cin>>C1;
			cout<<"Calificaciones 2: ";
			cin>>C2;
			cout<<"Calificaciones 3: ";
			cin>>C3;
			
			A = (C1 + C2 + C3)/3;
			PA = (A * 0.15) + (Ex * 0.85);
			Su = Su + PA;
			materias++;
		}
		P = Su / 7;
		Su2 = Su2 + P;
	}
	PG = Su2 / alumnos;
	cout<<"EL promedio general del grupo: "<<PG;
}