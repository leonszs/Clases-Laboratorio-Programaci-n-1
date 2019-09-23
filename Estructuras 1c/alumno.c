#include "alumno.h"


int buscarLibre(eAlumno listaDeAlumnos[],int tam)
{
    int indice=-1;
    int i;

    for (i=0;i<tam;i++)
    {
        if (listaDeAlumnos[i].estado!=OCUPADO)
        {
            indice=i;
            break;
        }
    }
    return indice;
}


void hardCodearAlumnos(eAlumno listaDeAlumnos[], int tam)
{
    int i;
    int legajo[]={100,200,300};
    float promedio[]={6.66,8,2.8};
    char nombre[][40]={"leon","gabriel","sofia"};

    for (i=0;i<3;i++)
    {
        listaDeAlumnos[i].legajo=legajo[i];
        listaDeAlumnos[i].promedio=promedio[i];
        strcpy (listaDeAlumnos[i].nombre,nombre[i]);
        listaDeAlumnos[i].estado=OCUPADO;
    }
}

void mostrarListadoAlumnos(eAlumno listaDeAlumnos[], int tam)
{
    int i;

    for (i=0; i<tam;i++)
    {
        if (listaDeAlumnos[i].estado==OCUPADO)
        {
            mostrarAlumno(listaDeAlumnos[i]);
        }
    }

}
void cargarListadoAlumnos(eAlumno listaDeAlumnos[], int tam)
{

    int indice;
    indice = buscarLibre (listaDeAlumnos,tam);

    printf("indice: %d \n", indice);      // \n

    if (indice !=-1)
    {
        // hay lugar
        listaDeAlumnos[indice]=cargarAlumno();
    }
    else
    {
        printf("no hay espacio disponible");
    }
}

eAlumno cargarAlumno(void)
{
    eAlumno miAlumno;

    printf("ingrese legajo:  ");
    scanf("%d", &miAlumno.legajo);
    printf("ingrese nombre:   ");
    fflush(stdin);
    scanf("%[^\n]",miAlumno.nombre);
    printf("ingrese promedio: ");
    scanf("%f",&miAlumno.promedio);

    miAlumno.estado=OCUPADO;

    return miAlumno;
}

void mostrarAlumno(eAlumno miAlumno)
{
    printf("%4d %25s %8.f \n", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio);

}

void ordenarAlumnos(eAlumno listaDeAlumnos[],int tam )
{
    int i;
    int j;
    eAlumno auxAlumno;


    for (i=0; i<tam-1;i++)
    {
        for (j=i+1;j<tam;j++)
        {
            if (strcmp(listaDeAlumnos[i].nombre,listaDeAlumnos[j].nombre)>0)
            {
                auxAlumno = listaDeAlumnos[i];
                listaDeAlumnos[i]=listaDeAlumnos[j];
                listaDeAlumnos[i]=auxAlumno;
            }
            else
            {
                if (strcmp(listaDeAlumnos[i].nombre,listaDeAlumnos[j].nombre)==0)
                {
                    if (listaDeAlumnos[i].promedio>listaDeAlumnos[j].promedio)
                    {
                        auxAlumno=listaDeAlumnos[i];
                        listaDeAlumnos[i]=listaDeAlumnos[j];
                        listaDeAlumnos[j]=auxAlumno;
                    }
                }
            }
        }
    }
}

void darDeBaja(eAlumno listaDeNombre[],int tam )
{
    int legajoBaja;
    int i;
    int flag=0;

    printf("ingrese el legajo que quiera dar de baja");
    scanf("%d",&legajoBaja);

    for (i=0;i<tam;i++)
    {
        if (legajoBaja==listaDeNombre[i].legajo)
        {
            if (listaDeNombre[i].estado==OCUPADO)
            {
                listaDeNombre[i].estado=LIBRE;
                flag =1;
            }
        }
    }

    if (flag==0)
    {
        printf("el legajo solicitado no se encuentra");

    }
}
