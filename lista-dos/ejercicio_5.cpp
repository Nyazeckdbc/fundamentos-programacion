#include <iostream>

using namespace std;

int main(){

    int i=0, j=0, k=0, L, M, N;
    cout<<"--------Ejercicio 5---------\n\n";

    cout<<"Valor de L: ";
    cin>>L;
    cout<<"Valor de M: ";
    cin>>M;
    cout<<"Valor de N: ";
    cin>>N;
    
    cout<<"-------- Ciclo a---------\n\n";
    for (i=0; i<N; i++){
        for (j=0; j<M; j++){
            cout<<"i="<<i<<" j="<<j<<"\n";
    }
    cout<<"\n";
    cout<<"i="<<i<<" j="<<j<<"\n";
    cout<<"\n";
    }

    cout<<"-------- Ciclo b---------\n\n";

    for (i=0; i<N; i++){
        for (j=0; j<M; j++){
            for (k=0; k<L; k++){
                cout<<"i="<<i<<" j="<<j<<"\n";
            }
            cout<<"\n";
        }
        cout<<"\n";
        cout<<"i="<<i<<" j="<<j<<"\n";
        cout<<"\n";
    }




    return 0;
}