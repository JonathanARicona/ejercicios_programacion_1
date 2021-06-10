#include <stdio.h>

// 2) Elaborar un programa que permita ingresar el número de partidos de futbol ganados, 
// perdidos y empatados, por algún equipo en el torneo, se debe de mostrar en pantalla el
//  puntaje total del equipo, teniendo en cuenta que por cada partido ganado obtendrá 3 puntos,
//   empatado 1 punto y perdido 0 puntos.

main(){
   
   int iGanados,iPerdidos, iEmpatados, iClub; 

   printf("\nIngrese el numero de partidos ganados:");
   scanf("%i",&iGanados);
   iGanados = iGanados * 3;
   printf("\nIngrese el numero de partidos empatados:");
   scanf("%i",&iEmpatados); 
   iEmpatados = iEmpatados * 1;
   printf("\nIngrese el numero de partidos perdidos:");
   scanf("%i",&iPerdidos);
   iPerdidos = iPerdidos * 0;

   iClub = iGanados + iPerdidos + iEmpatados;

   printf("\n\nEl puntaje total de tu equipo es:%i Puntos",iClub); 
}