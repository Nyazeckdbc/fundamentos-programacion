#include <iostream>


using namespace std;

int main(){

    int indice, i=1, serie;

    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;

    while(i<=indice){

        if(i%2==0){
            serie = i/-2;
            cout<<serie<<" ";
        }
        else
        {
            serie = (i-1)/2;
            cout<<serie<<" ";
        }

        i++;
    }
    return 0;
}