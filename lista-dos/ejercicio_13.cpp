#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main(){

    int aleatorio, mayor=0, menor=0, rango_inferior, rango_superior,auxiliar;
    int arreglo[100], N, i=0, j=0, aleatorio_orden, aux_orden=0;
    float promedio=0.0, suma_valores=0.0, suma_desviacion=0.0, desviacion=0.0;

    cout<<"--------Ejercicio 13---------\n\n";

    cout<<"Numero de elementos para el arreglo: ";
    cin>>N;

    cout<<"Rango inferior aleatorio: ";
    cin>>rango_inferior;
    cout<<"Rango superior aleatorio: ";
    cin>>rango_superior;

    srand(time(NULL));

    for(i=0; i<N; i++){
        aleatorio = rango_inferior + rand()%((rango_superior+1)-rango_inferior);    
        arreglo[i] = aleatorio;
    }

    mayor = rango_inferior;
    menor = rango_superior;

    cout<<"\n\nArreglo aleatorio: ";
    for(i=0; i<N; i++){
        cout<<arreglo[i]<<" ";
        suma_valores+=arreglo[i];

        if(arreglo[i]>=mayor){
            mayor = arreglo[i];
        }

        if(arreglo[i]<=menor){
            menor = arreglo[i];
        }
    }


    //orden del arreglo

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(arreglo[j]>arreglo[j+1]){
                aux_orden = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux_orden;
            }
        }
    }

    cout<<"\n\n------ Orden ------\n";
    cout<<"\nAscendente: ";
    for(int i=0; i<N; i++){
        cout<<arreglo[i]<<" ";
    }
    
    cout<<"\nDescendente: ";
    for(int i=N-1; i>=0; i--){
        cout<<arreglo[i]<<" ";
    }

    cout<<"\nAleatorio: ";
   for(int i=0; i<N; i++){
       aleatorio_orden = 0 +rand()%(N-1);
       auxiliar = arreglo[i];
       arreglo[i] = arreglo[aleatorio_orden];
       arreglo[aleatorio_orden] = auxiliar; 
   }

   for(int i=0; i<N; i++){
        cout<<arreglo[i]<<" ";
    }

    promedio = suma_valores/N;


    //Calculo de desviacion estandar
    for(i=0;i<N; i++){
        suma_desviacion+=pow(arreglo[i]-promedio,2);
    }
    
    desviacion = sqrt(suma_desviacion/(N-1));
    
    cout<<"\n\n------ Datos generales ------\n";
    cout.precision(3);
    cout<<"\nPromedio: "<<promedio;
    cout.precision(3);
    cout<<"\nDesviacion estandar: "<<desviacion;
    cout<<"\nNumero mayor: "<<mayor;
    cout<<"\nNumero menor: "<<menor;

    return 0;
}