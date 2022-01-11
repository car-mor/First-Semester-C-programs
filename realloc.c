#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int z=15;

int main(void){
  srand(time(NULL)); //elige valores aleatorios para rand() dependiendo
  int *a, *b;
  int talla, i, pares=0, y;

  printf("\n");
  printf("Ingrese el tamaño inicial \n");
  scanf("%d\n", &talla);

  a= (int*)malloc(talla*sizeof(int)); //primer uso de la memoria
  if(a==NULL){
    printf("Error de asignacion de memoria\n", 162 );
    exit(0);
  }

  //se dan los valores aleatorios al arreglos
  for(i=0;i<talla;i++){
    a[i]=rand()%(1000+1-0)+0; //rand()%(max+1-min)+min
  }
    talla=8;

    a=(int*)realloc(a, talla*sizeof(int));
    for(i=0;i<talla;i++){
      a[i]=rand()%(1000+1-0)+0;
    }

    //se libera el espacio de memoria utilizado
    a=NULL;
    free(a);


  return 0;
}
