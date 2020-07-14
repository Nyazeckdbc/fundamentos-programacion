#include <iostream>
#include <stdlib.h>

using namespace std;

int nRaices(int k , int N);

int main(){
 	
    int k=0 , N , m;
 	
    cout<<"Calculo de N raices complejas...."<<endl;
    cout<<"Introduzca las N raices: ";
 	cin>>N;
    
    cout<<endl;
 	    for(k=0; k<N; k++){
     	    m = nRaices(k,N);
            cout<<"Raiz #"<<k<<" es: "<<m<<"PI/"<<N<<endl;
	 }

    cout<<endl;
	
    system("pause");
	return 0;
	}
	
 int nRaices(int k , int N){
 	int raiz=0;
 	raiz=2*k;
 	return raiz;
 }

