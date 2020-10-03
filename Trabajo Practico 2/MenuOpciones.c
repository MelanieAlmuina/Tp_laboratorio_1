#include <stdio.h>
#include <stdlib.h>
#include "MenuOpciones.h"
//#include "ArrayEmployees.h"
#define T 5

int MenuOpciones(int opciones)
{
    printf("____________\n");
    printf("| EMPLOYEE |\n");
    printf("____________\n");
    printf("1- Ingresar un empleado.\n");
    printf("2- Modificar un empleado.\n");
    printf("3- Eliminar un empleado.\n");
    printf("4- Informar.\n");
    printf("\t1- Listado de los empleados ordenados alfabéticamente por Apellido y Sector.\n");
    printf("\t2- Total y promedio de los salarios, y cuántos empleados superan el salario promedio.\n");
    printf("5- Salir.\n");


    printf("Ingrese una opcion: ");
    scanf("%d",&opciones);
    system("cls");

    return opciones;
}
void SwitchCase(eEmployee ListaEmpleados[], int opciones)
{
    switch(opciones)
    {
        case 1:
                printf("CARGA DE DATOS:\n");
                //COMPLETAR LA FUNCION PARA TRABAJAR CON RETORNO
                addEmployees(ListaEmpleados, T);
                break;
        case 2:

                FindEmployeeByID(ListaEmpleados,T);
                break;
        case 3:
                RemoveEmployee(ListaEmpleados,T);
                break;
        case 4:
                printf("\t1- Listado de los empleados ordenados alfabeticamente por Apellido y Sector.\n");
                printf("\t2- Total y promedio de los salarios, y cuantos empleados superan el salario promedio.\n");
                scanf("%d",&opciones);
                switch(opciones)
                {
                    case 1:
                           //FUNCION MOSTRAR
                            printf("Ordenar de A-Z.\nOrdenar de Z-A.");
                            scanf("%d",&opciones);
                            switch(opciones)
                            {
                                case 1:
                                    sortEmployeesByLastNameUpward(ListaEmpleados,T);
                                    break;
                                case 2:
                                    sortEmployeesByLastNameDescend(ListaEmpleados,T);
                                    break;
                            }
                    break;
                    case 2:
                            //FUNCION MOSTRAR
                            PrintOperationSalary(ListaEmpleados,T);
                    break;
                }
                break;
        case 5:
                printf("Chau");
                break;
    }

}

