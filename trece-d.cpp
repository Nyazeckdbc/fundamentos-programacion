#include <iostream>

using namespace std;

int main(){

    int indice, i=1, serie=0;

    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;

    while(i<=indice){

        serie = (i+2)*3;
        cout<<serie<<" ";
        i++;
    }


    return 0;
}