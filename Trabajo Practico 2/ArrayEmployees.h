#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}eEmployee;

int initEmployees(eEmployee ListaEmpleados[],int tam);
void addEmployees(eEmployee ListaEmpleados[],int tam);
void FindIdEmpleado(eEmployee ListaEmpleados[],int tam);

