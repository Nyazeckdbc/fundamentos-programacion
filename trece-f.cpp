#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int indice, i=5, serie, posicionUno=2, posicionDos=3, posicionTres=5, posicionCuatro=7;
    int j=5, k=6,l=7, m=8;     

    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;
    if(indice==1){
        cout<<posicionUno<<" ";
    }
    else if(indice==2){
        cout<<posicionUno<<" ";
        cout<<posicionDos<<" ";
    }
    else if(indice==3){
        cout<<posicionUno<<" ";
        cout<<posicionDos<<" ";
        cout<<posicionTres<<" ";
    }
    else if(indice==4){
        cout<<posicionUno<<" ";
        cout<<posicionDos<<" ";
        cout<<posicionTres<<" ";
        cout<<posicionCuatro<<" ";
    }
    else{
        cout<<posicionUno<<" ";
        cout<<posicionDos<<" ";
        cout<<posicionTres<<" ";
        cout<<posicionCuatro<<" ";
        while(i<=indice){
            if(i==j){
                serie = posicionUno +2;
                cout<<serie<<" ";
                j+=4;
                posicionUno+=2;
            }
            else if(i==k){
                serie = posicionDos +3;
                cout<<serie<<" ";
                k+=4;
                posicionDos+=3;
            }
            else if(i==l){
                serie = posicionTres +5;
                cout<<serie<<" ";
                l+=4;
                posicionTres+=5;

            }
            else if(i==m){
                serie = posicionCuatro +7;
                cout<<serie<<" ";
                m+=4;
                posicionCuatro+=7;
            }


            i++;
        }
    }

    return 0;
}