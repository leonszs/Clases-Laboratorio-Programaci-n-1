#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr);
void employee_delete();

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

int compararPorLegajo(void* e1 , void* e2);
{   float sueldo1;
    float sueldo2;
    int comparar;

    Employee* empelado1 = (Employee*)e1;

    Employee* empleado2 = (Employee*)e2;

    if (employee_getId(empleado1,&id1) > employee_getId(empleado2,&id2))
    {

        comparar = 1;

    }
    else
    {
       if (employee_getId(empleado1,&id1) == employee_getId(empleado2,&id2))
       {
           comparar = 0;
       }
    }
    return comparar;
}
#endif // employee_H_INCLUDED
