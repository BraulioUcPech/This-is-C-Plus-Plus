#include <iostream>
using namespace std;
//calidad = (peso * altura) / n
int main(){
	int cont, cont1;
	float calidad[5][3], peso, altura, huevos, cali, mejor, peor, calProm, precio;
	
	for(cont = 0; cont < 5; cont++){
		for(cont1 = 0; cont1 < 3; cont1++){
			cout<<"\nEl peso de la gallina: "<<cont1+1<<" Del corral: " <<cont+1<<" : ";
			cin>>peso;
			cout<<"\nEl altura de la gallina: "<<cont1+1<<" Del corral: " <<cont+1<<" : ";
			cin>>altura;
			cout<<"\nEl cantidad de huevos : "<<cont1+1<<" Del corral: " <<cont+1<<" : ";
			cin>>huevos;
			calidad [cont][cont1]= (peso * altura) / huevos;
			
		}
	}
	
	for(cont = 0; cont < 5; cont++){
		float suma = 0;
		for(cont1 = 0; cont1 < 3; cont1++){
			suma += calidad[cont][cont1];
			calprom = suma / 3;
		}
		if(cont == 0){
			mejor = cont;
			peor = cont;
		}
		else{
			if(cont > mejor ){
				mejor = cont;
			}
			if(cont < peor){
				peor = cont;
			}
		}
	}
	
	cout<<"Mas Productivo: "<<mejor;
	cout<<"Menos Productivo: "<<peor;
	cout<<"La calidad promedio de la granja: "<<calprom;
	
	if(calprom >= 15){
		precio = 1.2 * calprom;
	}
	else{
		if(calprom > 8 && )
	}
		
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



	/*for(cont = 0; cont < 5; cont++){
		for(cont1 = 0; cont1 < 3; cont1++){
			cout<<"\nLa altura de la gallina: "<<cont1+1<<" Del corral: " <<cont+1<<" : ";
			cin>>calidad[cont][cont1];
			
		}
	}*/
	
	/*for(cont = 0; cont < 5; cont++){
		for(cont1 = 0; cont1 < 3; cont1++){
			cout<<"\nLa cantidad de huevos que pone la gallina: "<<cont1+1<<" Del corral: " <<cont+1<<" : ";
			cin>>calidad[cont][cont1];
			
		}
	}*/














//una granja calcula la calidad de sus gallinas mediante de la sig formula cantidad = peso de la gallina * altura de la gallina / cantidad de huevos que pone si la granja cuenta con 10 corales y en cada coral hay 100 gallinas desarrolla un programa que permita registrar la calidad de cada una de sus avaz en un arreglo bidimensional y con estor datos calcule lo sig: a) cual es el corar mas productivo y cual es el menor productivo d)la calidad promedio de toda la granja.
//Tomando como base la calidad promedio de la granja determine el precio de venta por kilo de huevos si consideramos la sig tabla: