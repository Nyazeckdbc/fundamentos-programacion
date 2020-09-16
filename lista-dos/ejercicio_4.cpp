#include <iostream>

using namespace std;

int main(){

    int i=0, j=0, N;
    cout<<"--------Ejercicio 4---------\n\n";
    cout<<"Valor de N: ";
    cin>>N;


    //ciclo a

    cout<<"----ciclo a---- Los valores de i y j siempre son iguales, ya que ejecutan la misma accion si se cumple la condicion\n";
    cout<<"\nValores de i y j: [";
    for (i=0, j=0; i<N && j<N; i+=6, j+=6){
        cout<<i<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de i y j: "<<i<<"\n\n";

    //ciclo b

    cout<<"----ciclo b---- Los valores de i y j siempre son iguales, ya que ejecutan la misma accion si se cumple la condicion\n";
    cout<<"\nValores de i y j: [";
    for (i=0, j=0; i<N || j<N; i+=6, j+=6){
        cout<<i<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de i y j: "<<i<<"\n\n";

    //ciclo c

    cout<<"----ciclo c----\n";
    cout<<"\nValores de i dentro del ciclo a: [";
    for (i=N, j=0; i>0 && j<N; i-=6, j+=6){
        cout<<i<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de i fuera del ciclo c: "<<i<<"\n\n";

    cout<<"\nValores de j dentro del ciclo a: [";
    for (i=N, j=0; i>0 && j<N; i-=6, j+=6){
        cout<<j<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de j fuera del ciclo c: "<<j<<"\n\n";

    //ciclo d

    cout<<"----ciclo d----\n";
    cout<<"\nValores de i dentro del ciclo a: [";
    for (i=N, j=0; i>0 || j<N; i-=6, j+=6){
        cout<<i<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de i fuera del ciclo c: "<<i<<"\n\n";

    cout<<"\nValores de j dentro del ciclo a: [";
    for (i=N, j=0; i>0 || j<N; i-=6, j+=6){
        cout<<j<<", ";
    }
    cout<<"]";
    cout<<"\nValor final de j fuera del ciclo c: "<<j<<"\n\n";

    return 0;
}