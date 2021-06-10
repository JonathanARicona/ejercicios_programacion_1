#include <stdio.h>

// 3) realizar una función que reciba un caracter en minúscula como parámetro y devuelva
// convertido a mayúscula. Hacer la función inversa, que convierta de mayúscula a
// minúscula. Crear un programa que utilice ambas funciones.
int conversor_mayus_a_minus(int mayus);
int conversor_minus_a_mayus(int cMinus);

main(){

    int cMayus = 0;
    int cMinus = 0;

    printf("\nIngrese una letra MAYUSCULA: ");
    scanf("%c", &cMayus);
    printf("\nLa letra Mayuscula se convierte en : %c ",conversor_mayus_a_minus(cMayus));
    printf("\n");
    printf("\nIngrese una letra minuscula: ");
    scanf(" %c", &cMinus);
    printf("\nLa letra minuscula se convierte en : %c",conversor_minus_a_mayus(cMinus));
}
int conversor_mayus_a_minus(int cMayus){
    int iMayuscula = 0;
    if (cMayus == 165){
        iMayuscula = 164;
        return iMayuscula;
    }
    else{
    cMayus = cMayus + 32;
    iMayuscula = cMayus;
    return iMayuscula;
    }
}
int conversor_minus_a_mayus(int cMinus){
    int iMinuscula = 0;
    if (cMinus == 164){
       iMinuscula = 165;
       return iMinuscula;
    }
    else{
    cMinus = cMinus - 32;
    iMinuscula = cMinus;
    return iMinuscula;
    }
}
