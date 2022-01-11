#include<stdio.h>
int factorial(int);
int main(){
  int a, x, b;
  printf("Ingrese un numero entero positivo mayor a cero para su factorial\n" );
  scanf("%d",&a);
  printf("El factorial de %d es : %d\n", a, factorial(a) );
  return 0;
}
int factorial(int numero){
  if (numero==1)
  return 1;
  else
  return (numero*factorial(numero-1));
}
