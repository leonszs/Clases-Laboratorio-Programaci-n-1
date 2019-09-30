#include <stdio.h>
#include <stdlib.h>

void funcion(int*);


int main()
{
    int numero = 4;
    printf(" \n el numero antes de modificar es:   %d  \n", numero );
     funcion(&numero);
    printf("\nel numero despues  de modificar es: %d", numero );
     return 0;
   }
void funcion(int* numero)
{
   printf("ingrese un numero:  ");
   scanf("%d" , numero);      //se escribe numero en el scanf, sin el andersar y sin el *
                                             // *numero = 100;   // con el * se hace el recambio de numero

}
