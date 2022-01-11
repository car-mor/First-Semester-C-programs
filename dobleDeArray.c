#include<stdio.h>
void elDobledeEllos(int[], int);
int main(){
	int arr[]={1, 2 3, 4, 5, 6, 7, 8, 9, 10, 11];
	int size=(sizeof(arr)/sizeof(int));
	printf("El tamaño actual es: %d\n", size);
	printf("\n\n Los numeros del arreglo son: ");
	for (int i=0;i<size;i++){
		printf("%d", arr[i]);
	}
	elDobledeEllos(arr, size); //Llamada función
	printf("\n\n El doble es: ");
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);

	}
	return 0;
}
//Definimos funcion
void elDobledeEllos(int [a], int size){
	int i;
	for (i=0; i<size;i++){
		a[i]=2*a[i];
	}
}
