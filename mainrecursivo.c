#include<stdio.h>

int main(){
    static int cuenta = 1;
    printf("%d\n", cuenta++);
    if(cuenta == 25)
         return cuenta;
    else
         return main();
           }
