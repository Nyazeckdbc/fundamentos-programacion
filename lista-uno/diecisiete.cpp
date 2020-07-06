#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int aleatorio_en_rango(int minimo, int maximo){
	return minimo + rand() /(RAND_MAX / (maximo - minimo + 1) + 1);
}

int main(){

    int numeros, auxiliar, i=0, j=0;
    int matrizNumeros[100];
    int matrizCopia[100];
    int posicion, contador;
    bool elegidos[100];
    srand(time(NULL));

    cout<<"Cuantos numeros desea capturar?: ";
    cin>>numeros;

    for(int i=0; i<numeros; i++){
        cout<<i+1<<".- Introduzca un numero: ";
        cin>>matrizNumeros[i];
    }


    for( i=0; i<numeros; i++){
        for(int j=0; j<numeros-1; j++){
            if(matrizNumeros[j]>matrizNumeros[j+1]){
                auxiliar = matrizNumeros[j];
                matrizNumeros[j] = matrizNumeros[j+1];
                matrizNumeros[j+1] = auxiliar;     
            }
        }
    }
    
    cout<<endl<<"Orden ascendente: ";

    for( i=0; i<numeros; i++){
        cout<<matrizNumeros[i]<<" ";
    }

    cout<<endl<<"Orden descendente: ";
    
    for(i=numeros-1; i>=0; i--){
        cout<<matrizNumeros[i]<<" ";
    }
    
    cout<<endl<<"Orden aleatorio: ";
    for(int i=0; i<numeros; i++)
    {
    	int indiceAleatorio = aleatorio_en_rango(0, numeros -1);
    	int temporal = matrizNumeros[i];
    	matrizNumeros[i]= matrizNumeros[indiceAleatorio];
    	matrizNumeros[indiceAleatorio]= temporal;
    }
    
    for(i=0; i<numeros; i++)
    {
    	cout<<matrizNumeros[i]<<" ";
	}
    
    


    cout<<endl;
    system("pause");
    return 0;
}
