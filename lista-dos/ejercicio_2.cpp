#include <iostream>

using namespace std;

int main()
{

    int c=0, N;

    cout<<"--------Ejercicio 2---------\n\n";
    cout<<"Valor de N: ";
    cin>>N;

    // //Ciclo a
    cout<< "\nValores de c dentro del ciclo a: [ ";
    for(c=0; c<N; c+=10){
        cout<<c<<", ";
    }
    cout<<"]\n";
    cout<<"Valor de c fuera del ciclo a: "<<c<<"\n\n";

    // //Ciclo b

    cout<<"\nValores de c dentro del ciclo b: [ ";
    for(c=0; c!=N; c+=10){
        cout<<c<<", ";
    }
    cout<<"]\n";
    cout<<"Valor de c fuera del ciclo b: " <<c<<"\n\n";

    //Ciclo c

    cout<<"\nValores de c dentro del ciclo c: [ ";
    for(c=10; c!=N; c+=10){
        cout<<c<<", ";
    }
    cout<<"]\n";
    cout<<"Valor de c fuera del ciclo c: " <<c<<"\n\n";
    
    return 0;
}