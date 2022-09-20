#include <iostream>
using namespace std;

int main(){
    int cont, cont1;
    float calif[25][5], promA[25], promM[5], suma, promG;

    for(cont = 0; cont < 25; cont++){
        for(cont1 = 0; cont1 < 5; cont1++){
            cout << "Ingrese calificacion: " <<cont + 1 << " del alumno: " << cont1 + 1 << ": ";
            cin >> calif[cont] [cont1];
        }
    }

    for (cont = 0; cont < 25; cont++){
        promA[cont] = (calif[cont] [0] + calif[cont] [1] + calif[cont] [2] + calif[cont] [3] + calif[cont] [4]) / 5;
    }

    for (cont = 0; cont < 5; cont++){
        suma = 0;
        for (cont1 = 0; cont1 < 25; cont1++){
            suma = suma + calif[cont] [cont1];
        }
        promA[cont] = suma / 25;
    }

    suma = 0;
    for(cont = 0; cont < 5; cont++){
        suma = suma + promM[cont];
    }
    promG = suma / 5;



    for(cont = 0; cont < 25; cont++){
        cout << "\nPromedio del alumno " << cont + 1 << ": " << promA[cont];
    }
    
    for(cont = 0; cont < 5; cont++){
        cout << "\nPromedio de la materia " << cont + 1 << ": " << promM[cont];
    }
    
    cout << "\nPromedio general: " << promG;


    return 0;
}