#include <iostream>
using namespace std;

int main(){
    int cont;
    float pago;

    pago = 0.01;
    cont = 0;

    while (cont <= 49){
        if(cont == 0){
        	
        }
        else{
            pago = pago * 2;
        }
        cont++;
        cout<<"\nEl pago en la semana "<<cont<<" es: "<<pago;
    }
    cout<<"\nEl salario pagado por 50 semanas es: "<<pago;

    return 0;
}