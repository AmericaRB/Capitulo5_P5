#include <stdio.h>

long int fac(int n);

int main(){
    int n;

    printf("Ingrese un entero positivo para calcular su factorial: ");
     scanf("%d", &n);
    printf("\nEl factorial de %d es %ld\n", n, fac(n));
    return 0;
           }

 long int fac(int n){
    if (n >= 1)
        return n*fac(n-1);
    else
        return 1;
                    }
