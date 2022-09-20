#include <iostream>
using namespace std;

int main()
{

    float capital, ganacia, st;

    cout << "Cuanto invertiste: ";
    cin >> capital;

    ganacia = capital * .02;
    st = capital + ganacia;
	
	cout<<"Lo que ganas: "<<st;
    cout<<"\nLo que ganas invertiendo: " <<ganacia;

    return 0;
}