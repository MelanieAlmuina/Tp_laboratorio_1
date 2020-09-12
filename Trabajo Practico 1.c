/*1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
//MAIN
int main()
{
    float numeroA;
    float numeroB;
    int opciones;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    long int factorialA;
    long int factorialB;
    int banderaOpcion;
    int banderaUno;
    int banderaDos;

    numeroA=0;
    numeroB=0;
    banderaOpcion=0;
    banderaUno=0;
    banderaDos=0;

    do
    {
        opciones=MostrarMenu(numeroA,numeroB);
        switch(opciones)
        {
        case 1:
            printf("Ingrese el 1er operando.\n");
            fflush(stdin);
            scanf("%f",&numeroA);
            banderaUno=1;
            break;

        case 2:
            printf("Ingrese el 2do operando.\n");
            fflush(stdin);
            scanf("%f",&numeroB);
            banderaDos=1;
            break;

        case 3:
            if(banderaUno==1 && banderaDos==1)
            {
                suma=CalcularSuma(numeroA,numeroB);
                resta=CalcularResta(numeroA,numeroB);
                multiplicacion=CalcularMultiplicacion(numeroA,numeroB);
                division=CalcularDivision(numeroA,numeroB);
                if(numeroA>=1 && numeroA == (int) numeroA)
                {
                    factorialA=CalcularFactorial(numeroA);
                }
                if(numeroB>=1 && numeroB==(int) numeroB)
                {
                    factorialB=CalcularFactorial(numeroB);
                }
                banderaOpcion=1;
                printf("Calculando...\n");
            }
            else
            {
                if(banderaUno==0)
                {
                    printf("Ingrese el 1er operando.\n");
                    fflush(stdin);
                    scanf("%f",&numeroA);
                    banderaUno=1;
                }
                if(banderaDos==0)
                {
                    printf("Ingrese el 2do operando.\n");
                    fflush(stdin);
                    scanf("%f",&numeroB);
                    banderaDos=1;
                }
            }
            system("cls");
            fflush(stdin);
            break;

        case 4:
            if(banderaUno==1&&banderaDos==1&&banderaOpcion==1)
            {

                printf("Los resultados de la suma de %.2f y %.2f: %.2f\n\n",numeroA,numeroB,suma);
                printf("Los resultados de la resta de %.2f y %.2f: %.2f.\n\n",numeroA,numeroB,resta);
                printf("Los resultados de la multiplicacion de %.2f y %.2f: %.2f\n\n",numeroA,numeroB,multiplicacion);

                if(numeroB!=0)
                {
                    printf("Los resultados de la division de %.2f y %.2f: %.2f\n\n",numeroA, numeroB, division);
                }
                else
                {
                    printf("No se puede hacer la division.\n\n");
                }

                if(numeroA== (int) numeroA && numeroA>=0)
                {
                    printf("El resultado del factorial A:%ld\n\n",factorialA);
                }
                else
                {
                    printf("No se puede hacer factorial A.\n\n");
                }

                if(numeroB==(int)numeroB && numeroB>=0)
                {
                    printf("El resultado del factorial B:%ld\n\n\n\n",factorialB);
                }
                else
                {
                    printf("No se puede hacer factorial B.\n\n\n");
                }
                system("pause");
                system("cls");

            }
            else
            {
                printf("No se realizaron los calculos.\n\n\n");
            }
            break;
            system("cls");
        case 5:
            printf("Saliendo...");
            system("cls");
            break;
        default:
            printf("No es una opcion valida\n\n");
        }
    }
    while(opciones!=5);

    return 0;
}

