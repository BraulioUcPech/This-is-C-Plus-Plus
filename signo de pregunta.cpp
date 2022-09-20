#include <iostream>
using namespace std;

int main(){
	//0.16 IVA
	
	float promedio, descuento,TL;
	int creditos;
	
	cout<<"Cual es tu promedio?: ";
	cin>>promedio;
	/*cout>>"Cuales son tus cretidos?: ";
	cin>>creditos;*/
	descuento = 0;
	
	
	if(promedio > 9.5){
		creditos = (55 / 5) * 200;
		descuento = creditos * .25;
		TL = creditos - descuento;
		cout<<"Cursas con 55 creditos: ";
	}
	else{
		if(promedio >= 9 && promedio < 9.5){
			creditos = (50 / 5) * 200;
			descuento = creditos * .10;
			TL = creditos - descuento;
			cout<<"Cursas con 50 creditos: ";
		}
		else{
			if(promedio >= 8 && promedio < 9){
				creditos = (50 / 5) * 200;
				TL = creditos + (creditos * .16) ;
				cout<<"Cursass con 50 creditos: ";
			}
			else{
				if(promedio < 8){
					creditos = (45 / 5) * 200;
					TL = creditos + (creditos * .16);	
					cout<<"Cursass con 45 creditos: ";
				}
			}
		}
	}
	cout<<"\nTotal a pagar del alumno: "<<TL;
	
	return 0;		
}
	
