#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VectorDeNumeros[10] = { 1,2,3,4,5,-6,-7,-8,-9,-10}; //[10]
    int i;
    int ContadorNeg = 0;
    int ContadorPos = 0;
    int AcumuladorPos = 0;
    float promedio;
    int flag = 0;
    int maximo;
    int minimo;


    printf(" \n Mostrando el Vector");                 //  \n

    for (i=0; i<10;i++)
    {
        printf("\n %d" , VectorDeNumeros[i]);
    }

    printf("\n MOSTRANDO LOS NEGATIVOS");

    for (i=0; i<10;i++)
    {
        if (VectorDeNumeros[i]<0)
        {
            printf("\n %d" , VectorDeNumeros[i] );
            ContadorNeg++;
        }
    }

    printf(" \n MOSTRANDO LOS POSITIVOS");

    for (i=0; i<10;i++)
    {
        if (VectorDeNumeros[i]>0)
        {
            printf("\n %d" , VectorDeNumeros[i]);
            AcumuladorPos = AcumuladorPos + VectorDeNumeros[i];
            ContadorPos++;
        }
    }
    printf("\n  MAXIMOS Y MINIMOS ");

    for (i=0;i<10;i++)
    {
        if (VectorDeNumeros[i]>minimo || flag == 0)
        {
            maximo = VectorDeNumeros[i];
        }
        else if (VectorDeNumeros[i]<minimo || flag == 0 )
        {
            minimo = VectorDeNumeros[i];
            flag = 1;
        }
    }
     promedio = AcumuladorPos/ContadorPos;


    printf("MOSTRANDO RESULTADOS DE TODO EL CODIGO \n\n\n\n ");

    printf("\n la cantidad de positivos  %d ", ContadorPos);
    printf("\n Acumulador de positivos: %d  " , AcumuladorPos);
    printf("\n El promedio de positivos %f " , promedio);
    printf("\n Cantidad de negativos %d", ContadorNeg);
    printf("\n Numero maximo: %d ", maximo);
    printf("\n Numero minimo %d" , minimo);

    return 0;





}
