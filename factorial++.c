#include<stdio.h>
int main(){
  int numero, factorial=1, x;
  printf("Ingrese un numero positivo entero para calcular su factorial: ");
  scanf("\n%ld", &numero);

  for(x=1;x<=numero;x++){
    factorial= factorial*x;
  }

  printf("El factorial del numero ingresado es: %ld", factorial);

  return 0;

}
