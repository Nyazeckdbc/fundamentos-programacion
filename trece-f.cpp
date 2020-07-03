#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int indice, i=1, posicionUno=0, posicionDos=0, posicionTres=0, posicionCuatro=0;
    int j=1, k=2,l=3, m=4;     

    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;
    
    while(i<=indice){
            if(i==j){
                posicionUno+=2;
                cout<<posicionUno<<" ";
                j+=4;
            }
            else if(i==k){
                posicionDos+=3;
                cout<<posicionDos<<" ";
                k+=4;
            }
            else if(i==l){
                posicionTres+=5;
                cout<<posicionTres<<" ";
                l+=4;
            }
            else if(i==m){
                posicionCuatro+=7;
                cout<<posicionCuatro<<" ";
                m+=4;
            }
            i++;
        }

    return 0;
}