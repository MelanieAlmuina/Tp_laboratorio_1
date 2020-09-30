/*El sistema deberá tener el siguiente menú de opciones:
1. ALTAS: Se debe permitir ingresar un empleado calculando automáticamente el número
de Id. El resto de los campos se le pedirá al usuario.
2. MODIFICAR: Se ingresará el Número de Id, permitiendo modificar: o Nombre o Apellido
o Salario o Sector
3. BAJA: Se ingresará el Número de Id y se eliminará el empleado del sistema.
4. INFORMAR:
1. Listado de los empleados ordenados alfabéticamente por Apellido y Sector.
2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio.*/
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
