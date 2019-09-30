#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
   int idLocalidad;
char localidad[30];
int codigoPostal;




}eLocalidad;



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
int darDeBaja (eAlumno [],int);
int modificarAlumno(eAlumno[], int, int);

int buscarAlumnoPorLegajo(eAlumno[], int, int);
int localidadMenorAlumnos (eAlumno [],int);


