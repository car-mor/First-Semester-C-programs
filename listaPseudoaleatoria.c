/*Crear una lista pseudoaleatoria de 30 elementos que serán guardados en un arreglo,
retomaremos dicho arreglo para escribir un archivo binario, y una vez escrito el contenido
del arreglo en el archivo binario usando la función fseek nos posicionaremos en el
elemento 16 y escribiremos con la función fwrite/fread el número 9999. Finalmente nos
posicionaremos en la posición 25, y colocaremos el número 8888, finalmente deberá
imprimirse en la terminal el contenido total de dicho archivo binario*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  FILE *pseu;
  int i, z, nums[30], x[1], y[1], a=0, b=0;
  //escritura
  srand(time(NULL));
  for (i=0;i<30;i++){
    pseu=fopen("escrituraNoSecuencial.dat", "wb");

    if(pseu==NULL){
      printf("Error de apertura de archivo");
      return 1;
    }


    nums[i]=((-10000)+rand()%10000+1-(-10000));
    fwrite(nums, sizeof(int), 30, pseu);
    rewind(pseu);
    fseek(pseu,60, SEEK_SET);
    x[a]=9999;
    fwrite(x, sizeof(int), 1, pseu);
    rewind(pseu);
    y[b]=8888;
    fseek(pseu,96, SEEK_SET);
    fwrite(y, sizeof(int), 1, pseu);



  }
  fclose(pseu);

  //lectura
  pseu=fopen("escrituraNoSecuencial.dat", "rb");
  if(pseu==NULL){
    printf("Error de apertura de archivo");
    return 1;
  }
  fread(nums, sizeof(int), 30, pseu);
  for(z=0;z<30;z++){
    printf("%d ",nums[z]);
  }
  fclose(pseu);


  return 0;
}
