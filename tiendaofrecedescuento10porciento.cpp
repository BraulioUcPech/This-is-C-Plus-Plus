#include <iostream>
using namespace std;

int main(){
    int cont, productos, descuento;
    float pagar,total;

    cont = 0;
	
    cout << "sus productos: ";
    cin >> productos;
    cout<<"el precio a pagar: ";
    cin>>pagar;
	
	
    
    	
	if(pagar >= 1500){
			
		while(cont < productos){
			descuento = pagar * 0.10;
			total = pagar - descuento;
			cont ++;
		
		}
		cout<<"\nLa cantidad a pagar es: "<<total<<" Pesos";
		cout<<"\nEl descuento aplicado es: "<<descuento<<" Pesos";
	}
	else{
		
		descuento = cont * pagar;
		cout<<"no aplica el descuento: "<<descuento;
	}
		

    return 0;
}