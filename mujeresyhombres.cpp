#include <iostream>
using namespace std;

int main(){
    float Muj, Hom, Tol;
	int PH, PM;
	
    cout << "Cuantas mujeres hay?: ";
    cin >> Muj;
    cout << "Cuantas hombres hay?: ";
    cin >> Hom;
    
    Tol = Muj + Hom;
    PH = 100.0 * Muj/Tol;
    PM = 100.0 * Hom/Tol;
    
    cout<<"El porcentaje de mujeres es: "<<PM<<"%";
    cout<<"\nEl porcentaje de Hombres es: "<<PH<<"%";

    return 0;
}