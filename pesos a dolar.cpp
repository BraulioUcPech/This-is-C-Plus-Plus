#include <iostream>
using namespace std;

int main()
{
    float pesos, dolares, valorD;

    cout<<"Tu dinero: ";
    cin>>pesos;
    
    cout<<"El valor del dolar?: ";
    cin>>valorD;
    
    dolares = pesos / valorD;

    cout <<"Tu dinero se convertio a dolares:\n "<<dolares;
    
    return 0;
}