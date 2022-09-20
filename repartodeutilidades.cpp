#include <iostream>
using namespace std;
int main(){

    float pago;
    int antiguedad;

    cout << "Cual fue tu pago?: ";
    cin >> pago;
    cout << "Cuantos años llevas trabajando?: ";
    cin >> antiguedad;

    if (antiguedad <= 1){
        antiguedad = pago * .05;
        cout << "\nTu antiguedad menos de 1 año: " << antiguedad <<" El 5% de su salario.";
    }
    else{
        if(antiguedad > 1 && antiguedad <= 2){
            antiguedad = pago * .07;
            cout << "\nTu antiguedad mas de 1 año o mas pero menos 2 años: " << antiguedad << " El 7% de su salario.";
        }
        else{
            if (antiguedad > 2 && antiguedad <= 5){
                antiguedad = pago * .10;
                cout << "\nTu antiguedad mas de 2 año pero menos 5 años: " << antiguedad << " El 10% de su salario.";
            }
            else{
                if(antiguedad > 5 && antiguedad <= 10){
                    antiguedad = pago * .15;
                    cout << "\nTu antiguedad mas de 5 año pero menos 10 años: " << antiguedad << " El 15% de su salario.";
                }
                else{
                    antiguedad = pago * .20;
                    cout << "\nTu antiguedad 10 años o mas: " << antiguedad << " El 20% de su salario.";
                }
            }
        }
    }
    cout << "\nTu reparto de utilidades O PAGA ES: " << antiguedad;
    
    
    //OTRA MANERA DE HACERLO DE PENSADO AREVEZ
    
    /*float sueldoM, antiguedad, utilidad;
    
    cout << "Cual fue tu pago: ";
    cin >> sueldoM;
    cout << "Cuantos años llevas trabajando: ";
    cin >> antiguedad;

	if(antiguedad >= 10){
		utilidad = sueldoM * .20;
	}
	else{
		if(antiguedad >= 5){
			utilidad = sueldoM * .15;
		}
		else{
			if(antiguedad >= 2){
				utilidad = sueldoM * .10;
			}
			else{
				if(antiguedad >= 1){
					utilidad = sueldoM * .07;
				}
				else{
					utilidad = sueldoM * .05;
				}
			}
		}
	}
	
	cout<<"La utilidad de un trabajador es: "<<utilidad;*/
	
	
    return 0;
}