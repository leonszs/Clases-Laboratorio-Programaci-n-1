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

int darDeBaja(eAlumno listaDeAlumnos[],int tam )
{

   int legajo;
   int i;
   char respuesta;

   int quePaso = -1;

   mostrarListadoAlumnos(listaDeAlumnos,  tam);

   printf("ingrese el legajo a eliminar:  \n ");
   scanf("%d",&legajo);

   for (i=0;i<tam;i++)
   {
       if (listaDeAlumnos[i].legajo == legajo && listaDeAlumnos[i].estado==OCUPADO)
       {
           mostrarAlumno(listaDeAlumnos[i]);
           printf("esta seguro de eliminar este alumno???");
           respuesta = getche();
           if (respuesta=='s')
           {
              listaDeAlumnos[i].estado=LIBRE;
              quePaso = 1;


           }
           else
           {
               quePaso=0;
           }
       }


   }





}

int buscarAlumnoPorLegajo(eAlumno*listaDeAlumnos,int cant, int legajo)
{
   int retorno = -1;
   int i;

   if (listaDeAlumnos!=NULL && cant>0)
   {


       for (i=0;i<cant;i++)
       {

           if (listaDeAlumnos[i].legajo ==legajo && listaDeAlumnos[i].estado==OCUPADO )
           {
            retorno=i;
            break;
           }

       }

   }
    return retorno;


}


int modificarAlumno(eAlumno listaDeAlumnos[], int cant , int legajo)

{
    int index;
    int i;

    int quePaso = -1;
    char respuesta;
    eAlumno aux;

    index = buscarAlumnoPorLegajo(listaDeAlumnos,cant,legajo);

    if (index!=-1)
    {
        aux = listaDeAlumnos[index];
         mostrarAlumno(aux);
         printf("ingrese el nuevo nombre del alumno:  ");
         fflush(stdin);
         gets (aux.nombre);
         printf("esta seguro que desea modificar el Alumno;    ");
         respuesta = getche();

         if (respuesta == 's')
         {
             listaDeAlumnos[index]=aux;
             quePaso=1;


         }
         else
         {
             quePaso=0;
         }
    }



}
