#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct puntos{
  float valX, valY, mod, ang;
  int id;
}*punto;

struct distancias{
  float dista;
}*distanciaxs;

//prototipos de funciones
float sumaxs(float x1, float x2);
float sumays(float y1, float y2);
float restaxs(float x1, float x2);
float restays(float y1, float y2);
float multxs(float x1, float x2);
float multys(float y1, float y2);
float dividxs(float x1, float x2);
float dividys(float y1, float y2);
float dist(float x2, float x1, float y2, float y1);

//funcion principal
int main(){
  srand(time(NULL));
  FILE *fichpts, *fichdists;
  char leer, sint=168;
  int opc, s, c, count, opdist, i,z, ptsal, p, g,r, multp, multp2, divp, divp2, xpt1, xpt2, ypt1, ypt2;
  float ang,var, xsz, ysz, distan, mod, x1sum, x2sum, y1sum, y2sum, sumax, sumay, modul, angul, restax, restay, multx, multy, dividx, dividy, distancia;
  float x1res, x2res, y1res, y2res, x1mul, x2mul, y1mul, y2mul, x1div, x2div, y1div, y2div;
  punto=malloc(1000*sizeof(struct puntos));
  distanciaxs=malloc(1000*sizeof(struct distancias));
  do{
    printf("Menu \n");
    printf("1.-Genera lista de puntos aleatoriamente\n");
    printf("2.-Genera lista de puntos manualmente\n");
    printf("3.-Obtener puntos de archivo \n");
    printf("4.-Suma puntos \n");
    printf("5.-Resta puntos \n");
    printf("6.-Multiplica puntos \n");
    printf("7.-Divide puntos \n");
    printf("8.-Determina distancia entre puntos \n");
    printf("9.-Determina la menor distancia entre puntos \n");
    printf("10.-Imprime detalles de puntos \n");
    printf("11.-Salir \n");
    scanf("%d", &opc);

    switch (opc) {

      case 1:
      printf("Generacion de puntos aleatorios: \n");
      printf("%cCuantos puntos aleatorios desea crear?\n", sint);
      scanf("%d", &ptsal);
      for(i=1;i<=ptsal;i++){
        punto[i].id=i;
        printf("Punto %d: \n", punto[i].id);
        punto[i].valX=((-200)+rand()%200+1-200);
        printf("Valor en X: %.2f \n", punto[i].valX);
        punto[i].valY=((-200)+rand()%200+1-200);
        printf("Valor en Y: %.2f \n", punto[i].valY);
        punto[i].mod=sqrt(pow(punto[i].valX, 2)+pow(punto[i].valY, 2));
        printf("Modulo: %.2f\n", punto[i].mod);
        punto[i].ang=atan(punto[i].valY/punto[i].valX)*(180/3.1416);
        if (punto[i].ang<=0){
          punto[i].ang=punto[i].ang+180;
        }
        if(punto[i].valX>0&&punto[i].valY<0){
          punto[i].ang=punto[i].ang+360;
        }
        printf("Angulo: %.2f\n\n", punto[i].ang);

        fichpts=fopen("compendioDePuntos.txt", "w+");
        if(fichpts==NULL){
          printf("\nError de apertura del archivo. \n\n");
        }
        for(z=1;z<=ptsal;z++){
          fprintf(fichpts, "%s", "Id: ");
          fprintf(fichpts, "%d %c", punto[z].id, '\n');
          fprintf(fichpts, "%s", "Valor en X: ");
          fprintf(fichpts, "%.2f %c", punto[z].valX, '\n');
          fprintf(fichpts, "%s", "Valor en Y: ");
          fprintf(fichpts, "%.2f %c", punto[z].valY, '\n');
          fprintf(fichpts, "%s", "Modulo: ");
          fprintf(fichpts, "%.2f %c", punto[z].mod, '\n');
          fprintf(fichpts, "%s", "Angulo: ");
          fprintf(fichpts, "%.2f %c", punto[z].ang, '\n');
        }

      }
      fclose(fichpts);
      free(punto);
      break;

      case 2:
      printf("%cCuantos puntos desea crear?(por favor ingrese un entero)\n", sint);
      scanf("%d", &p);
      for(i=1;i<=p;i++){
        punto[i].id=i;
        printf("Punto %d: \n", punto[i].id);
        printf("Valor en X: \n");
        scanf("%f", &punto[i].valX);
        fflush(stdin);
        printf("Valor en Y: \n");
        scanf("%f", &punto[i].valY);
        fflush(stdin);
        punto[i].mod=sqrt(pow(punto[i].valX, 2)+pow(punto[i].valY, 2));
        printf("Modulo: %.2f\n", punto[i].mod);
        punto[i].ang=atan(punto[i].valY/punto[i].valX)*(180/3.1416);
        if (punto[i].ang<=0){
          punto[i].ang=punto[i].ang+180;
        }
        if(punto[i].valX>0&&punto[i].valY<0){
          punto[i].ang=punto[i].ang+360;
        }
        printf("Angulo: %.2f\n\n", punto[i].ang);
        fichpts=fopen("compendioDePuntos.txt", "w+");
        if(fichpts==NULL){
          printf("\nError de apertura del archivo. \n\n");
        }
        for(r=1;r<=p;r++){
          punto[r].id=r;
          fprintf(fichpts, "%s", "Punto ");
          fprintf(fichpts, "%d %c", punto[r].id, '\n');
          fprintf(fichpts, "%s", "Valor en X: ");
          fprintf(fichpts, "%.2f %c", punto[r].valX, '\n');
          fprintf(fichpts, "%s", "Valor en Y: ");
          fprintf(fichpts, "%.2f %c", punto[r].valY, '\n');
          fprintf(fichpts, "%s", "Modulo: ");
          fprintf(fichpts, "%.2f %c", punto[r].mod, '\n');
          fprintf(fichpts, "%s", "Angulo: ");
          fprintf(fichpts, "%.2f %c %c", punto[r].ang, '\n', '\n');
        }
      }
      fclose(fichpts);
      free(punto);
      break;

      case 3:
      fichpts=fopen("compendioDePuntos.txt", "r");
      if(fichpts==NULL){
        printf("\nError de apertura del archivo. \n\n");
      }
      else{
        while ((leer=fgetc(fichpts))!=EOF){
          printf("%c", leer);
        }
      }
      fclose(fichpts);
      break;

      case 4:
      printf("Suma de puntos\n");
      printf("Ingrese el valor de x del primer punto\n");
      scanf("%f", &x1sum);
      fflush(stdin);
      printf("Ingrese el valor de y del primer punto\n");
      scanf("%f", &y1sum);
      fflush(stdin);
      printf("Ingrese el valor de x del segundo punto\n");
      scanf("%f", &x2sum);
      fflush(stdin);
      printf("Ingrese el valor de y del segundo punto\n");
      scanf("%f", &y2sum);
      fflush(stdin);
      printf("Punto 1 involucrado: (%.2f, %.2f) \n", x1sum, y1sum);
      printf("Punto 2 involucrado: (%.2f, %.2f) \n", x2sum, y2sum);
      sumax=sumaxs(x1sum, x2sum);
      sumay=sumays(y1sum, y2sum);
      printf("La suma de los puntos escritos es: \n");
      printf("(%.2f", sumax);
      printf(",%.2f)\n", sumay);

      break;

      case 5:
      printf("Resta de puntos\n");
      printf("Ingrese el valor de x del primer punto\n");
      scanf("%f", &x1res);
      fflush(stdin);
      printf("Ingrese el valor de y del primer punto\n");
      scanf("%f", &y1res);
      fflush(stdin);
      printf("Ingrese el valor de x del segundo punto\n");
      scanf("%f", &x2res);
      fflush(stdin);
      printf("Ingrese el valor de y del segundo punto\n");
      scanf("%f", &y2res);
      fflush(stdin);
      printf("Punto 1 involucrado: (%.2f, %.2f) \n", x1res, y1res);
      printf("Punto 2 involucrado: (%.2f, %.2f) \n", x2res, y2res);
      restax=restaxs(x1res, x2res);
      restay=restays(y1res, y2res);
      printf("La resta de los puntos escritos es: \n");
      printf("(%.2f", restax);
      printf(",%.2f)\n", restay);
      break;

      case 6:
      printf("Multiplicacion de puntos\n");
      printf("Ingrese el valor de x del primer punto\n");
      scanf("%f", &x1mul);
      fflush(stdin);
      printf("Ingrese el valor de y del primer punto\n");
      scanf("%f", &y1mul);
      fflush(stdin);
      printf("Ingrese el valor de x del segundo punto\n");
      scanf("%f", &x2mul);
      fflush(stdin);
      printf("Ingrese el valor de y del segundo punto\n");
      scanf("%f", &y2mul);
      fflush(stdin);
      printf("Punto 1 involucrado: (%.2f, %.2f) \n", x1mul, y1mul);
      printf("Punto 2 involucrado: (%.2f, %.2f) \n", x2mul, y2mul);
      multx=multxs(x1mul, x2mul);
      multy=multys(y1mul, y2mul);
      printf("La multiplicacion de los puntos escritos es: \n");
      printf("(%.2f , %.2f)\n", multx, multy);
      break;

      case 7:
      printf("Division de puntos\n");
      printf("Ingrese el valor de x del primer punto\n");
      scanf("%f", &x1div);
      fflush(stdin);
      printf("Ingrese el valor de y del primer punto\n");
      scanf("%f", &y1div);
      fflush(stdin);
      printf("Ingrese el valor de x del segundo punto\n");
      scanf("%f", &x2div);
      fflush(stdin);
      printf("Ingrese el valor de y del segundo punto\n");
      scanf("%f", &y2div);
      fflush(stdin);
      printf("Punto 1 involucrado: (%.2f, %.2f) \n", x1div, y1div);
      printf("Punto 2 involucrado: (%.2f, %.2f) \n", x2div, y2div);
      printf("La division de los puntos escritos es: \n");
      dividx=dividxs(x1div, x2div);
      dividy=dividxs(y1div, y2div);
      printf("(%.2f , %.2f)\n", dividx, dividy);
      break;

      case 8:
      printf("Distancia entre puntos \n");
      do {
        printf("Por favor elija una de las siguientes opciones: \n");
        printf("%cDesea agregar una distancia mas? (0=no, 1=si)\n", sint);
        scanf("%d", &s);
        switch (s) {
          case 1:
          printf("%cCuantas distancias desea agregar?\n",sint);
          scanf("%d",&i);
          for (int c=1;c<=i;c++) {
            //distanciaxs[c].dista=c;
            printf("Por favor ingrese la coordenada X del primer punto: \n");
            scanf("%f", &xpt1);
            fflush(stdin);
            printf("Por favor ingrese la coordenada Y del primer punto: \n");
            scanf("%f", &ypt1);
            fflush(stdin);
            printf("Por favor ingrese la coordenada X el segundo punto: \n");
            scanf("%f", &xpt2);
            fflush(stdin);
            printf("Por favor ingrese la coordenada Y el segundo punto: \n");
            scanf("%f", &ypt2);

            distanciaxs[c].dista=sqrt(pow(xpt2-xpt1,2)+pow(ypt2-ypt1,2));
            var=distanciaxs[c].dista;
            printf("Distancia %d:  %.2f\n", c, var);
          }

          fichdists=fopen("resultadosDeDistancias.txt", "w+");
          if(fichdists==NULL){
            printf("Error de apertura de archivo");
          }
          for(int z=1;z<=i;z++){
            fprintf(fichdists, "%s", "Distancia ");
            fprintf(fichdists, "%d %c", z, '\n');
            fprintf(fichdists, "%.2f %c", distanciaxs[z].dista, '\n');
          }

          fclose(fichdists);
          free(distanciaxs);
          break;
        }
      }while(s!=0);
      case 9:
      printf("Distancia menor entre los puntos: \n");
      printf("Por el momento no se puede realizar esta funcion.\n");
      for (int c=0;c<=i;c++) {
        if(distanciaxs[c].dista<distanciaxs[c].dista){
          printf("%.2f", distanciaxs[c].dista);
        }
      }
      printf("Pero estas son las distancias que se crearon: \n");
      fichdists=fopen("resultadosDeDistancias.txt", "r");
      if(fichdists==NULL){
        printf("\nError de apertura del archivo. \n\n");
      }
      else{
        while ((leer=fgetc(fichdists))!=EOF){
          printf("%c", leer);
        }
      }
      break;

      case 10:
      fichpts=fopen("compendioDePuntos.txt", "r");
      if(fichpts==NULL){
        printf("\nError de apertura del archivo. \n\n");
      }
      else{
        while ((leer=fgetc(fichpts))!=EOF){
          printf("%c", leer);
        }
      }
      fclose(fichpts);
      break;
    }
  }while(opc!=11);
  return 0;
}


float dist(float x2, float x1, float y2, float y1){
  float distancia, xs, ys;
  xs=x2-x1;
  ys=y2-y1;
  distancia=sqrt(pow(xs,2)+pow(ys,2));
  return distancia;
}
float sumaxs(float x1, float x2){
  float z;
  z=x1+x2;
  return z;
}
float sumays(float y1, float y2){
  float f;
  f=y1+y2;
  return f;
}
float restaxs(float x1, float x2){
  float z;
  z=x1-x2;
  return z;
}
float restays(float y1, float y2){
  float f;
  f=y1-y2;
  return f;
}
float multxs(float x1, float x2){
  float z;
  z=x1*x2;
  return z;
}
float multys(float y1, float y2){
  float f;
  f=y1*y2;
  return f;
}
float dividxs(float x1, float x2){
  float z;
  z=x1/x2;
  return z;
}
float dividys(float y1, float y2){
  float f;
  f=y1/y2;
  return f;
}
