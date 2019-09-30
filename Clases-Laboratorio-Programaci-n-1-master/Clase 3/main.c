#include <stdio.h>
#include <stdlib.h>



int sumarNumeros (int  , int );

int main ()

{
    int numero1;
    printf("ingrese el primer numero");
    fflush(stdin);
    scanf( "%d  " , &numero1);
    int numero2;
    printf("ingrese el segundo numero");
    fflush(stdin);
    scanf("%d " , &numero2);
    int total;

    total = sumarNumeros( numero1 , numero2);
    printf("la suma es %d " , total);

    return 0;


  }
  int sumarNumeros(int a, int b)

  {
      int resultado;
      resultado = a+b;

      return resultado;
  }
  // no hace falta usar ; en la segunda vez que lo declaras, por eso no se usa "main".













