#include <iostream>
using namespace std;

int main(){

    int edad, trabajo;

    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Años trabajando: ";
    cin >> trabajo;

    if (edad >= 60 && trabajo < 25){
        cout << "Se jubila por su edad: Su edad: " << edad;
        cout << "Tiene derecho a jubilarse: " << trabajo << " El tiempo trabajando.";
    }
    else{
        if(edad < 60 && trabajo >= 25){
            cout << "Se jubila por antiguedad joven: " << edad;
            cout << "Tiene derecho a jubilarse: " << trabajo << " El tiempo trabajando.";
        }
        else{
            if(edad >= 60 && trabajo >= 25){
                cout << "Se jubila por antiguedad adulta: " << edad;
                cout << "Tiene derecho a jubilarse: " << trabajo << " El tiempo trabajando.";
            }
            else{
                cout << "No tiene derecho a Jubilarse! " << edad << " Por Su edad."<<"Y por sus años de empleo";
            }
        }
    }

    return 0;
}