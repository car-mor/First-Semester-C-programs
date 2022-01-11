#include <stdio.h>
#include <math.h>
//prototipo de la funcion = deben ser mismo numero de funciones definidas
float distancia(float x1, float x2,float y1, float y2);

int main (){
  float  x1, x2, y1, y2;
  printf("Ingresa el valor de x1: \n");
  scanf ("%f\n", &x1);
  printf ("Ingrese el valor de y1: \n");
  scanf ("%f\n", &y1);
  printf ("Ingrese el valor de x2:\n");
  scanf ("%f\n", &x2);
  printf ("Ingrese el valor de y2: \n");
  scanf ("%f\n", &y2);
    printf("El valor de la distancia entre los puntos es: %.2f\n", distancia(x1, x2, y1, y2));
    printf("Las coordenadas del punto 1 son: (%.2f,%.2f)\n", x1, y1);
    printf("Las coordenadas del punto 2 son: (%.2f,%.2f)\n", x2, y2);
  return 0;
}
float distancia (float x1, float x2, float y1, float y2){
  float potencias;
  potencias=pow(x2-x1, 2.0)+pow(y2-y1,2.0);
double dis = sqrt(potencias);
  return dis;
}
