/*El sistema deber� tener el siguiente men� de opciones:
1. ALTAS: Se debe permitir ingresar un empleado calculando autom�ticamente el n�mero
de Id. El resto de los campos se le pedir� al usuario.
2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
o Salario o Sector
3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
4. INFORMAR:
1. Listado de los empleados ordenados alfab�ticamente por Apellido y Sector.
2. Total y promedio de los salarios, y cu�ntos empleados superan el salario promedio.*/
#include <stdio.h>
#include <stdlib.h>
#include "MenuOpciones.h"
#define T 5//CAMBIALO A 1000 ANTES DE ENTREGAR

int main()
{
    int opciones;
    eEmployee ListaEmpleados[T];
    initEmployees(ListaEmpleados, T);

    do
    {
        opciones=MenuOpciones(opciones);

    }while(opciones!=5);

    return 0;
}
