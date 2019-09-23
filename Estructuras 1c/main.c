#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define A 5

int main()
{
   eAlumno listadoAlumnos[A];
   int i;
   int opcion;
   for (i=0; i<A; i++)
   {
       listadoAlumnos[i].estado=LIBRE;

   }
    hardCodearAlumnos(listadoAlumnos,A);

    do
    {
       printf("1. cargar \n");
       printf("2. mostrar \n");
       printf("3. ordenar \n");
       printf("4. dar de baja \n");

       printf("7. salir \n");
       printf("elija una opcion:  ");
       scanf("%d", &opcion);

       switch (opcion)
       {
       case 1:
        cargarListadoAlumnos(listadoAlumnos,A);
        break;

       case 2:
        mostrarListadoAlumnos (listadoAlumnos,A);
        break;


       case 3: ordenarAlumnos (listadoAlumnos,A);
       break;


     case 4: darDeBaja (listadoAlumnos, A);
     break;



       }

    }  while (opcion!=7);
    return 0;

}
