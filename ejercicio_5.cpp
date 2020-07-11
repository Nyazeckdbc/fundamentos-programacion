#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int opcion, posicion=0, conversion=0, i=0, arregloConversion[20];
    long int numero;

    cout<<endl<<"1.- Base 2 a base 10: "<<endl;
    cout<<"2.- Base 10 a base 2: "<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Ingrese el numero en base 2: ";
            cin>>numero;
            if(numero==0){
                cout<<"Conversion: 0";
            }
            else
            {
                while(numero>0){
                posicion = numero%10;
                if(posicion==1){
                    conversion+= pow(2,i);
                }
                i++;
                numero = numero/10;
            }
                 cout<<"Conversion: "<<conversion;
            }
            
            
        break;
        case 2:
            cout<<"Ingrese el numero en base 10: ";
            cin>>numero;

            while(numero>0){
                arregloConversion[i] = numero%2;
                numero/=2;
                i++;

            }

            cout<<"Conversion: ";
            for(int j=i-1; j>=0; j--){
                cout<<arregloConversion[j];
            }

        break;
        default:
            cout<<"Opcion incorrecta...";
        break;
    }

    return 0;
}