#include <stdio.h>

// 5 . un programa que le permita al usuario ingresar un conjunto de 10
// valores enteros. Luego se debe imprimir el conjunto que el usuario
// ingresó, primero en el orden original y luego, en orden inverso.

int main()
{
     // int i;
     // float numeros[10];
     // printf("\n Escriba  diez numeros:\n");
     // for (i=0; i<10; i++)
     //      scanf(" %g", &numeros[i]);
     //      printf("\n Los numeros, en orden inverso\n");
     //      printf(" al que fueron introducidos, son: ");
     //      for (i=9; i>=0; i--)
     //           printf(" %g", numeros[i]);
     // getchar();
     // getchar();
     int i;
     float numeros[10];
     printf("\n Escriba diez numeros:\n");
     for (i = 0; i < 10; i++)
         scanf("%g",&numeros[i]);
         printf("\n Los numeros, en orden inverso\n");
         printf(" al que fueron introducidos, son: ");
         for ( i = 9; i >= 0; i--)
              printf("%g",numeros[i]);
     
     getchar();
     getchar();
     
     
} 
  


