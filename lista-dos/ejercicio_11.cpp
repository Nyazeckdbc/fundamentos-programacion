#include <iostream>

using namespace std;

int main(){

    int i=0,N;

    cout<<"--------Ejercicio 11---------\n\n";
    cout<<"Valor de N: ";
    cin>>N;

    cout<<"Factores primos: [ ";
    for(i=2; N>1; i++){
        while(N%i==0){
            cout<<i<<", ";
            N/=i;
        }
    }    
    cout<<"]\n\n";
    return 0;
}