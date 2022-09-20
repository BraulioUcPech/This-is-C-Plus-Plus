#include <iostream>
using namespace std;

int main(){
	float compra, IVA, total_p, pago, cambio, total_d;
	char resp;
	
	resp = 'n';
	total_d = 0;
	
	while(resp != 's' || resp != 's'){
		cout<<"\nTu compra: ";
		cin>>compra;
		
		IVA =  compra * 0.16;
		cout<<"\nIVA: "<<IVA;
		
		total_p = compra + IVA;
		cout<<"\nTotal a pagar: "<<total_p;
		
		while(total_p > pago){
			cout<<"\nEl pago: ";
			cin>>pago;
		}
		cambio = pago - total_p;
		cout<<"\nSu cambio: "<<cambio;
		total_d = total_d + total_p;
		
		cout<<"\nDesea salir? (S/N) -";
		cin>>resp;
	}
	cout<<"\nTotal del dia: "<<total_d;
	
	
	
    /*int cont;
    float cantidad, monto, IVA, total, cambio, canTotal;
    char respuesta;

    cont = 0;
    respuesta = 's';
    canTotal = 0;

    while (respuesta == 's'){
        cout << "Ingrese la cantidad con que paga: ";
        cin >> cantidad;
        cout << "Ingrese el monto total: ";
        cin >> monto;
        if (cantidad < monto){
        }
        else{
            IVA = monto * 0.16;
            total = monto + IVA;
            cambio = cantidad - total;

            cout << "\nEl IVA: " << IVA;
            cout << "\nElCambio: " << cambio;
            cout << "\nCantidad total: " << total;
        }

        cout << "\nDesea realizar otro pago? s/n: ";
        cin >> respuesta;
        canTotal = canTotal + total;
        cont++;
    }
    cout << "\nTotal del dinero: " << canTotal;
    cout << "\nCantidad de veces que se realizo el pago: " << cont;*/

    return 0;
}