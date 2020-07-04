#include <iostream>

using namespace std;

int main(){

	int i=0, incremento, decremento, subir=0, bajar=0, peldanos;

	cout<<"Numero de escalones: ";
	cin>>peldanos;
	cout<<"Numero de escalones que incrementa por paso: ";
	cin>>incremento;
	while(i<peldanos){
		subir++;
		i+=incremento;
	}
	cout<<"Los pasos para subir la escalera son: "<<subir<<endl;

	cout<<endl<<"Numero de escalones que decrementa por paso: ";
	cin>>decremento;
	while(peldanos>=1){
		bajar++;
		peldanos-=decremento;
	}
	cout<<"Los pasos para bajar la escalera son: "<<bajar;
	
	return 0;
}