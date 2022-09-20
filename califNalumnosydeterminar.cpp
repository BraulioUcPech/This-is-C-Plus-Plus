#include <iostream>
using namespace std;

int main(){
    int N, cont, reprobados, aprobados;
    float calif, suma, porapro, porrepro, mejor, peor, promedio;

    N = 0;
    cont = 0;
    reprobados = 0;
    aprobados = 0;
    suma = 0;

	while(N <= 0){
		cout<<"Alumnos: ";
		cin>>N;
	}

    while (cont < N){
        cout<<"\nCalificacion del alumno: ";
        cin>>calif;

        if (cont == 0){
           mejor = calif;
           peor = calif;
        }
        else{
            if(calif > mejor){
            	mejor = calif;
			}
			if(calif < peor){
				peor = calif;
			}
        }
        
        if(calif >= 6){
        	aprobados++;
		}
		else{
			reprobados++;
		}
		suma = suma + calif;
		cont++;
    }
    promedio = suma / cont;
    porapro = 100.0 * aprobados / cont;
    porrepro = 100.0 * reprobados / cont;
    
    cout<<"\nLa mejor calificacion es: "<<mejor;
    cout<<"\nLa peor calificacion es: "<<peor;

    cout<<aprobados<<"\nEl porcentaje de aprobados es: "<<porapro<<"%";
    cout<<reprobados<<"\nEl porcentaje de reprobados es: "<<porrepro<<"%";

    cout<<"\nEl promedio general del grupo: "<<promedio;
    return 0;
}