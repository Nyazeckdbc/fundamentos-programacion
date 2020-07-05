#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int numeros, auxiliar, aleatorio, k=0;
    int matrizNumeros[100];

    cout<<"Cuantos numeros desea capturar?: ";
    cin>>numeros;

    for(int i=0; i<numeros; i++){
        cout<<i+1<<".- Introduzca un numero: ";
        cin>>matrizNumeros[i];
    }

    for(int i=0; i<numeros; i++){
        for(int j=0; j<numeros; j++){
            if(matrizNumeros[j]>matrizNumeros[j+1]){
                auxiliar = matrizNumeros[j];
                matrizNumeros[j] = matrizNumeros[j+1];
                matrizNumeros[j+1] = auxiliar;     
            }
        }
    }
    
    cout<<endl<<"Orden ascendente: ";

    for(int i=0; i<numeros; i++){
        cout<<matrizNumeros[i]<<" ";
    }

    cout<<endl<<"Orden descendente: ";
    
    for(int i=numeros-1; i>=0; i--){
        cout<<matrizNumeros[i]<<" ";
    }

    cout<<endl;
    system("pause");
    return 0;
}