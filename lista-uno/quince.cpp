#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int escalones, vueltas=0, opcion, subir, bajar, posicion=0;

	cout<<"Cuantos peldaños tiene la escalera toroidal: ";
	cin>>escalones;
	cout<<endl<<"1.- Subir.";
	cout<<endl<<"2.- Bajar.";
	cout<<endl<<"3.- Salir.";
	cout<<endl<<"Selecione una opcion: ";
	cin>>opcion;

	while(opcion!=3){

		switch(opcion){
			case 1:
				cout<<"Cuantos escalones desea subir: ";
				cin>>subir;
				if((subir+posicion)>=(escalones+1)){
					vueltas+=(subir+posicion)/(escalones+1);
					posicion=(subir+posicion)%(escalones+1);
				}
				else{
					posicion=(subir+posicion)%(escalones+1);
				}
				cout<<"Vueltas: "<<vueltas;
				cout<<endl<<"Posicion actual: "<<posicion;
	
			break;

			case 2:
				cout<<"Cuantos escalones desea bajar: ";
				

			break;

			case 3:
			break;

			default:
				cout<<"Opcion incorrecta.";
			break;
		}

		cout<<endl<<endl<<"1.- Subir.";
		cout<<endl<<"2.- Bajar.";
		cout<<endl<<"3.- Salir.";
		cout<<endl<<"Selecione una opcion: ";
		cin>>opcion;
	}

	
	cout<<endl;
	getch();
	return 0;
}



