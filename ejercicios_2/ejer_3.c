#include <stdio.h>

// 3) Se ingresan números por teclado mientras que la suma de los mismos sea menor o
// igual a 100. Se debe informar la cantidad de números ingresados.

int main()
{

    int iSuma = 0, iNume, iCantN = 0;

    while (100 > iSuma)
    {
        printf("\nIngrese un numero:");
        scanf("%d", &iNume);
        iSuma = iSuma + iNume;
        iCantN = iCantN + 1;
        iNume = 0;
        printf("\n%d", iSuma);
    }

    printf("\nLa cantidad de numeros ingresados es:  %i", iCantN);

    return 0;
}
