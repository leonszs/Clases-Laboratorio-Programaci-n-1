#include <stdio.h>
#include <stdlib.h>




 int factorial (int);



int main()
{
   int numero = 5;

   int resultado;
   resultado = factorial (numero);
   printf("el factorial es: %d" , resultado);


     return 0;
     int factorial(int numero)
     {
         int resultado;

         if (numero==0)
         {
             resultado = 1;
         }
         else
         {
             resultado = numero*factorial(numero-1);
         }
         return resultado;
     }










}
//int i;



  // for (i=numero; i>=i;i--)
   //{
     // resultado = resultado*i;
   //}
   //printf("%d " , resultado);
