#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
    int arr[15],conta=0,opc;
	float f;

	printf("Bienvenido\n");
	printf("Selecciona la forma en que quieres que sean llenados los datos del arreglo\n");
	printf("1.-Manual\n");
	printf("2.-Pseudoaleatoria\n");
	scanf("%d",&opc);

	switch (opc) {

	case 1:
		while(conta<15){
		printf("Ingresa el valor %d de 15 del arreglo \n", conta+1);
		scanf("%d",&arr[conta]);
		conta++;
	}

	break;

	case 2:
		printf("El arreglo se ha llenado aleatoriamente\n");
		while(conta<15){
		arr[conta]=rand()%15;
	    conta++;
	}

	break;

	default:
	printf("No hay caso\n");
	break;

	}
	printf("\n");
	conta=0;
	while(conta<15){
		printf ("El valor %d del arreglo es: %d \n",conta+1,arr[conta]);
		conta++;
	}
	printf("\n");
	conta=0;
		while(conta<15){
		printf ("El valor %d del arreglo multiplicado por 2 es: %d \n",conta+1,arr[conta]*2);
		conta++;
	}
	printf("\n");
	conta=0;
		while(conta<15){
		f=arr[conta]/3.0;
		printf ("El valor %d del arreglo dividido entre 3 es: %.2f \n",conta+1,f);
		conta++;
	}
	return 0;
}
