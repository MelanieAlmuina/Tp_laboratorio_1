#include <stdio.h>
#include <stdlib.h>
/** \brief Esta funcion muestra el MENU DE OPCIONES. Tambien devuelve los numeros ingresados.
 *
 * \param opciones int Muestra 5 opciones para que el usuario elija.
 * \param numberA float Valor ingresado por el usuario(A)
 * \param numberB float Valor ingresado por el usuario (B)
 * \return int Opcion elegida.
 *
 */
int MostrarMenu(float numberA, float numberB);


/** \brief Esta funcion SUMA los numeros (A y B) ingresados por el usuario.
 *
 * \param float   Valor del numero A.
 * \param float   Valor del numero B.
 * \return float  Devuelve el resultado de la SUMA.
 *
 */
float CalcularSuma(float,float);


/** \brief Esta funcion RESTA (A - B). Dos valores ingresados por el usuario.
 *
 * \param float Valor del numero A.
 * \param float Valor del numero B.
 * \return float Devuelve el resultado de la RESTA.
 *
 */
float CalcularResta(float,float);


/** \brief Esta funcion MULTIPLICA A y B. Dos valores ingresados por el usuario.
 *
 * \param float Valor del numero A.
 * \param float Valor del numero B.
 * \return float Devuelve el resultado de la MULTIPLICACION.
 *
 */
float CalcularMultiplicacion(float,float);


/** \brief Esta funcion DIVIDE el valor A por el valor B, ambos valores ingresados por el usuario.
 *
 * \param float Valor del numero A.
 * \param float Valor del numero B.
 * \return float Devuelve el resultado de la DIVISION.
 *
 */
float CalcularDivision(float,float);


/** \brief Esta funcion calcula el FACTORIAL de A o B, siempre que sean valores enteros.
 *
 * \param int Valor entero de A o B
 * \return int Devuelve el resultado del FACTORIAL.
 *
 */
long int CalcularFactorial(float);
