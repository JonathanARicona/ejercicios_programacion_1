#include <stdio.h>

#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
 
int main()
{
    printf("  ** RELOJ V.3 **");
    Sleep(1000);
    int j;
    int hora=0, minuto=0, segundo=1;
    printf("\n\n  Hora:     00:00:00\n");
    Sleep(1000);
    system("cls");
    for(j=0;j<1;segundo++)
    {
        if(segundo==60)
        {
            segundo=0;
            minuto++;
        }
        if(minuto==60)
        {
            minuto=0;
            hora++;
        }
        if(hora==24)
        {
            hora=0;
        }
 
        if(segundo<10 && minuto<10 && hora<10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     0%d:0%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo<10 && minuto<10 && hora>=10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     %d:0%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo<10 && minuto>=10 && hora<10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     0%d:%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo>=10 && minuto<10 && hora<10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     0%d:0%d:%d\n", hora, minuto, segundo);
        }
        else if(segundo>=10 && minuto>=10 && hora<10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     0%d:%d:%d\n", hora, minuto, segundo);
 
        }
        else if(segundo>=10 && minuto<10 && hora>=10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     0%d:%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo<10 && minuto>=10 && hora>=10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     %d:%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo>=10 && minuto>=10 && hora>=10)
        {
            printf("  ** RELOJ V.3 **\n\n  Hora:     %d:%d:%d\n", hora, minuto, segundo);
        }
        Sleep(1000);
        system("cls");
    }
    return 0;
}