#include <iostream>

using namespace std;


int main(){

    int indice, i=3, serie=0, posicionUno=7, posicionDos=3;

    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;

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

        while(i<=indice){
            serie+= posicionUno + posicionDos;
            cout<<serie<<" "; 
            posicionUno=posicionDos;
            posicionDos=serie;
            serie=0;


            i++;
        }
    }
    
    

    return 0;
}