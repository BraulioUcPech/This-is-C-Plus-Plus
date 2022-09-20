#include <iostream>
using namespace std;

int main(){
	int vd, vta, mejor;
	float ventas[30][10], vtotal, suma, com, monto;
	
	vtotal = 0;
	
	for(vd = 0; vd < 30; vd++){
		for(vta = 0; vta < 10; vta++){
			cout<<"dame la ventas "<<vta + 1<<" del vendedor "<<vd+1<<":";
			cin>>ventas[vd][vta];
			// D)
			vtotal += ventas[vd][vta]; 
		}
	}
	
	// A)
	for(vd = 0; vd < 30; vd++){
		suma = 0;
		for(vta = 0; vta < 10; vta++){
			suma += ventas[vd][vta];
		}
		cout<<"\nEl vendedor: "<<vd+1<<" vendio: "<<suma;
		// C
		com = suma * 0.10;
		cout<<"\nSu comusion es de: "<<com;
		
		// B)
		if(vd == 0){
			mejor = vd;
			monto = suma;
		}
		else{
			if(monto < suma){
				mejor = vd;
				monto = suma;
			}
		}
	}
	
	cout<<"\nEl mejor vendedor es: "<<mejor+1;
	cout<<"\nLas ventas totales son: "<<vtotal;
	
	
	
	
	return 0;
}