#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int k=0;
string fichas[28];
string radiacion[] = {"0", "1", "2", "3", "4", "5", "6"};
string blindaje[] = {"0", "1", "2", "3", "4", "5", "6"};

int main(){

    for(int i=0; i<=6; i++){
        for(int j=i; j<=6; j++){
            fichas[k] = radiacion[j] + blindaje[i];
            k++;
        }
    }

    for(k=27; k>=0; k--){
      //  if(k%7==0){
        //    cout<<"\n";
        //}
            cout<<"["<<fichas[k]<<"]"<<"\n";
    }


    cout<<endl;
    cout<<endl;
    system("pause");
    return 0;
}