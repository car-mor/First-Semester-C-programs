#include <stdio.h>
#include <math.h>
//prototipo de la funcion distancia
float distancia(float x1, float y1, float x2,float y2);
//funcion principal
int main (){
  float dist, a1, b1, a2, b2;
  printf("Bienvenido al programa para calcular la distancia entre dos puntos: \n");
  printf("Ingrese el valor x del punto 1: \n");
  scanf("%f", &a1);
  printf("Ingrese el valor y del punto 1: \n");
  scanf("%f", &b1);
  printf("Ingrese el valor x del punto 2: \n");
  scanf("%f", &a2);
  printf("Ingrese el valor y del punto 2: \n");
  scanf("%f", &b2);
  dist=distancia(a1, b1, a2, b2);//guardamos a la funcion distancia en la variable dist con los parámetros recibidos
  printf("Las coordenadas del primer punto son: (%.2f,%.2f) \n", a1, b1);
  printf("Las coordenadas del segundo punto son: (%.2f,%.2f) \n", a2, b2);
  printf("La distancia entre los dos puntos es: %.2f", dist); //implementamos la funcion distancia
  return 0;
}

//funcion de distancia definida
float distancia(float x1, float y1, float x2, float y2){
  double dis;
  dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));//sqrt(función predefinida en header <math.h> para la raíz cuadrada)
  //pow(función del header math, para la potencia)
  return dis;
}
