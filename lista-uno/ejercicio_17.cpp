#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int numeros, numeroEntrada[100], auxiliar, aleatorio;

    cout<<"Cuantos numeros desea agregar: ";
    cin>>numeros;

    for(int i=0; i<numeros; i++){
        cout<<i+1<<".- Ingrese un numero: ";
        cin>>numeroEntrada[i];
    }

    for(int i=0; i<numeros; i++){
        for(int j=0; j<numeros; j++){
            if(numeroEntrada[j]>numeroEntrada[j+1]){
                auxiliar = numeroEntrada[j];
                numeroEntrada[j] = numeroEntrada[j+1];
                numeroEntrada[j+1] = auxiliar;
            }
        }
    }

    cout<<endl;
    cout<<"Orden ascendente: ";
    for(int i=0; i<numeros; i++){
        cout<<numeroEntrada[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Orden descendente: ";
    for(int i=numeros-1; i>=0; i--){
        cout<<numeroEntrada[i]<<" ";
    }

    cout<<endl;

   cout<<"Orden aleatorio: ";
   srand(time(NULL));
   for(int i=0; i<numeros; i++){
       aleatorio = 0 +rand()%(numeros-1);
       auxiliar = numeroEntrada[i];
       numeroEntrada[i] = numeroEntrada[aleatorio];
       numeroEntrada[aleatorio] = auxiliar; 
   }

   for(int i=0; i<numeros; i++){
        cout<<numeroEntrada[i]<<" ";
    }

}