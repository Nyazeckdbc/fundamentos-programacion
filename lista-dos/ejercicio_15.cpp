#include <iostream>

using namespace std;

int main()
{

    int matriz[10][10];
    int i=0, j=0, N=10;
    
    cout<<"--------Ejercicio 15---------\n\n";

    cout<<"----- Ciclo a ------\n\n";
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            matriz[i][j]= i*j;
        }
    }

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            cout<<"["<<i<<"]["<<j<<"] = "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"----- Ciclo b ------\n\n";

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            matriz[i][j]= i+j;
        }
    }

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            cout<<"["<<i<<"]["<<j<<"] = "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<"\n\n";
    return 0;
}