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
 * \brief La funci�n "sumar" realiza la suma entre los dos n�meros ingresados.
 * \param float es el valor del primer n�mero ingresado.
 * \param float es el valor del segundo n�mero ingresado.
 * \return float Devuelve el resultado de la suma entre los dos n�meros ingresados.
 */

float sumar(float num1,float num2)
{
    float resultado;
    resultado = num1 + num2;
    return resultado;
}

/*
 *  \brief La funcion "restar" realiza la resta entre los dos n�meros ingresados.
 * \param float es el valor del primer n�mero ingresado.
 * \param float es el valor del segundo n�mero ingresado.
 * \return float Devuelve el resultado de la resta entre los dos n�meros ingresados.
 */

float restar(float num1,float num2)
{
    float resultado;
    resultado = num1 - num2;
    return resultado;
}

/*
 * \brief La funci�n "multiplicacion" realiza la multiplicaci�n entre los dos n�meros ingresados.
 * \param float es el valor del primer n�mero ingresado.
 * \param float es el valor del segundo n�mero ingresado.
 * \return float Devuelve el producto de la multiplicaci�n entre los dos n�meros ingresados.
 */
float multiplicacion(float num1,float num2)
{
    float resultado;
    resultado = num1 * num2;
    return resultado;
}

/*
 * \brief La funci�n "division" realiza la disivi�n entre los dos n�meros ingresados.
 * \param float es el valor del primer n�mero ingresado.
 * \param float es el valor del segundo n�mero ingresado.
 * \return float Devuelve el resultado de la divisi�n entre los dos n�meros ingresados.
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
 * \brief La funci�n "validarFactorial", valida si se ingresaron n�meros negativos o con la parte flotante mayor a 0.
 * \param float es el valor del n�mero ingresado.
 * \return int  Retorna 0 en caso de que el n�mero ingresado sea positivo o su parte flotante es 0, y retorna 1 cuando el n�mero sea negativo o su parte flotante es mayor a 0.
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
 *\brief La funci�n "factorial" hace la multiplicaci�n entre el n�mero ingresado y sus valores descrecientes hasta el 1.
 * \param float n�mero ingresad flotante, si es positivo.
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
