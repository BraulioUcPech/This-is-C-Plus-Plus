#include <iostream>
using namespace std;

int main(){
    int cont1, cont2, promedio, cole, TL, suma1, suma, M, N;
    float descuento, total, IVA, DESC;

    cont1 = 0;
    suma1 = 0;

    cout << "La colegiatura: ";
    cin >> cole;

    cout<<"\nIngrese la cantidad de Grupos: ";
    cin>>M;

    while(cont1 < M){
        cont2 = 0;
        suma = 0;

        cout<<"\nIngrese la cantidad de alumnos: ";
        cin>>N;

        while(cont2 < N){
            cout<<"\nIngrese tu promedio: ";
            cin>>promedio;

            if (promedio >= 9){
                descuento = cole * .30;
                TL = cole - descuento;
                DESC = TL;
                cout << "Grupo : " << cont1 + 1 << " El descuento aplicado: " << descuento << " El total a pagar: " << DESC;
                suma1 = suma1 + DESC;
            }
            else{
                TL = cole + (cole * .16);
                IVA = TL;
                cout<<"Grupo : "<<cont1 + 1<< " TOTAL MAS IVA: "<<IVA;
                suma1 = suma1 + IVA;
            }
            cont2++;
        }
        cout<<"\nTotal de la colegiarua "<<suma1;

        suma = suma + suma1;
        cont1++;
    }
    cout << "\nEl Total a pagar: "<<suma ;

    return 0;
}