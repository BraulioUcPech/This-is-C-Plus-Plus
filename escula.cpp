#include <iostream>
using namespace std;

int main(){
    int cont1, cont2, calif, suma1, suma2, M, N, totalA;
    float proG, ProE;

    cont1 = 0;
    suma1 = 0;
    totalA = 0;

    cout<<"\nIngrese la cantidad de Grupos: ";
    cin>>M;
    while(cont1 < M){
        cont2 = 0;
        suma2 = 0;

        cout<<"\nIngrese la cantidad de alumnos: ";
        cin>>N;

        while(cont2 < N){
            cout<<"Ingrese la calificacion: ";
            cin>>calif;
            suma2 = suma2 + calif;
            cont2++;
        }
        proG = 1.0 * suma2 / N;
        cout<<"\nEl promedio del grupo "<<cont1 + 1<<" es: "<<proG;
        suma1 = suma1 + suma2;
        totalA = totalA + N;
        cont1++;
    }
    ProE = 1.0 * suma1 / totalA;
    cout<<"\nEl promedio general de la escula es: "<<ProE;

    return 0;
}