#include <iostream>
using namespace std;

int main()
{
    float centimetros, pies;

    cout<<"Los Centimetros: ";
    cin>>centimetros;
    
    pies = centimetros / (2.54 * 12);

    cout <<"Los centimetros se convertio a pies:\n "<<pies;
    
    return 0;
}