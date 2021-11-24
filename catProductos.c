#include<stdio.h>
#include<stdlib.h>

struct catalogo{
  unsigned char nomprod[100], descriprod[100];
  int id, costunitprod;
}*p;

void agregarProducto(int x);
void leerProductos();

int main(){
  FILE *cat;
  int o, prods;
  char q=168;
  p=malloc(prods*sizeof(struct catalogo));
  if(p==NULL){
    printf("Hay error en la memoria\n");
    exit(0);
  }
  printf("Bienvenido al catalogo de productos: \n");
  do{
    printf("1. Agregar producto(s). \n");
    printf("2. Ver lista de productos. \n");
    printf("3. Salir. \n");
    scanf("%d", &o);
    fflush(stdin);
    switch(o){
      case 1:
      printf("%cCuantos productos desea agregar?\n", q);
      scanf("%d", &prods);
      agregarProducto(prods);
      break;
      case 2:
      leerProductos();
      break;
    }
  }while(o!=3);
  return 0;
}

void agregarProducto(int x){
  FILE *archivo;
  int i;
  for(int i=1;i<x+1;i++){
    printf("Favor de ingresar los siguientes datos del producto: ");
    printf("\nId: ");
    scanf("%d", &p[i].id);
    fflush(stdin);
    printf("\nNombre: ");
    scanf("%[^\n]", &p[i].nomprod);
    fflush(stdin);
    printf("\nDescripcion: ");
    scanf("%[^\n]", &p[i].descriprod);
    fflush(stdin);
    printf("\nCosto unitario:$ ");
    scanf("%d", &p[i].costunitprod);
    fflush(stdin);
  }
  archivo=fopen("catProductos.txt","w+");
  for(i=1;i<x+1;i++){
    fprintf(archivo,"%s", "Id: ");
    fprintf(archivo,"%d",p[i].id);
    fprintf(archivo,"%c",'\n');
    fprintf(archivo, "%s", "Nombre: ");
    fprintf(archivo, "%s", p[i].nomprod);
    fprintf(archivo, "%c", '\n');
    fprintf(archivo, "%s", "Descripcion: ");
    fprintf(archivo, "%s", p[i].descriprod);
    fprintf(archivo, "%c", '\n');
    fprintf(archivo,"%s", "Costo unitario: $");
    fprintf(archivo,"%d",p[i].costunitprod);
    fprintf(archivo,"%c",'\n');
    fprintf(archivo,"%c",'\n');
  }
  fclose(archivo);
  free(p);
}

void leerProductos(){
  FILE *fich;
  char txtCat;
  fich=fopen("catProductos.txt", "r");
  if(fich==NULL){
    printf("\nError de apertura del archivo. \n\n");
  }
  else{
    printf("Los productos agregados al catalogo son: \n");
    while((txtCat=fgetc(fich))!=EOF){
      printf("%c", txtCat);
    }
  }
  fclose(fich);
}
