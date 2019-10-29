#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    il_add (listaempleads,e1);
il_add(listaempleads,e2);
il_add (listaempleads,e3);
il_add (listaempleads,e4);

employe*aux
agreguè 3 empleados.


mostrar elementos:
int = x;
int len;
len = il_len (listaempleads);    para saber cuantos hay
for (x=0; x<len;i++)
{

aux = (employe*) il_get(listaempleads,x);                   ()casteo //


}

il_set  (listaempleads,2,e4)              agrega un elemento sobre otro




    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);
    return 0;
}
