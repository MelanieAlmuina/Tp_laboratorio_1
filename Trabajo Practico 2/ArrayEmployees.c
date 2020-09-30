  #define LIBRE 0
  #define OCUPADO 1
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

    for(i=0; i<tam; i++)
    {
        if(ListaEmpleados[i].isEmpty==0)
        {
            printf("Ingrese nombre del empleado:");
            gets(ListaEmpleados[i].name);
            printf("Ingrese apellido del empleado:");
            gets(ListaEmpleados[i].lastName);
            printf("Ingrese sueldo del empleado:");
            scanf("%f",ListaEmpleados[i].salary);
            printf("Ingrese sector del empleado:");
            scanf("%d",ListaEmpleados[i].sector);
            ListaEmpleados[i].isEmpty=1;
        }
    }
}
void FindIdEmpleado(eEmployee ListaEmpleados[],int tam)
{
    int i;
    int id;
    int opciones;

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
                scanf("%f",ListaEmpleados[i].salary);
                break;
            case 4:
                printf("Reingrese SECTOR:");
                scanf("%d",ListaEmpleados[i].sector);
                break;
          }
      }


    }
}
