#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int opcion, posicion=0, conversion=0, i=0, arregloConversion[20];
    long int numero;

    printf("\n1.- Base 2 a base 10: ");
    printf("\n2.- Base 10 a base 2: \n");
    printf("Seleccione una opcion: ");
    scanf("%i", &opcion);

    switch(opcion){
        case 1:
            printf("Ingrese el numero en base 2: ");
            scanf("%d", &numero);
            if(numero==0){
                printf("Conversion: 0");
            }
            else
            {
                while(numero>0){
                posicion = numero%10;
                if(posicion==1){
                    conversion+= pow(2,i);
                }
                i++;
                numero = numero/10;
            }
                 printf("Conversion: %d", conversion);
            }
            
            
        break;
        case 2:
            printf("Ingrese el numero en base 10: ");
            scanf("%d", &numero);

            while(numero>0){
                arregloConversion[i] = numero%2;
                numero/=2;
                i++;

            }

            printf("Conversion: ");
            for(int j=i-1; j>=0; j--){
                printf("%d",arregloConversion[j]);
            }

        break;
        default:
            printf("Opcion incorrecta...");
        break;
    }

    return 0;
}