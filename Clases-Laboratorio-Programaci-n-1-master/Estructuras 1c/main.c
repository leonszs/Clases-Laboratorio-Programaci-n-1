#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include <string.h>
#define A 5

int main()
{
   eAlumno listadoAlumnos[A];

   int respuesta;
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
       printf("5. modificar \n ");

       printf("7. salir \n");
       printf("elija una opcionn:  ");
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


       case 4:
       respuesta = darDeBaja (listadoAlumnos,A);
        switch(respuesta)
        {
        case 0:
            printf("\n el usario cancelo la baja");
            break;

        case 1:
            printf("\n la baja fue ejecutada! ");
            break;

        case -1:
            printf("\n  el dato no fue encontrado.");
            break;
        }

        break;

       case 5:
      respuesta = modificarAlumno(listadoAlumnos,A,300);
       switch(respuesta)
       {
       case 0:
        printf("accion cancelada!!   \n ");
        break;

       case 1:
        printf("alumno recientemente modificado \n ");
        break;

       case -1:
        printf("No se encontro el dato. \n ");
        break;
       }

       break;




       }

    }  while (opcion!=7);
    return 0;

}
