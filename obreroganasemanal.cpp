#include <iostream>
using namespace std;

int main(){

    float sueldo, paga, hrasT, doble, triple;

    cout << "Las horas trabajadas: ";
    cin >> hrasT;
    cout << "El pago por hora: ";
    cin >> paga;

    if (hrasT <= 40){
        sueldo = hrasT * paga;
        cout << "Su sueldo es:" << sueldo;
    }
    else{
        if(hrasT > 40 && hrasT <= 48){
            doble = (hrasT - 40) * paga * 2;
            sueldo = (40 * paga) + doble;
            cout << "Su sueldo es POR LA HORA DOBLE: " << sueldo;
        }
        else{
            triple = (hrasT - 48) * paga * 3;
            doble = (48 - 40) * paga * 2;
            sueldo = (40 * paga) + triple + doble;
            cout << "Tu sueldo es POR LA HORA TRIBLE-DOBLE: " << sueldo;
        }
    }
    
    //OTRA MANERA DE HACERLO
    
    /*float sueldo, hrsT, precioHr;
    
    cout<<"Las horas trabajadas: ";
    cin>>hrsT;
    cout<<"El pago por hora: ";
    cin>>precioHr;
    
    if(hrsT <= 40){
    	sueldo = precioHr * hrsT;
	}
    else{
    	if(hrsT > 48){
    		sueldo = precioHr * 2 * 8 + precioHr * 3 * (hrsT - 48) + precioHr * 40;
		}
		else{
			sueldo = precioHr * 2 * (hrsT - 40) + precioHr + 40;
		}
	}
	cout<<sueldo<<" Es la cantidad que ganas trabajando";*/

    return 0;
}