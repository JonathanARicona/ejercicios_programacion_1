#include <stdio.h>

//2_Leer dos valores numéricos enteros e informar su división.

int main()
{
    int entero , num ; 
    printf("Escriba un numero entero: ");

    scanf( "%d",&entero);

    printf("Escriba otro numero entero: ");

    scanf( "%d",&num);

    printf( "\t %d \t %d \n", entero, num );

    printf("\t" "la suma de %d ""y %d""   es igual a:   %f" ,entero ,num ,(entero+0.0) / num);
    
    return  0;
}