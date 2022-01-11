#include<stdio.h>
int main(){
  //definimos e inicializamos los tipos de datos que vamos a usar
  unsigned char frase[200];
  int a1=0, e1=0, i1=0, o1=0, u1=0, mayus=0, acentos=0, espacios=0, palabras=0, numcaracteres=0;
  char acentoA=181, acentoE=144, acentoI=214, acentoO=224, acentoU=233, acentoa=160, acentoe=130, acentoi=161, acentoo=162, acentou=163, ene=164, eneMayus=165;

  //Petición de frase o texto al usuario
  printf("Bienvenido\n");
  printf("Ingrese una frase o texto menor a 200 caracteres\n" );
  scanf("%[^\n]",frase); //usando máscara de entrada de cadena de caracteres que permite leer espacios
  /*usamos una estructura iterativa for, para que nos permite avanzar en las posiciones de numcaracteres
  y vayamos analizandolos*/
  for (int caracter=0;frase[caracter]!='\0';caracter++) {
    char posicion=frase[caracter];
    /*Establecemos las sentencias que se cumplirán si en cierta posicion se encuentra determinada letra,
    para poder llegar a las salidas esperadas*/

    /*
    if numero>=65 y numero <=90, entonces es mayúscula
    En práctica de operaciones con números:
    */

    //GDB está basado en linux, por eso pudo haber salidas diferentes

    if(posicion=='a'){
      a1=a1+1;
    }
    if(posicion=='e'){
      e1=e1+1;
    }
    if(posicion=='i'){
      i1=i1+1;
    }
    if(posicion=='o'){
      o1=o1+1;
    }
    if(posicion=='u'){
      u1=u1+1;
    }
    if(posicion=='A'){
      mayus=mayus+1;
      a1=a1+1;
    }
    if (posicion=='B'){
      mayus=mayus+1;
    }
    if (posicion=='C'){
      mayus=mayus+1;
    }
    if (posicion=='D'){
      mayus=mayus+1;
    }
    if (posicion=='E'){
      mayus=mayus+1;
      e1=e1+1;
    }
    if (posicion=='F'){
      mayus=mayus+1;
    }
    if (posicion=='G'){
      mayus=mayus+1;
    }
    if (posicion=='H'){
      mayus=mayus+1;
    }
    if (posicion=='I'){
      mayus=mayus+1;
      i1=i1+1;
    }
    if (posicion=='J'){
      mayus=mayus+1;
    }
    if (posicion=='K'){
      mayus=mayus+1;
    }
    if (posicion=='L'){
      mayus=mayus+1;
    }
    if (posicion=='M'){
      mayus=mayus+1;
    }
    if (posicion=='N'){
      mayus=mayus+1;
    }
    if (posicion==eneMayus){
      mayus=mayus+1;
    }
    if (posicion=='O'){
      mayus=mayus+1;
      o1=o1+1;
    }
    if (posicion=='P'){
      mayus=mayus+1;
    }
    if (posicion=='Q'){
      mayus=mayus+1;
    }
    if (posicion=='R'){
      mayus=mayus+1;
    }
    if (posicion=='S'){
      mayus=mayus+1;
    }
    if (posicion=='T'){
      mayus=mayus+1;
    }
    if (posicion=='U'){
      mayus=mayus+1;
      u1=u1+1;
    }
    if (posicion=='V'){
      mayus=mayus+1;
    }
    if (posicion=='W'){
      mayus=mayus+1;
    }
    if (posicion=='X'){
      mayus=mayus+1;
    }
    if (posicion=='Y'){
      mayus=mayus+1;
    }
    if (posicion=='Z'){
      mayus=mayus+1;
    }
    if(posicion==acentoA){
      acentos=acentos+1;
      mayus=mayus+1;
      a1=a1+1;
    }
    if (posicion==acentoE){
      acentos=acentos+1;
      mayus=mayus+1;
      e1=e1+1;
    }
    if (posicion==acentoI){
      acentos=acentos+1;
      mayus=mayus+1;
      i1=i1+1;
    }
    if (posicion==acentoO){
      acentos=acentos+1;
      mayus=mayus+1;
      o1=o1+1;
    }
    if (posicion==acentoU){
      acentos=acentos+1;
      mayus=mayus+1;
      u1=u1+1;
    }
    if (posicion==acentoa){
      acentos=acentos+1;
      a1=a1+1;
    }
    if (posicion==acentoe){
      acentos=acentos+1;
      e1=e1+1;
    }
    if (posicion==acentoi){
      acentos=acentos+1;
      i1=i1+1;
    }
    if (posicion==acentoo){
      acentos=acentos+1;
      o1=o1+1;
    }
    if (posicion==acentou){
      acentos=acentos+1;
      u1=u1+1;
    }
    if(posicion==' '){
      espacios=espacios+1;
    }
    palabras=espacios+1;

    if(posicion=posicion+1){
      numcaracteres=numcaracteres+1;
    }

  }

  /*ponemos las salidas esperadas fuera del for, para que no aparezcan la salida de cada
  análisis que se va haciendo*/
  printf("La frase introducida es: %s\n", frase);
  printf("La cantidad de vocales a es: %d\n", a1);
  printf("La cantidad de vocales e es: %d\n", e1);
  printf("La cantidad de vocales i es: %d\n", i1);
  printf("La cantidad de vocales o es: %d\n", o1);
  printf("La cantidad de vocales u es: %d\n", u1);
  printf("La cantidad de letras may%c", acentou);
  printf("sculas en la frase es: %d\n", mayus);
  printf("La cantidad de acentos en la frase es: %d\n", acentos);
  printf("La cantidad de palabras encontradas en la frase es: %d\n", palabras);
  printf("El tama%c", ene);
  printf("o en caracteres de la frase es: %d\n", numcaracteres);

  return 0;
}
