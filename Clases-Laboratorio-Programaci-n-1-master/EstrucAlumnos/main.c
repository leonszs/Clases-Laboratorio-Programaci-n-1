#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estavacio;  //0 para no esta vacio  //1 para si esta vacio
}eAlumno;

void inicializaralumnos(eAlumno listadodealumnos[] , int tam);
void mostraralumnos(eAlumno listadodealumnos[], int tam);
void mostraralumno (eAlumno listadodealumnos[], int lugar);
int indicelibre (eAlumno listadodealumnos[],int tam );








int main()
{
    eAlumno listadodealumnos[5];

    inicializaralumnos(listadodealumnos, 5);
    mostraralumno(listadodealumnos, 5);


    return 0;


    }


    void inicializaralumnos(eAlumno listadodealumnos[], int tam)
    {
        int i;
        int legajoaux[5]={111,200,400,250,178};
        int notaaux[5]={10,7,7,5,4};
        char nombreaux [5] [50]={"pedro","leon","alejandro","maria","marta" };

        for (i=0; i<tam;i++)
        {
           strcpy(listadodealumnos[i].nombre,nombreaux[i]);
           listadodealumnos[i].nota=notaaux[i];
           listadodealumnos[i].legajo=legajoaux[i];
           listadodealumnos[i].estavacio
           =0;
        }
    }


   void mostraralumno(eAlumno listadodealumnos[], int lugar)
   {
       printf("%s \t \t %d \t\t %d  " , listadodealumnos[lugar].nombre,listadodealumnos[lugar].legajo,listadodealumnos[lugar].nota);
   }                                     //   \t

 void mostraralumnos(eAlumno listadodealumnos[], int tam)
 {
     int i;
     int hayalumnos=0;
     printf("nombre:  \t\t legajo \t\t nota:  \n");

     for (i=0; i<tam; i++)
     {
         if (listadodealumnos[i].estavacio == 0)
         {


            mostraralumno(listadodealumnos,i);
         hayalumnos=1;
         }
     }
     if (hayalumnos==0)
     {
         printf("no hay alumnos");

     }
 }

int indicelibre(eAlumno listadodealumnos[], int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        if (listadodealumnos[i].estavacio==1)
        {
            return i;
        }
    }
    return -1;
}















