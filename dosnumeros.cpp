#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "teclee un numero : ";
    cin >> num1;
    cout << "teclee otro numero: ";
    cin >> num2;

    if(num1 > num2){
        cout << num2 <<  " es mayor "<<num1;
    }
        else{
            if(num1 == num2){
                cout << " son igual ";
            }
            else{
                cout << num1 << " es menor "<<num2;
            }
        }
        return 0;
}