#include <stdio.h>

// Se ingresa un valor numérico de 8 dígitos que representa una fecha
// con el siguiente formato: aaaammdd

// Se pide informar por separado el día, el mes y el año de la fecha
// ingresada.

int main(){
    long Fecha;
    printf("Escriba un numero de 8 digitos: ");
    scanf("%ld", &Fecha);
    
    long anio = (Fecha / 10000);
    long dia = (Fecha % 100);
    long mes = (((Fecha-(anio*10000))- mes)/100);//(((anio + mes)- Fecha)/100);
    printf("\t Digitos ingesados:  %ld \n",Fecha);
    printf("\t %ld / %d / %d \n",anio ,mes ,dia);
    printf("\t dia: %ld mes: %d anio: %d ",dia , mes ,anio);

    
}