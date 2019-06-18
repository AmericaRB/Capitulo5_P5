#include <stdio.h>

int multiplicacion(int a, int b);

int main(){
  int a, b, r;
  printf ("Ingrese un numero entero positivo:");
   scanf ("%d" , &a) ;
  printf ("Ingrese el numero entero positivo que desea multiplicar al primero:");
   scanf ("%d", &b);
    r = multiplicacion(a, b);
    printf("La multiplicación de %d por %d es %d\n", a, b, r);
    return 0;
           }

int multiplicacion(int a, int b){
    if (a < b){
        return multiplicacion(b, a);
              }
    else if (b!=0){
        return (a + multiplicacion(a, b - 1));
                  }
    else{
        return 0;
        }
                                }

