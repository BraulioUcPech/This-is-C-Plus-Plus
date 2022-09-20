#include <iostream>
using namespace std;

int main(){
	int vd, vta;
	float ventas[30][10], vtotal, suma;
	
	vtotal = 0;
	
	for(vd = 0; vd < 30; vd++){
		for(vta = 0; vta < 10; vta++){
			cout<<"dame la ventas "<<vta + 1<<" del vendedor "<<vd<<":"
			cin>>ventas[vd][vta];
			
			vtotal += ventas[vd][vta]; 
		}
	}
	
	// A)
	for(vd = 0; vd < 30; vd++){
		suma = 0;
		for(vta = 0; vta < 10; vta++){
			suma += ventas[vd][vta];
		}
		
	}
}