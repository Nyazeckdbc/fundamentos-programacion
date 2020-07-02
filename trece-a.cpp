#include <iostream>

using namespace std;

int main(){

    int posicion, i=1;

    cout<<"Ingrese un indice para la serie: ";
    cin>>posicion;

    while(i<=posicion){
        if(i%2==0){
            cout<<"0 ";
        }
        else
        {
            cout<<"1 ";
        }
        i++;
    }
    return 0;
}