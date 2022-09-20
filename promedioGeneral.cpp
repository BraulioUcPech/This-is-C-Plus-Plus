#include <iostream>
using namespace std;

int main(){

    float calif, tarea, T1, T2, T3, prom1, prom2, prom3, promGen;

    cout << "la calificacion del examen de matematicas: ";
    cin >> calif;

    cout << "calificaion de la primera tarea: ";
    cin >> T1;
    cout << "calificaion de la segunda tarea: ";
    cin >> T2;
    cout << "calificaion de la tercera tarea: ";
    cin >> T3;

    tarea = (T1 + T2 + T3) / 3;
    prom1 = (calif * .90) + (tarea * .10);

    cout << "la calificacion del examen de fisica: ";
    cin >> calif;

    cout << "calificaion de la primera tarea: ";
    cin >> T1;
    cout << "calificaion de la segunda tarea: ";
    cin >> T2;

    tarea = (T1 + T2) / 2;
    prom2 = (calif * .80) + (tarea * .20);

    cout << "la calificacion del examen de quimica: ";
    cin >> calif;

    cout << "calificaion de la primera tarea: ";
    cin >> T1;
    cout << "calificaion de la segunda tarea: ";
    cin >> T2;
    cout << "calificaion de la tercera tarea: ";
    cin >> T3;

    tarea = (T1 + T2 + T3) / 3;
    prom3 = (calif * .85) + (tarea * .15);

    promGen = (prom1 + prom2 + prom3) / 3;

    cout << "\npromedio de matematicas es: " << prom1;
    cout << "\npromedio de fisica es: " << prom2;
    cout << "\npromedio de quimica es: " << prom3;
    cout << "\nEl promedio general es: " << promGen;

    return 0;
}