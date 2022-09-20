#include <iostream>
using namespace std;

int main(){
    float cal1, cal2, cal3, Exa, Prom, PromFin, Trab;


    cout << "Calificaciones Final Parcial Uno: ";
    cin >> cal1;
    cout << "Calificaciones Final Parcial dos: ";
    cin >> cal2;
    cout << "Calificaciones Final Parcial tres: ";
    cin >> cal3;
    
    cout << "Calificacion del examen: ";
    cin >> Exa;
    
    cout << "calficacion del Trabajo: ";
    cin >> Trab;
    
	Prom = (cal1 + cal2 + cal3) / 3;
	PromFin = (Prom * .55) + (Exa * .30) + (Trab * .15);
	
	cout << "La calificacion Final: "<<PromFin;

    return 0;
}