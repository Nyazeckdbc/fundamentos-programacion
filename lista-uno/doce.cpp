#include <iostream>


using namespace std;


int main(){


    int turbinaUno=0, turbinaDos=0, turbinaTres=0, turbinaCuatro=0, turbinaCinco=0, turbinaSeis=0;
    int estatus, alaIzquierda=2, alaDerecha=2;

    cout<<"Para poder despegar, introduzca el estado de las turbinas 0 = apagado / 1 = encendido "<<endl;

    cout<<"Turbina uno: "; cin>>turbinaUno;
    cout<<"Turbina dos: "; cin>>turbinaDos;
    cout<<"Turbina tres: "; cin>>turbinaTres;
    cout<<"Turbina cuatro: "; cin>>turbinaCuatro;
    cout<<"Turbina cinco: "; cin>>turbinaCinco;
    cout<<"Turbina seis: "; cin>>turbinaSeis;

    estatus = turbinaUno +turbinaDos + turbinaTres + turbinaCuatro + turbinaCinco + turbinaSeis;
    if(estatus==6){
        cout<<"El avion puede despegar..."<<endl<<endl;
        while((alaIzquierda==2 || alaIzquierda==3) && (alaDerecha==2 || alaDerecha==3)){

            cout<<endl<<"Estatus de las turbinas: "<<endl;
            cout<<"Turbina uno: "; cin>>turbinaUno;
            cout<<"Turbina dos: "; cin>>turbinaDos;
            cout<<"Turbina tres: "; cin>>turbinaTres;
            cout<<"Turbina cuatro: "; cin>>turbinaCuatro;
            cout<<"Turbina cinco: "; cin>>turbinaCinco;
            cout<<"Turbina seis: "; cin>>turbinaSeis;
            alaIzquierda = turbinaUno + turbinaDos + turbinaTres;
            alaDerecha = turbinaCuatro + turbinaCinco + turbinaSeis;

            if((alaIzquierda==2 || alaIzquierda==3) && (alaDerecha==2 || alaDerecha==3)){
                cout<<"El avion puede seguir volando..."<<endl;
            }
            else
            {
                cout<<"Problemas con las turbinas..."<<endl;
                cout<<"Iniciando aterrizaje de emergencia...";
            }
            
        
        }

    }
    else{
        cout<<"El avion no puede despegar.. Revise las turbinas."<<endl;
        
        
        
    }

    
    return 0;
}