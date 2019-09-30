#include <stdio.h>
#include <stdlib.h>
#define T 3                 //VECTORES PARALELOS
#define  LEN 20

int main()
{
    int legajo [T];
    char nombre[T][LEN];
    int i;
    int j;
    int auxint;
    char auxstring [LEN];

    for (i=0; i < T ; i++)
    {
        printf("ingrese legajo:  ");
        scanf("%d" , &legajo[i]);

        printf("ingrese nombre:  ");   // carga de datos
        fflush(stdin);
        gets(nombre[i]);
    }
     for (i=0; i<T ; i++)
   {
       printf("%d \t %s \n " , legajo[i] ,nombre[i] );      //mostrar datos
   }




   for (i=0; i<T -1; i++)
   {
       for (j=i+1;j<T;i++)
       {

           if (legajo[i]>legajo[j] )                                  //BURBUJEO
           {
               auxint = legajo[i];
               legajo[i] = legajo[j];
               legajo [j] = auxint;

               strcpy (auxstring, nombre [i]);
               strcpy (nombre [i], nombre [j]);
               strcpy (nombre [j] , auxstring);
           }
       }
   }
    return 0;
}

//LEER CLASE ESTRUCTURA
