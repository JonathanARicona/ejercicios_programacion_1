#include <stdio.h>

// 5. un programa que le permita al usuario ingresar un conjunto de 10
// valores enteros. Luego se debe imprimir el conjunto que el usuario
// ingresó, primero en el orden original y luego, en orden inverso.

int main(){
    unsigned int iNumInver, iResto, iNum ;
    printf("Ingrese el numero de diez digitos :" );
    scanf("%d",&iNum);
    printf("\tEl orden original del numero escrito es :%d \n",iNum);
    iResto = 0;
    iNumInver = 0;
    while (iNum != 0){
    // iResto = iNum / 10;
    // printf("%i", iResto);
    iResto = (iNum % 10);
    //printf("%d",iResto);
    iNumInver = (iNumInver*10)+ iResto;
    iNum = (iNum / 10);
    
    }
    printf("\tEl orden inverso del numero escrito es  :%i \n ", iNumInver);

}   