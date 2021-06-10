#include <stdio.h>

// Dado un valor numérico entero, informar si es par o impar.

int main(){
    int iNum;

    printf("Escribe un numero entero:");

    scanf("%d",&iNum);

    if  (iNum % 2 == 0){
        printf("El numero escrito es PAR");
    }
    else {
        printf("El numero escrito es IMPAR");
    }
    return 0;
}