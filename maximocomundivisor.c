#include<stdio.h>

int mcd(int a, int b);

int main(){
  int a,b,resultado;

  printf("Introduce el primer numero: ");
   scanf("%d",&a);
  printf("Introduce el segundo numero: ");
   scanf("%d",&b);
   resultado=mcd(a,b);
  printf("El maximo comun divisor de %d y %d es: %d\n" , a, b, resultado);
    return 0;
          }

int mcd(int a, int b){

if (b != 0)
       return mcd(b, a%b);
    else
       return a;
                     }
