#include <stdio.h>
#include <stdlib.h>
#include "sillas.h"
#define C 5
int main()
{                                        //  \n

    int arraysillas[C];
    int arrayedad[C];
    int edadYlegajo;

    printf("legajo y silla asignada:  \n ");
    printf("--------------------\n");

    hardcodesillas(arraysillas,C);

    printf("-----------------\n ");

    harcodEdad (arrayedad , C);

    mostrartodo (arraysillas, arrayedad, C);




    return 0;
}
