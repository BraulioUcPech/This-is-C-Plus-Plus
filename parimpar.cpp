#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Teclee un numero: ";
    cin >> num;

    if (num% 2 == 0){
        cout << "El numero es par ";
    }
    else{
        cout << "el numero es impar ";
    }

    return 0;
}