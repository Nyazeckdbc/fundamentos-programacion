#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int peldanos, posicion=0, i, opcion, pasos;

    cout<<"Ingrese el numero de peldaños de la escalera: ";
    cin>>peldanos;

    cout<<"1.- Subir."<<endl;
    cout<<"2.- Bajar."<<endl;
    cout<<"3.- Salir."<<endl;
    cout<<"Selecione una opcion: ";
    cin>>opcion;

    while(opcion!=3){

        switch(opcion){
            case 1:
                cout<<"Cuantos pasos desea subir: ";
                cin>>pasos;
                    if((pasos+posicion)>=(peldanos+1)){
                            posicion = (pasos+posicion)%(peldanos+1);
                            cout<<"Posicion actual: "<<posicion;
                }
                else{
                    posicion+=pasos;
                    cout<<"Posicion actual: "<<posicion;
                }
            break;
            case 2:
            break;
            case 3:
            break;
            default:
                cout<<"Selecione una opcion correcta."<<endl;
            break;
        }

    cout<<endl<<"1.- Subir."<<endl;
    cout<<"2.- Bajar."<<endl;
    cout<<"3.- Salir."<<endl;
    cout<<"Selecione una opcion: ";
    cin>>opcion;
        
    }


    cout<<endl;
    system("pause");
    return 0;
}