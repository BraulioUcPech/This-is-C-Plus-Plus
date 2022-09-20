#include <iostream>
using namespace std;

int main()
{
    float grados, farenjer;

    cout<<"Los grados centigrados: ";
    cin>>grados;
    
   	farenjer = grados * 1.8 + 32;

    cout <<"Tus grados centigrados se convertio a farenjer \n: "<<farenjer;
    return 0;
}