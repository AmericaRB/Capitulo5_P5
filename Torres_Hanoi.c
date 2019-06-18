#include <stdio.h>

void th(int n, char c, char f, char a);

int main(){
    int n;

    printf("Ingrese el numero de discos:");
    scanf("%d", &n);
    printf("La secuencia de movimientos a realizar es :\n");
    th(n, 'A', 'C', 'B');
    return 0;

           }

void th(int n, char c, char f, char a){
    if (n == 1){
       printf("\nMueva el disco 1 de %c a %c\n", c, f);
        return;
                 }
    th(n - 1, c, a, f);
    printf("\nMueva el disco %d de %c a %c\n", n, c, f);
    th(n-1, a, f, c);
                                      }
