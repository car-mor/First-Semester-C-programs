#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
  int *arr1, dim, i, x, *arr2, dim2, y=0, z;
  printf("Favor de ingresar la dimension del arreglo de enteros: \n");
  scanf("%d",&dim);

  arr1=(int*)calloc(dim, sizeof(int)); /*se reservó en heap
  un arreglo de la dimension dim dada por el usuario*/
  arr2=(int*)calloc(dim2,sizeof(int));

  printf("Arreglo con la dimension indicada: \n");
  srand(time(NULL));
  for (i=0;i<dim;i++){ /*se va llenando el arreglo arr1 de dimension dim
    con numeros aleatorios*/
    arr1[i]=(rand()%1000);
    printf("%d ",arr1[i]);
    arr2=arr1;
  }

  printf("\nArreglo de numeros pares del arreglo original: \n");
  for(x=0;x<i;x++){
    if(fmod(arr2[x],2)==0){
      printf("%d ",arr2[x]);
      y=y+1;;
    }
  }
  printf("\nLa dimension del arreglo original es de: %d", dim);
  printf("\nLa dimension del arreglo de numeros pares es: %d\n", y                                  );


  if(arr1==NULL){
    printf("Error de asignación de memoria\n");
    exit(0);
  }
  if(arr2==NULL){
    printf("Error de asignación de memoria\n");
    exit(0);
  }
  free(arr1);
  free(arr2);
  return 0;
}
