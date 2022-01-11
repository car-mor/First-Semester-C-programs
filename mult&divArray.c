#include<stdio.h> //incluimos librerías a ocupar
#include<stdlib.h>
#include<time.h>
int main(){ //función principal
//Definimos varibales de tipo entero, caracter y flotante
  int a, arr, arral, arral2, y, arral3, z;
  char forma;
  float b, c;
  printf("Escriba la letra 'm', para llenar el arreglo de forma manual, o 'p' de forma pseudo-aleatoria: ");
  scanf("%c",&forma); //%c porque ahora va a ser de tipo caracter
    switch (forma) { //usamos reservada switch para elegir el llenado de arreglos

      case 'm': printf("Eligio la forma manual \n"); //si el usuario escribe la letra m, hará lo siguiente:
                printf("\n");//salto de línea
                int a=0;
                float arr[15]; //inicializamos el valor de a en 0
                while (a<15){  //usamos estructura iterativa while para que haga lo siguiente mientras a<15
                printf("Ingresa el valor %d de 15 del arreglo: ",a+1);
                scanf("%f",&arr[a]); //lee el valor del respectivo arreglo que elija el usuario
                a++; //a++=a=a+1
          }
                printf("\n");//salto de línea
                a=0;
                while (a<15){
                printf("El valor %d del arreglo es: %.2f \n",a+1,arr[a]);
                a++;
          }
                printf("\n");//salto de línea
                a=0;
                while (a<15){
                printf("El valor %d del arreglo multiplicado por 2 es: %.2f\n",a+1,arr[a]*2);
                a++;
          }
                printf("\n");//salto de línea
                a=0;
                while (a<15){
                b=(arr[a]/3.0);//obligamos a que aunque arr[a] esté definida como entero, la variable b salga como flotante
                printf("El valor %d del arreglo dividido entre 3 es: %.2f\n",a+1,b);/*usamos máscara de salida flotante para que
                el valor salga en decimal*/
                a++;
          }
          break;

        case 'p': printf("Eligio la forma pseudo-aleatoria \n"); //si el usuario escribe la letra p, hará el llenado de arreglo aleatoriamente:
                int arral[15], x; //identificador arral ( por arregloaleatorio)
                srand(time(NULL)); //srand(time(NULL)) es para crear un generador de números aleatorios y después sea llamado por rand
                for (x=0;x<15;x++){ /*inicializa el valor de x en 0, x<15 dice que pase a la estructura for, si x es menor que 15, y x++ es el contador
                  para los valores de x*/
                arral[x]=1+rand()%(15+1-1); /*%=resto (lo que va a su lado derecho es el valor máximo)
                 rand=genera números pseudo-aleatorios*/
                //los valores a la izq de rand es el mínimo o límite inferior
                //variable= limite_inferior+rand()%(limite_superior+1-limite_inferior)
                printf("El valor %d del arreglo es: %d \n",x+1, arral[x]);
                }

                printf("\n");//salto de línea
                int arral2[15], y; //identificador arral2 ( por arregloaleatorio2)
                srand(time(NULL));
                for (y=0;y<15;y++){
                arral2[y]=1+rand()%(15+1-1);
                printf("El valor %d del arreglo multiplicado por 2 es: %d\n",y+1,arral2[y]*2);
                }

                printf("\n");//salto de línea
                int arral3[15], z; //identificador arral ( por arregloaleatorio)
                srand(time(NULL));
                for (z=0;z<15;z++){
                arral3[z]=1+rand()%(15+1-1);
                c=(arral3[z]/3.0); //obligamos a que aunque arral3[z] esté definido como entero, la variable c salga como flotante
                printf("El valor %d del arreglo dividido entre 3 es: %.2f\n",z+1,c); /*usamos máscara de salida flotante para que
                el valor salga en decimal*/
                }
          break;

          default: printf("No eligió una de las opciones disponibles"); /*si el usuario no escribe una m (llenado manual) o p (para llenado aleatorio)
          le indicará que no eligio una opción de las que le pedimos*/
        }
    return 0;
}
