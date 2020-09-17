#include <iostream>

using namespace std;

int main(){

    int arreglo[100], k=0, c=0, N;

    cout<<"--------Ejercicio 8---------\n\n";

    cout<<"Valor de N: ";
    cin>>N;


    //ciclo a

    for(k=0; k<N; k++){
        arreglo[k] = 2*k;
    }
    
    cout<<"\n----ciclo a----\n\n";
    cout<<"Valores dentro del arreglo: [";
    for(k=0; k<N; k++){
        cout<<arreglo[k]<<", ";
    }
    cout<<"]\n";
    
    //ciclo b

    for (k=0; k<N; k++){
        arreglo[k]= 2*k+1;
    }

    cout<<"\n----ciclo b----\n\n";
    cout<<"Valores dentro del arreglo: [";
    for(k=0; k<N; k++){
        cout<<arreglo[k]<<", ";
    }
    cout<<"]\n";


    //ciclo c

    for (k=0, c=1; k<N && c<N; k++, c++){
        arreglo[k]= 2*k;
        arreglo[c]= 0;
    }
    
    cout<<"\n----ciclo c----\n\n";
    cout<<"Valores dentro del arreglo: [";
    for(k=0; k<N; k++){
        cout<<arreglo[k]<<", ";
    }
    cout<<"]\n";


    //ciclo d

    for (k=0, c=1; k<N && c<N; k++, c++){
        arreglo[k]= 0;
        arreglo[c]= 2*k+1;
    }

    cout<<"\n----ciclo d----\n\n";
    cout<<"Valores dentro del arreglo: [";
    for(k=0; k<N; k++){
        cout<<arreglo[k]<<", ";
    }
    cout<<"]\n\n";

    return 0;
}