#include "sillas.h"

 void ingresoDeSillas(int sillas[], int C)
 {
     int i;

     for (i=0;i<C;i++)
     {
         printf("ingrese la silla del alumno");
         scanf("%d",&sillas[i]);
     }
 }


 void  hardcodesillas (int sillas[],int C)
 {
   int i;
   int hardcode [5] = {20,30,40,50,60};

   for (i=0;i<C;i++)
   {
       sillas[i] = hardcode [i];
   }
 }

 void ingresoDeEdades(int edades[], int C)
 {
      int i;

     for(i = 0; i < C; i++){

        printf("Ingrese la edad del alumno.");

        scanf("%d", &edades[i]);

    }
 }
 void harcodEdad(int edad[], int C){

int i;
int hardcode[5] = {15, 17, 19, 21, 23};

    for(i = 0; i < C; i++){

        edad[i] = hardcode[i];



    }

}
void mostrartodo (int edades[], int sillas[], int C){


int i;

    for(i = 0; i < C; i++){

        printf("Silla: %d     Legajo: %d    Edad: %d\n", i+1, sillas[i], edades[i]);



    }

}




