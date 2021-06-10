#include <stdio.h>
// #include <conio.h>
// #include <math.h>

//1_Leer dos valores enteros e informar su suma.

int main()
{
    int entero , num ; 
    printf("Escriba un numero entero: ");

    scanf( "%d",&entero);

    printf("Escriba otro numero entero: ");

    scanf( "%d",&num);

    printf( "\t %d \t %d \n", entero, num );

    printf("\t" "la suma de    %d   ""y    %d""   es igual a:   %d   " ,entero ,num ,entero + num);

    return  0;
}
