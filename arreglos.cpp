#include <iostream>
using namespace std;

int main(){
	
	/*float num[10], menor;
	int cont, cont1;

    for(cont = 0; cont < 10; cont++){
    	
        cout << "Ingrese numero: ";
        cin >> num[cont];

        for(cont1 = 0; cont1 < cont; cont1++){
        	
            if(num[cont] < num[cont1]){
                menor = num[cont];
                num[cont] = num[cont1];
                num[cont1] = menor;   
            }
        }
    }
    
    for(cont = 0; cont < 10; cont++){
        cout << "\n" << num[cont];
    }*/
    
    //OTRA MENERA DE ACERLO ---BURBUJA MEJORADO.---
    
    int I, J;
    float lista[10], temp;
    
    for(I = 0; I < 10; I++){
    	cout<<"Ingrese numeros: ";
    	cin >> lista[I];
	}
	
	for(I = 0; I < 10; I++){
		for(J = I+1; J < 10; J++)
		if(lista[I] > lista[J]){
			temp = lista[I];
			lista[I] = lista[J];
			lista[J] = temp;
		}
	}
	
    for(I = 0; I < 10; I++){
    	cout<<"\n"<<lista[I];
	}
    
    
    
    
    
    
    
    
    
/* int calif[5], cont;

    for(cont=0; cont<5; cont++){
        cout << "Ingrese calificacion: ";
        cin >> calif[cont];
    }
    cont = 4;
    while(cont >= 0){
        cout <<"\n" << calif[cont];
        cont--;
    } */

    /* float num[50], suma, promedio, mayores;
    int cont;

    cont = 0;
    while(cont < 50){
        cout << "Ingrese numero: ";
        cin >> num[cont];
        suma = suma + num[cont];
        cont++;
    }
    cont = 49;
    promedio = suma / 50;
    mayores = 0;
    while(cont >= 0){
        if(num[cont] > promedio){
            mayores++;
        }
        cont--;
    }
    cout << "\nnumeros mayoures "<< mayores << "\nEl promedio es: "<< promedio; */
    return 0;
}