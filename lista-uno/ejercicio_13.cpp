#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int i, indice, posicion=0;
    int posicionUno=0, posicionDos=0, posicionTres=0, posicionCuatro=0;
    int k=1, l=2,m=3, n=4;  
    long long int serie[100], auxiliar=1;

    cout<<"Elementos a visualizar: ";
    cin>>indice;
    cout<<endl;
    //////////////////// Punto a //////////////////////////////

    cout<<"Serie a: ";

    for(i=1; i<=indice; i++){
        if(i%2==0){
            serie[i] = 0;
        }
        else{
            serie[i] = 1;
        }
        cout<<serie[i]<<" ";
    }
    cout<<endl;

    //////////////////// Punto b //////////////////////////////

    cout<<"Serie b: ";

    for(i=1; i<=indice; i++){
        if(i%2==0){
            serie[i] = 0;
        }
        else{
            posicion = ((i+1)/2)+2;
            for(int j=1; j<posicion; j++){
                auxiliar*= 10;
                auxiliar+=1;
            }
            serie[i] = auxiliar;
            auxiliar = 1;   
            posicion = 0;         
        }
        cout<<serie[i]<<" ";
    }
    cout<<endl;


    //////////////////// Punto c //////////////////////////////

    cout<<"Serie c: ";

    for(i=1; i<=indice; i++){
        if(i%2==0){
            serie[i] = i/-2;
        }
        else
        {
            serie[i] = (i-1)/2;
        }
        cout<<serie[i]<<" ";
    }
    cout<<endl;

    //////////////////// Punto d //////////////////////////////

    cout<<"Serie d: ";

    for(i=1; i<=indice; i++){
        serie[i] = (i+2)*3;
        cout<<serie[i]<<" ";
    }
    cout<<endl;

    //////////////////// Punto e //////////////////////////////

    cout<<"Serie e: ";

    for(i=1; i<=indice; i++){
        serie[i] = ((i+1)*-8)-3;
        cout<<serie[i]<<" ";
    }
    cout<<endl;

    //////////////////// Punto f //////////////////////////////

    cout<<"Serie f: ";

    for(i=1; i<=indice; i++){
        if(i==k){
                serie[i] = posicionUno+=2;
                k+=4;
            }
            else if(i==l){
                serie[i] = posicionDos+=3;
                l+=4;
            }
            else if(i==m){
                serie[i] = posicionTres+=5;
                m+=4;
            }
            else if(i==n){
                serie[i] = posicionCuatro+=7;
                n+=4;
            }
        cout<<serie[i]<<" ";
    }
    cout<<endl;

    //////////////////// Punto g //////////////////////////////

    cout<<"Serie g: ";

    for(i=1; i<=indice; i++){
        if(i%2==0){
            serie[i] = (i-1)/-1;
        }
        else
        {
            serie[i] = i-1;
        }
        cout<<serie[i]<<" ";
    }
    cout<<endl;

    //////////////////// Punto h //////////////////////////////

    cout<<"Serie h: ";
    posicionUno=7, posicionDos=3;
    
    if(indice==1){
        cout<<posicionUno;
    }
    else if(indice==2){
        cout<<posicionUno<<" ";
        cout<<posicionDos<<" ";
    }
    else
    {
        cout<<posicionUno<<" ";
        cout<<posicionDos<<" ";
        for(i=3; i<=indice; i++){
            auxiliar = posicionUno + posicionDos;
            serie[i] = auxiliar;
            cout<<serie[i]<<" ";
            posicionUno=posicionDos;
            posicionDos=auxiliar;
        }
    }

    cout<<endl;
    cout<<endl;
    system("pause");
    return 0;
}