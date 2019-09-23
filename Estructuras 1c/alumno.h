#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre [50];
    int estado;
    float promedio;
}eAlumno;

eAlumno cargarAlumno (void);
void mostrarAlumno(eAlumno);
int buscarLibre (eAlumno*,int);
void cargarListadoAlumnos(eAlumno[],int );
void mostrarListadoAlumnos(eAlumno[], int);
void ordenarAlumnos(eAlumno[],int);
void hardCodearAlumnos(eAlumno[],int);
void darDeBaja (eAlumno listaDeNombre[],int);
