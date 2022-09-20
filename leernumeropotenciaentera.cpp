#include <iostream>

using namespace std;

int main(){

    /*int cont, potencia;
    float num, resultado;
    
    cont = 0;
    resultado = 1;


	cout << "\nIngrese un numero:\n ";
    cin >> num;
    cout << "\nIngrese la potencia:\n ";
    cin >> potencia;
    
    if(potencia > 0){
    	while(cont < potencia){
    		resultado = resultado *  potencia;
    		cont++;
			cout<<"\nEl resultado se elevo: "<<resultado;
			cout<<"\nes positivo: ";	
		}
		
	}
	else{
        cout << "\nEl numero es negativo\n";
    }*/
    
    int np, n, cont, R;
    
    R = 1;
    cont = 0;
    
    cout << "\nIngrese un numero: ";
    cin >> n;
    cout << "\nIngrese la potencia: ";
    cin >> np;
    
    if(np > 0){
    	while(cont < np){
    		R = R * np;
    		cont++;
    		cout<<"\nEl resultado se elevo: "<<R;
			cout<<"\nEs positivo: ";
		}
	}
	else{
		cout<<"\nEl negativo: ";
	}
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
