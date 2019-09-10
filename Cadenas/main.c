#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
       char nombre [15];                           //char palabra[10];             //  \0 para finalizar cadena
       char apellido [15] = "tukic";
       char apellidonombre[31];
       int largo;
       int largo2;
       char auxstring[1000];


       printf("ingrese el nombre: \n ");
       fflush(stdin);
       scanf("%[^\n]" , auxstring);

       while ( strlen(auxstring)>14)
       {
           printf("reingrese nombre:  ");
           fflush(stdin);
           scanf("%[^\n]" , auxstring);
       }
       strcpy (nombre, auxstring);

                                                              //  printf("\n el nombre es %s y el apellido es %s ", nombre , apellido);




       return 0;


       }







                                              //char otrapalabra[100]
                                           // int i;
                                                // int largo;
                                                  //int comp;
                                            // strcpy(palabra, otrapalabra);              //strcpy = PARA ASIGNARLE UNA CADENA AL VECTOR  - strcpy(palabra, "hola");


                                              // printf("ingrea una palabra: ");
                                           // fflush(stdin);
                                  //scanf("%[^\n]" , palabra);           // el scanf sin el andersar y sin el []. Solo la variable - SE UTILIZA GETS. (palabra)


    //strcat (palabra , otrapalabra);
   // strlpr(palabra);
                                            // el scanf tiene errores para mostrar cadenas
      // strcpy (palabra, otrapalabra);                                      // scanf("%[^\n]" , palabra); = SE LEE HASTA EL ENTER
                                                // 3 ALTERNATIVAS gets(palabra), fgets y scanf("%[^\n]" , palabra)
    //printf("%s",palabra);
   //comp = stricmp(palabra,otrapalabra);        // strupr = MAYUSCULA // strlwr = MINUSCULA
   //printf("\n comparar: %d ", comp);           // strcmp = SI LA FUNCION DEVUELVE 0 ES QUE SON IGUALES LOS ARRAYS

                                                 // stricmp = IGNORA LA MAYUSCULA Y MINUSCULA

                             // largo = strlen(palabra);
                                  //printf("el largo es: %d " , largo);               //strlen = CUENTA LOS CARACTERES Y SIRVE PARA AJUSTAR PALABRAS




                                                       //siempre pensar con un caracter de mas para agregar el \0




