#include <iostream>

using namespace std;

int main(){

    int arreglo[100], N,i=0, arreglo1[100];

    cout<<"--------Ejercicio 8---------\n\n";
    cout<<"Numero de elementos para la serie: ";
    cin>>N;

    //Serie a

    for(i=1; i<N; i++){
        arreglo[0] = 1;
        arreglo[i] = arreglo[i-1] + 3;
    }
    
    cout<<"\nSecuencia a: [ ";
    for(i=0; i<N; i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<" ]\n";

    //Serie b

    for(i=1; i<N; i++){
        arreglo[0] = 2;
        arreglo[i] = arreglo[i-1] * 2;
    }

    cout<<"Secuencia b: [ ";
    for(i=0; i<N; i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<" ]\n";

    //Serie c

    for(i=1; i<N; i++){
        arreglo[0] = 1;
        arreglo[i] = (i+1) + arreglo[i-1];
    }

    cout<<"Secuencia c: [ ";
    for(i=0; i<N; i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<" ]\n";

    //Serie d

    for(i=1; i<N; i++){
        arreglo[0] = 1;
        arreglo[i] = ((i*2)+1)+arreglo[i-1];
    }

    cout<<"Secuencia d: [ ";
    for(i=0; i<N; i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<" ]\n";

    //Serie e - Fibonacci


    for(i=2; i<N; i++){
        arreglo[0] = 0;
        arreglo[1] = 1;
        arreglo[i] = arreglo[i-1] + arreglo[i-2];
    }

    cout<<"Secuencia e - Fibonacci: [ ";
    for(i=0; i<N; i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<" ]\n";
    
    // Serie f - Los números primos
    
   

    return 0;
}