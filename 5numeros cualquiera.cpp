#include <iostream>
using namespace std;//CORREGIR AL ORIGINAL

int main(){

	int cont;
	float num = 10;

	cont = 0;

	while(cont < 5){
		cout<<"\nTeclee un numero: "<<num;

		cont = cont++;
	}

	return 0;

}
/*int main()
{
	int n;
	cin >> n;
	int i = 0;
	while (i < n)
	{
		cout << i << endl;
		i++;
	}
	return 0;
}*/