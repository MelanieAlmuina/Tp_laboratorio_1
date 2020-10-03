#define LIBRE 0
#define OCUPADO 1
#include <ctype.h>
#include "ArrayEmployees.h"
int initEmployees(eEmployee ListaEmpleados[],int tam)
{
    int i;
    int auxReturn;
    auxReturn=-1;

    for(i=0; i<tam; i++)
    {
        ListaEmpleados[i].isEmpty = 0;
        auxReturn=1;
    }
    return auxReturn;
}
void addEmployees(eEmployee ListaEmpleados[],int tam)
{
    int i;
    int id;
    id=0;

    for(i=0; i<tam; i++)
    {
        id++;
        if(ListaEmpleados[i].isEmpty==0)
        {
            id=ListaEmpleados[i].id;
            printf("Ingrese nombre del empleado:");
            fflush(stdin);
            gets(ListaEmpleados[i].name);
            printf("Ingrese apellido del empleado:");
            fflush(stdin);
            gets(ListaEmpleados[i].lastName);
            printf("Ingrese sueldo del empleado:");
            scanf("%f",&ListaEmpleados[i].salary);
            printf("Ingrese sector del empleado:");
            scanf("%d",&ListaEmpleados[i].sector);
            ListaEmpleados[i].isEmpty=1;
            system("cls");
            break;
        }
    }
}
void FindEmployeeByID(eEmployee ListaEmpleados[],int tam)
{
    int i;
    int id;
    int opciones;

    PrintEmployees(ListaEmpleados,tam);
    printf("Ingrese el ID del empleado que desea modificar:");
    scanf("%d",&id);

    for(i=0; i<tam; i++)
    {
        if(id==ListaEmpleados[i].id)
        {
            printf("Empleado: %s %s",ListaEmpleados[i].lastName,ListaEmpleados[i].name);
            switch(opciones)
            {
            case 1:
                printf("Reingrese NOMBRE:");
                fflush(stdin);
                gets(ListaEmpleados[i].name);
                break;
            case 2:
                printf("Reingrese APELLIDO:");
                fflush(stdin);
                gets(ListaEmpleados[i].lastName);
                break;
            case 3:
                printf("Reingrese SALARIO:");
                scanf("%f",&ListaEmpleados[i].salary);
                break;
            case 4:
                printf("Reingrese SECTOR:");
                scanf("%d",&ListaEmpleados[i].sector);
                break;
            }
        }
    }
}
void PrintEmployee(eEmployee ListaEmpleados)
{
    printf ("%8d %8s %5s\t%8.2f %5d \n",
            ListaEmpleados.id,
            ListaEmpleados.name,
            ListaEmpleados.lastName,
            ListaEmpleados.salary,
            ListaEmpleados.sector);
}
void PrintEmployees(eEmployee ListaEmpleados[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(ListaEmpleados[i].isEmpty==OCUPADO)
        {
            PrintEmployee(ListaEmpleados[i]);
        }
    }
}
void RemoveEmployee(eEmployee ListaEmpleados[], int tam)
{
    int id;
    int i;

    PrintEmployees(ListaEmpleados,tam);
    printf("Ingrese el id: ");
    scanf("%d", &id);
    for(i=0; i<tam; i++)
    {
        if(id==ListaEmpleados[i].id)
        {
            printf("Empleado: %s %s",ListaEmpleados[i].lastName,ListaEmpleados[i].name);
            ListaEmpleados[i].isEmpty=0;
            break;
        }
    }
    printf("El empleado a sido eliminado correctamente.");
}
void sortEmployeesByLastNameUpward(eEmployee ListaEmpleados[],int tam)
{
    int i;
    int j;
    eEmployee auxEmployee;
    eEmployee auxSector;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if((strcmp(ListaEmpleados[i].name,ListaEmpleados[j].name))>0)
            {
                auxEmployee = ListaEmpleados[i];
                ListaEmpleados[i] = ListaEmpleados[j];
                ListaEmpleados[j] = auxEmployee;
            }
            if((ListaEmpleados[i].sector==ListaEmpleados[j].sector)>0)
            {
                auxSector = ListaEmpleados[i];
                ListaEmpleados[i] = ListaEmpleados[j];
                ListaEmpleados[j] = auxSector;
            }
        }
    }

    PrintEmployees(ListaEmpleados,tam);
}
void sortEmployeesByLastNameDescend(eEmployee ListaEmpleados[],int tam)
{
     int i;
    int j;
    eEmployee auxEmployee;
    eEmployee auxSector;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if((strcmp(ListaEmpleados[i].name,ListaEmpleados[j].name))<0)
            {
                auxEmployee = ListaEmpleados[i];
                ListaEmpleados[i] = ListaEmpleados[j];
                ListaEmpleados[j] = auxEmployee;
            }
            if((ListaEmpleados[i].sector==ListaEmpleados[j].sector)<0)
            {
                auxSector = ListaEmpleados[i];
                ListaEmpleados[i] = ListaEmpleados[j];
                ListaEmpleados[j] = auxSector;
            }
        }
    }

    PrintEmployees(ListaEmpleados,tam);
}
void PrintOperationSalary(eEmployee ListaEmpleados[],int tam)
{
    int i;
    float acumuladorSalario;
    float promedioTotal;

    acumuladorSalario=0;

    for(i=0; i<tam; i++)
    {
        if(ListaEmpleados[i].isEmpty==1)
        {
            acumuladorSalario=acumuladorSalario+ListaEmpleados[i].salary;
        }
    }
    if(tam==i)
    {
        promedioTotal=acumuladorSalario/tam;
        printf("El total de los salarios:%f\nEl promedio de los salarios es:%f\n Los empleados superan el salario promedio son:",acumuladorSalario,promedioTotal);
        for(i=0; i<tam; i++)
        {
            if(ListaEmpleados[i].salary>promedioTotal)
            {
                PrintEmployees(ListaEmpleados,tam);
            }

        }
    }
}


