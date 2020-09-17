#include <iostream>

using namespace std;

int main(){

    cout<<"--------Ejercicio 20---------\n\n";

    int N=3, volumen[3][3][3];
    int i=0, j=0, k=0;

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            for (k=0; k<N; k++){
                volumen[i][j][k]= i*j*k;    
            }
        }
    }

    cout<<"[\n\n";
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            for(k=0; k<N; k++){
                cout<<"["<<i<<"]["<<j<<"]["<<k<<"] = "<<volumen[i][j][k]<<"\n";   
            }
        }
        cout<<"\n";
    }
    cout<<"]";
    
    return 0;
}