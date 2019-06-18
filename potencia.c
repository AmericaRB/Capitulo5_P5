#include <stdio.h>

long potencia(long b, int e);


int main(){
    long b,r;
    int e;

   printf("Ingrese la base:");
    scanf("%ld", &b);
   printf("Ingrese el exponente: ");
    scanf("%d", &e);

   r = potencia(b, e);

   printf("%ld elevado a la %d es: %ld \n", b, e, r);

    return 0;
          }


long potencia(long b, int e){
    if(e == 0){
        return 1;
              }
    else if(e > 0){
        return b*potencia(b, e-1);
                  }
    else{
        return 1/potencia(b, - e);
        }
                                }
