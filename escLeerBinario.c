#include<stdio.h>
struct persona{
  int idPersona;
  char nom[40], aPat[40];
  float estatura;
};

void escribeDat();
leeDat();

int main(){
  escribeDat();
  //leeDat();
  return 0;
}
//escritura
void escribeDat(){
  struct persona pr1={1, "Jorge", "López", 1.57};
  struct persona pr2={1, "Ana", "Martínez", 1.75};
  struct persona pr3={1, "David", "Hernández", 1.68};
  struct persona arrDePersonas[3]={pr1, pr2, pr3};

  FILE *fp;
  fp=fopen("listaPersona.dat", "wb");
  if(fp==NULL){
    printf("Error de apertura de archivo");
    return 1;
  }

//fwrite(&pr1, sizeof(struct persona), 1, fp);
fwrite(arrDePersonas, sizeof(struct persona), 3, fp);
fclose(fp);
}
//lectura
void leeDat(){
struct persona ar[3]; //arreglo tipo estructurado tipo persona
FILE *fp;
fp=open("listaPersonas.dat", "rb");
if(fp==NULL){
  printf("Error de apertura de archivo", );
  return 1;
}

fread(ar, sizeof(struct persona), 3, fp);
for(int x=0; x<3;x++){
  printf("%d\t%s\t%s\t%f\n", ar[x].idPersona, ar[x].nom, ar[x].aPat, ar[x].estatura);
}
fclose(fp);
}
