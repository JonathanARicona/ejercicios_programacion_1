#include <stdio.h>
#include <stdbool.h>
// 4) Escribir un programa que para una fecha ingresada por un usuario (año, mes, día)
// determine:


// a) Si es una fecha válida.
// b) Si el año es bisiesto o no.
// c) La cantidad de días que faltan para fin de mes.
// Nota: un año es bisiesto si es un número divisible por 4, pero no si es divisible por 100, excepto
// que también sea divisible por 400.

// Tienen 31 días: Enero, marzo, mayo, julio, agosto, octubre y diciembre
// Tienen 30 días: Abril, junio, septiembre y noviembre.
// enero febrero marzo abril mayo junio julio agosto septiembre octubre noviembre diciembre
main(){
    
    int iAnio = 0 , iMes = 0, iDia = 0 ,   iFinDeMes = 0;
    int iMeses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool bBisiesto = false;
    printf("\nIngrese el a%co: ",164);
    scanf("\n%i", &iAnio);
    printf("\nIngrese el mes: ");
    scanf(" %i", &iMes);
    printf("\nIngrese el dia: ");
    scanf(" %i", &iDia);

    if (iAnio % 4 == 0){
        if (iAnio % 400 == 0 || iAnio % 100 != 0 ){
           bBisiesto = true;
        }
    }
    else{
        bBisiesto = false;
    }
    if (iMes > 12 && iMes < 1){
        printf("\nLa fecha es incorrecta");
    }
    else{
        if (bBisiesto == true){
           iMeses[1] = iMeses[1] + 1 ;
        }
        if (iMeses[iMes] < iDia){
           printf("\nLa fecha es incorrecta");
        }
        else{
            printf("\nLa fecha es correcta");
            for (int i = iDia; i < iMeses[iMes-1]; i++)
            {
                iFinDeMes = iFinDeMes + 1;
            }
            printf("\nLa cantidad de dias que faltan para fin de mes es : %i",iFinDeMes);
            if (bBisiesto == true)
            {
                printf("\nEl a%co es BisiesTo",164);
            }
            else{
                printf("\nEl a%co no es bisiesto",164);
            }
            
        }
        
    }
}