#include <iostream>
using namespace std;

int main(){
	float n1, n2, proct;
	
	cout<<"Tu precio del producto: ";
	cin>>n1;
	
	cout<<"Tu precio de otro producto: ";
	cin>>n2;
	
	proct = n1 * n2;
	cout<<"Total de dos productos es: "<<proct;
	
	return 0;
}