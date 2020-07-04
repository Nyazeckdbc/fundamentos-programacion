#include <iostream>

using namespace std;

int main(){

    int entrada, dias, horas, conversion=0, conversionDias=0, conversionHoras=0;

    cout<<" 1 ).- Reloj terrestre a reloj lunar: "<<endl;
    cout<<" 2 ).- Reloj lunar a reloj terrestre: "<<endl<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>entrada;

    switch(entrada){
        case 1:
            cout<<endl<<"Reloj terrestre a reloj lunar...."<<endl;
            cout<<"Ingrese los dias: ";
            cin>>dias;
            cout<<"Ingrese las horas: ";
            cin>>horas;

            conversion = (dias*24)+horas;
            conversionDias = conversion / 655;
            conversionHoras = conversion%655;

            cout<<conversionDias<<" dia(s) "<<conversionHoras<<" hora(s) lunares";
            
        break;

        case 2:
            cout<<endl<<"Reloj lunar a reloj terrestre...."<<endl;
            cout<<"Ingrese los dias: ";
            cin>>dias;
            cout<<"Ingrese las horas: ";
            cin>>horas;

            conversion = (dias*655)+horas;
            conversionDias = conversion/24;
            conversionHoras = conversion%24;

            cout<<conversionDias<<" dia(s) "<<conversionHoras<<" hora(s) terrestres";
        break;

        default:
            cout<<"Opcion incorrecta.";
        break;
    }


    return 0;
}