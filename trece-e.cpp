#include <iostream>

using namespace std;

int main(){

    int indice, i=1, serie;

    cout<<"Introduzca un indice para la serie: ";
    cin>>indice;

    while(i<=indice){

        serie = ((i+1)*-8)-3;
        cout<<serie<<" ";

        i++;
    }

    return 0;
}