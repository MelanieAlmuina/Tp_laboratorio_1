#include "funciones.h"
int MostrarMenu(float numberA, float numberB)
{
    int options;

    printf("CALCULADORA\n");
    printf("1- Ingresar 1er operando. A=%2.f\n",numberA);
    printf("2- Ingresar 2do operando. B=%2.f\n",numberB);
    printf("3- Calcular todas las operaciones.\na) Calcular la suma (A+B)\nb) Calcular la resta (A-B)\nc) Calcular la division (A/B)\nd) Calcular la multiplicacion (A*B)\ne) Calcular el factorial (A! y B!)\n");
    printf("4- Informar resultado.\n");
    printf("5- Salir.\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&options);
    system("cls");
    return options;
}
float CalcularSuma(float numberA,float numberB)//no necesario que se llamen igual que en el main
{
    float suma;

    suma=(numberA)+(numberB);
    return suma;
}
float CalcularResta(float numberA, float numberB)
{
    float resta;
    resta= (numberA)-(numberB);
    return resta;
}

float CalcularMultiplicacion(float numberA, float numberB)
{
    float multiplicar;
    multiplicar= numberA*numberB;
    return multiplicar;
}

float CalcularDivision(float numberA, float numberB)
{
    float division;
    division= numberA/numberB;
    return division;
}
long int CalcularFactorial(float number)
{
    int factorial;
    int result;
    long int factor=1;

    if (number==(int)number && number>=0)
    {
        for(factorial=number; factorial>0; factorial--)
        {
            factor = factor * factorial;
            result=factor;
        }
    }
    else if (number<0)
    {
        result=0;
    }

    return (result);
}
