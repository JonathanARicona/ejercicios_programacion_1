#include <stdio.h>

// 2) Un cyber café necesita un programa para procesar la información relacionada con las
// computadoras que posee. Se necesita leer cantidad de computadoras, y precio por hora
// de uso. Luego ingresar la cantidad de horas de uso de cada computadora en el mes.
// se pide:
// a) calcular el monto total recaudado por el cyber en el mes.
// b) informar cual fue la computadora con menor cantidad de horas de uso y monto recaudado
// por la misma.

main(){

    int iPc  = 0;
    int iHoraPrecio = 0;
    int iMontoTotal = 0;
    int IPosic = 0;
    printf("\nIngrese la cantidad de computadoras del cyber cafe:");
    scanf("%i",&iPc);
    
    int iCantHors[iPc];
    printf("Ingrese el precio por hora del uso de los ordenadores:");
    scanf("%i",&iHoraPrecio);

    for (int i = 0; i < iPc; i++)
    {
        printf("Ingrese las horas de uso de la Computadara Nro %i :",i+1);
        scanf("%i", &iCantHors[i]);
        iMontoTotal = iMontoTotal + iCantHors[i];
    }
    
    int iPcMenor = iCantHors[0];
    for (int i = 0; i < iPc; i++)
    {
        if (iPcMenor >= iCantHors[i]){
             iPcMenor = iCantHors[i];
             IPosic = i + 1;
        }
    }
    iMontoTotal = iMontoTotal * iHoraPrecio;
    printf("\nEl monto total recaudado por el cyber en el mes fue de $%i", iMontoTotal);
    printf("\nLa computadora con menos horas de es la Nro %i y recaudo un monto de $%i ", IPosic, iPcMenor * iHoraPrecio);

}