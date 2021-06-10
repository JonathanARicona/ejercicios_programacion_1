#include <stdio.h>

// 1) Crear un programa que permita convertir un importe en dolares a pesos.

main(){

   float iPesos ,iDolares ;
   float  iValorP;
   printf("\nEscriba la cantidad de dolares que desea transformar a pesos:");
   scanf("%f",&iDolares);
   
   iValorP = 92.97;
   iPesos = (iValorP * iDolares);

   //printf("%0.2f",(float)iPesos);
   
   printf("\n\nLa cantidad de %0.2f dolares es igual a: %0.2f pesos Arg",iDolares ,(float)iPesos );          
}

