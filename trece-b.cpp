#include <iostream>

using namespace std;

int main(){

    int indice, i=1, repeticiones=0;
    
    cout<<"Ingrese un indice para la serie: ";
    cin>>indice;

    while(i<=indice){
        
        repeticiones = ((i+1)/2)+2;
        if(i%2==0){
            cout<<"0 ";
        }else
        {
            for( int j=1; j<=repeticiones; j++){
                cout<<"1";
            }
            cout<<" ";
        }
        i++;
    }
  
    return 0;
}