#include <iostream>

using namespace std;

int main(){

    int indice, i=1, serie;

    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;
    while(i<=indice){

        if((i+1)%2==0){
            serie= (i+3)/2;
            cout<<serie<<" ";
        }
        else if((i+1)%3==0){
            cout<<"falta-3 ";
        }
        else if((i+2)%5==0){
            cout<<"falta-5 ";
        }
        else{
            cout<<"falta-7 ";
        }

        i++;
    }

    return 0;
}