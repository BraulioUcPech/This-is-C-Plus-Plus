#include <iostream>
using namespace std;

int main(){
	float costo, promedio, colegiatura;
	int materias, total, descuento;
	
	descuento = 0;
	
	cout<<"Escribir el numero de materias que cursas: ";
	cin>>materias;
	cout<<"Escribir el costo de la materias: ";
	cin>>costo;
	cout<<"Escribir el promedio obtenido en el semestre anterior: ";
	cin>>promedio;
	
	colegiatura = materias * costo;
	
	if(promedio >= 9){
		descuento = colegiatura * .30;
		total = colegiatura - descuento;
	}
	else{
		total = colegiatura + (colegiatura * .100);
	}
	cout<<"\nEl total a pagar es: "<<total;
	cout<<"\nEl descuento aplicado es: "<<descuento;
	
	return 0;
	
}