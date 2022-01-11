#include<stdio.h>
int main(){
  unsigned long int  numero, factorial=1, x;
  printf("Ingrese un numero positivo entero para calcular su factorial: \n");
  scanf("%ld", &numero);

  for(x=numero;x>=1;x--){
    factorial=factorial*x;
  }

  printf("El factorial del numero ingresado es: \n%ld\n", factorial);

  return 0;

}
