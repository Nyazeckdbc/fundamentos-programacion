#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;


srand(time(NULL));
int aleatorio;
int k=0;
string fichas[28];
string radiacion[] = {"0", "1", "2", "3", "4", "5", "6"};
string blindaje[] = {"0", "1", "2", "3", "4", "5", "6"};

int main(){

    for(int i=0; i<=6; i++){
        for(int j=i; j<=6; j++){
            fichas[k] = radiacion[i] + blindaje[j];
            k++;
        }
    }
 

    for(k=27; k>=0; k--){
            cout<<"["<<fichas[k]<<"]";
    }

    cout<<endl;
    system("pause");
    return 0;
}

struct jugador(){
    
}jugador[i];