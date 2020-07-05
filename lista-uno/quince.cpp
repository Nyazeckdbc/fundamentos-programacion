#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, j=0, Escalera= 0, Escalones= 0, Indice= 0, Pasos= 0, Total= 0, Bajada= 0, Vueltas=0, Dir= 1, Posicion=0, OperacionUno= 0, OperacionDos=0;
	
	printf("Cuantos escalones tiene la escalera?\n ");
	scanf("%d", &Escalera);
	
	printf("Cuantos escalones seran?\n ");
	scanf("%d", &Pasos);
	
	printf("Que quieres?  1:Avanzar    2:Retroceder \n");
	scanf("%d", &Dir);
	printf("Opcion %d", Dir);
	
	
	
	Escalones = Escalera - 1;
	
	switch(Dir)
	{
		case 1: {
			for(i=0; i=Pasos; Vueltas++)
			{
				for(j=0; j<Escalones; Indice++)
				{
					
				}
				
				printf("Llevas %d vueltas \n", Vueltas);
				OperacionUno= Escalones / Vueltas;
				OperacionDos= Escalones % Vueltas;
				Posicion= OperacionUno + OperacionDos;
				printf("Tu posicion es %d ", Posicion);
			}
			break;
		}
		
		case 2: {
			printf("Aun falta codificar esto");
			break;
			
		deault: {
			printf("Esa opcion no es valida");
			break;
		}
		}
	}
	
	


	
	/*if(Dir == 1)
	{
		for(Indice; Indice<Escalones; Total++)
		{
			Indice = Indice + Pasos;
			if(Indice==Escalones)
			{
				Vueltas= Vueltas + 1;
				printf("Llevas %d vueltas \n", Vueltas);
				OperacionUno= Escalones / Vueltas;
				OperacionDos= Escalones % Vueltas;
				Posicion= OperacionUno + OperacionDos;
				printf("Tu posicion es %d ", Posicion);
			}
		}
	}
	if(Dir == 2)
	{
		
	}
	else
	{
		printf("Esa opcion no es valida");
	}
	*/
	 
	
	/*if(Indice >= Escalones)
	{
		printf("El numero de pasos que diste al subir son: %d \n", Total);
		Bajada= Total * 2;
		printf("El numero de pasos que diste al subir y al bajar las escaleras son: %d \n", Bajada);
		
	}
	else
	{
		Total= Total + 1;
		printf("El numero de pasos que diste al subir son: %d \n", Total);
		Bajada= Total * 2;
		printf("El numero de pasos que diste al subir y al bajar las escaleras son: %d \n", Bajada);
	}*/
	
	
	return 0;
}

//Hacer un acumulador donde va guardando el número de vueltas 
//Y luego ya nada más divide el número total entre el número de vueltas y le suma el modulo