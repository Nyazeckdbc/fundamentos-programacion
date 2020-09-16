#include <iostream>

using namespace std;

int main(){

    int k=0, N;
    cout<<"--------Ejercicio 3---------\n\n";
    cout<<"Valor de N: ";
    cin>>N;

    //Ciclo a
    cout<<"\nValores de k dentro del ciclo a: [";
    while(k<N){
        
        cout<<k<<", ";
        k++;
    }
    cout<<"]";
    cout<<"\nValor final de k fuera del ciclo a: "<<k<<"\n\n";


    //Ciclo b
    k=N;

    cout<<"Valores de k dentro del ciclo b: [";
    while(k>=0){
        cout<<k<<", ";
        k--;
    }
    cout<<"]";
    cout<<"\nValor final de k fuera del ciclo b: "<<k<<"\n\n";


    //Ciclo c

    k=1;

    cout<<"Valores de k dentro del ciclo c: [";
    while(k<N){
        k*=2;
        cout<<k<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de k fuera del ciclo c: "<<k<<"\n\n";


    //Ciclo d
    
    k=N;

    cout<<"Valores de k dentro del ciclo d: [";
    while(k>0){
        k/=2;
        cout<<k<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de k fuera del ciclo d: "<<k<<"\n\n";
    

    return 0;
}