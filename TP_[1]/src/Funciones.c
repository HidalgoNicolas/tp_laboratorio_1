/*
 * Funciones.c
 *
 *  Created on: 25 sep. 2021
 *      Author: Hidalgo Oyasbehere Enzo Nicolas
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

/*
 * \brief La función "sumar" realiza la suma entre los dos números ingresados.
 * \param float es el valor del primer número ingresado.
 * \param float es el valor del segundo número ingresado.
 * \return float Devuelve el resultado de la suma entre los dos números ingresados.
 */

float sumar(float num1,float num2)
{
    float resultado;
    resultado = num1 + num2;
    return resultado;
}

/*
 *  \brief La funcion "restar" realiza la resta entre los dos números ingresados.
 * \param float es el valor del primer número ingresado.
 * \param float es el valor del segundo número ingresado.
 * \return float Devuelve el resultado de la resta entre los dos números ingresados.
 */

float restar(float num1,float num2)
{
    float resultado;
    resultado = num1 - num2;
    return resultado;
}

/*
 * \brief La función "multiplicacion" realiza la multiplicación entre los dos números ingresados.
 * \param float es el valor del primer número ingresado.
 * \param float es el valor del segundo número ingresado.
 * \return float Devuelve el producto de la multiplicación entre los dos números ingresados.
 */
float multiplicacion(float num1,float num2)
{
    float resultado;
    resultado = num1 * num2;
    return resultado;
}

/*
 * \brief La función "division" realiza la disivión entre los dos números ingresados.
 * \param float es el valor del primer número ingresado.
 * \param float es el valor del segundo número ingresado.
 * \return float Devuelve el resultado de la división entre los dos números ingresados.
 */

float division(float num1,float num2)
{
    float resultado = 0;

    if (num2== 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = num1 / num2;
    }

    return  resultado;
}

/*
 * \brief La función "validarFactorial", valida si se ingresaron números negativos o con la parte flotante mayor a 0.
 * \param float es el valor del número ingresado.
 * \return int  Retorna 0 en caso de que el número ingresado sea positivo o su parte flotante es 0, y retorna 1 cuando el número sea negativo o su parte flotante es mayor a 0.
 */

int validarFactorial (float nf)
{
    int retorna = 0;
    float restar;
    int entero;


    entero = nf;
    restar= nf - entero;

    if(restar>0 || nf<0)
    {
        retorna = 1;
    }
    return retorna;
}

/*
 *\brief La función "factorial" hace la multiplicación entre el número ingresado y sus valores descrecientes hasta el 1.
 * \param float número ingresad flotante, si es positivo.
 * \return int El resultado del factorial de la parte entera del numero ingresado.
 */
int factorial(float num1)
{
    int i;
    int resultado = 1;
    int retorno;
    retorno= validarFactorial(num1);

    if(retorno== 1)
    {
        resultado= 2;
    }
    else
    {
        for (i=num1; i>=1; i--)
        {
            resultado=resultado*i;
        }
    }
    return resultado;
}
