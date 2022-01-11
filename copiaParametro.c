//import
#include <stdio.h>

//prototipo de la función
int cubo(int); //retorno, nombre, y parámetro (tipo de la función

//funcion principal
int main(){
int a=0, res;
printf("Ingresa un valor entero para obtener su cubo\n");
scanf("%d", &a);
res=cubo(a);

 //implementación de la función
//res almacena el resultado de la función
printf("El valor de la variable a en la funcion main es: %d\n", a);
printf("El resultado del cubo de %d a es: %d\n",a, res); //en lugar de res igual podría ser cubo(a)
  return 0;
}
//otras funciones
//definición de la función
int cubo(int a){ //definición de la funcion
  int resultado; //una vez que se devuelve "resultado" deja de existir
  a=5;
  printf("El valor de la variable a en la funcion cubo es: %d\n", a);
  resultado=a*a*a;
  return resultado;
}
