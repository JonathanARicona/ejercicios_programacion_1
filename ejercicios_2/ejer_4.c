#include <stdio.h>
#include <stdbool.h>
// 4) Crea un programa que pida al usuario su código de usuario (un número entero) y su 
// contraseña numérica (otro número entero), y no le permita seguir hasta que introduzca
//  como código 1024 y como contraseña 4567.

main(){
    
    int iUser = 1024, iPass = 4567;
    int iUsuario, iContra;
    bool bCorrecto = false;

    do
    {
        printf("\nIngrese su nombre de usuario:  ");
        scanf("%i",&iUsuario);

        printf("\nIngrese su contrasenia:  ");
        scanf("%i",&iContra);
        if (iUsuario == iUser && iContra == iPass)
        {
            printf("\n\t\tIniciando Sesion...\n\n");
            bCorrecto = 1;
        }
        else
        {
            printf("\n\t\tUsuario o Contrasenia Incorrecto\n\n");
            bCorrecto = false;
        }
    } while (bCorrecto == 0);
    

}