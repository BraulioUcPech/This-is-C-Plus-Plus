#include <iostream>
using namespace std;

int main(){
	int cont, cont1;
	float monto[30][10];
	
	//GUERDARLO EN UN ARREGLO MATRIZ
	for(cont = 0; cont < 30; cont++){
		for(cont1 = 0; cont1 < 10; cont1++){
			cout<<"Ingresa el mondo de la venta: "<<cont1+1<<" Vendedor: "<<cont + 1<<" : ";
			cin>>monto[cont][cont1];
		}
	}
	
	//EL MONTO VENDIDO POR CADA VENDEDOR
	for(cont = 0; cont < 30; cont++){
		float suma = 0;
		for(cont1 = 0; cont1 < 10; cont1++){
			suma = suma + monto[cont][cont1];
		}
		cout<<"\nEl monto vendido por el vendedor: "<<cont+1<<" ES: "<<suma;
	}
	
	//El vendedor que mas vendio
	float mayor = 0;
	for(cont = 0; cont < 30; cont++){
		float suma = 0;
		for(cont1 = 0; cont1 < 10; cont1++){
			suma = suma + monto[cont][cont1];
		}
		if(suma > mayor){
			mayor = suma;
			cout<<"\nEl vendedor: "<< cont+1 <<" vendio mas. " << mayor+1<<"\n";
		}
		
		/*if(suma == mayor){
			cout<<"\nEl vendedor: "<< cont+1 <<" vendio mas.";
		}*/
	}
	
	//El VENDEDOR QUE RECIBE EL 10% DE SUS VENTAS COMO COMISION
	for(cont = 0; cont < 30; cont++){
		float suma = 0;
		for(cont1 = 0; cont1 < 10; cont1++){
			suma = suma + monto[cont][cont1];
		}
		suma = suma * 0.10;
		cout<<"\nEl vendedor: "<< cont+1<<" recibe: "<<suma<<" como comision.";
	}
	
	
	float total = 0;
	for(cont = 0; cont < 30; cont++){
		float suma = 0;
		for(cont1 = 0; cont1 < 10; cont1++){
			suma += monto[cont][cont1];
		}
		total += suma;
	}
	cout<<"\nEl total de ingresos para ventas de la tienda es: "<<total;
	
	
	return 0;
	
}
