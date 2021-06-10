#include <stdio.h>

// 1) Realizar un programa que lea desde el teclado el ancho, alto y profundidad de un
// prisma rectangular (cuerpo geométrico de 6 caras rectangulares, como una caja) e
// informe su volumen y área de la superficie formada por sus caras.

void cierre_de_programa();
main(){
    
    float fAncho = 0, fAlto = 0, fPdidad = 0;
    float fVolum = 0, fArea = 0;

    printf("\nIngrese el ancho del prisma rectangular :");
    scanf("%f", &fAncho);
    printf("\nIngrese el alto del prisma rectangular :");
    scanf("%f", &fAlto);
    printf("\nIngrese la profundidad del prisma rectangular :");
    scanf("%f", &fPdidad);

    fVolum = fAncho * fAlto * fPdidad;
    fArea = 2 * fAlto * (fAncho + fPdidad) + 2 * fAncho * fPdidad;

    printf("\nEl Volumen de su prisma rectangular es %.3f ", fVolum);
    printf("\n\nEl Area de su prisma rectangular es %.3f ", fArea);
    printf("\n\n");
}
