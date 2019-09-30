#include <stdio.h>
#include <stdlib.h>
void CambiarPorValor (int unDato);
void CambiarPorReferencia(int* pDato); //para obtener una direccion, usar *
int DameUnEntero(char*mensaje, int max, int cantidad, int * pNumero0);




int main()
{
    int sePudo;
    int unNumero;
    unNumero = DameUnEntero("Ingresa tu edad  : ",100,2,&unNumero);



    if (sePudo == '1')
    {
        printf("no se pudo cargar");
    }
    else
    {
        printf("se pudo cargar");
    }
   // int numero;
   // numero =22;
    //CambiarPorValor(numero);
    //printf("\n numero=%d",numero);
    //CambiarPorReferencia(&numero);
    //printf(" \n numero = %d",numero);
    return 0;
}







   int DameUnEntero(char*mensaje, int max, int cantidad, int * pNumero)
{
    int aux;

    int contador = 0;
    printf("%s", mensaje);
    scanf("%d",&aux);
    if (contador == cantidad)
    {
        return 0;
    }

    while (aux>max)
    {
        printf("%s",mensaje);
        scanf("%d",&aux);
    }


    return 1;


}


void CambiarPorValor (int unDato) {


    unDato = 99;
    printf(" \n dato = %d",unDato);

    }
    void CambiarPorReferencia (int* pDato) {


    *pDato = 99;
    printf(" \n dato = %d",*pDato);

    }

