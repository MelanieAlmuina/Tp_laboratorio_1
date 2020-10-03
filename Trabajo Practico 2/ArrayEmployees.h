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
void FindEmployeeByID(eEmployee ListaEmpleados[],int tam);
void PrintEmployee (eEmployee ListaEmpleados);
void PrintEmployees(eEmployee ListaEmpleados[], int tam);
void RemoveEmployee(eEmployee ListaEmpleados[], int tam);
void sortEmployeesByLastNameUpward(eEmployee ListaEmpleados[],int tam);
void sortEmployeesByLastNameDescend(eEmployee ListaEmpleados[],int tam);
void PrintOperationSalary(eEmployee ListaEmpleados[],int tam);


