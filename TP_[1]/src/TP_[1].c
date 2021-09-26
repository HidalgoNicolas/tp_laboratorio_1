/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Hidalgo Oyasbehere Enzo Nicolas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    float numeroUno;
    float numeroDos;

    int flagNumeroUno = 0;
    int flagNumeroDos = 0;

    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;

    int resultadoFactorialUno;
    int resultadoFactorialDos;

    int opcion;

    char respuestaContinuar='s';

    while (respuestaContinuar=='s')
    {
        printf("Inicio:\n");
        if(flagNumeroUno == 1)
        {
            printf("1-Ingresar primer número (A=%.2f)\n",numeroUno);
        }
        else
        {
            printf("1-Ingresar primer número (A=x)\n");
        }
        if(flagNumeroDos == 1)
        {
            printf("2-Ingresar segundo número (B=%.2f)\n",numeroDos);
        }
        else
        {
            printf("2-Ingresar segundo número (B=x)\n");
        }
        printf("3-Calcular las operaciones: \n");
        printf("\tA) Suma (A+B)\n");
        printf("\tB) Resta (A-B)\n");
        printf("\tC) Division (A/B)\n");
        printf("\tD) Multiplicacion (A*B)\n");
        printf("\tE) Factorial (A!)\n");
        printf("4-Resultados:\n");
        printf("5-Salir\n");
        printf("Ingrese una opción: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingresar primer número:\n");
            scanf("%f",&numeroUno);
            flagNumeroUno = 1;
            break;
        case 2:
            printf("Ingresear segundo número:\n");
            scanf("%f",&numeroDos);
            flagNumeroDos = 1;
            break;
        case 3:
            if(flagNumeroUno==0 || flagNumeroDos==0)
            {
                printf("Por favor ingrese los números\n");
            }
            else
            {
                resultadoSuma = sumar(numeroUno,numeroDos);
                resultadoResta = restar(numeroUno,numeroDos);
                resultadoDivision = division(numeroUno,numeroDos);
                resultadoMultiplicacion = multiplicacion(numeroUno,numeroDos);
                resultadoFactorialUno = factorial(numeroUno);
                resultadoFactorialDos = factorial(numeroDos);
                printf("Las operaciones fueron realizadas con éxito\n");
            }
            break;
        case 4:
            if(flagNumeroUno==0 || flagNumeroDos==0)
            {
                printf("Error. Debe ingresar un número\n");
            }
            else
            {
                printf("Resultado de la suma es: %.2f \n",resultadoSuma);
                printf("Resultado de la resta es: %.2f \n",resultadoResta);

                if(resultadoDivision == 0)
                {
                    printf("No es posible dividir por cero\n");
                }
                else
                {
                    printf("Resultado de la division es: %.2f \n",resultadoDivision);
                }
                printf("Resultado de la multiplicacion: es %.2f \n",resultadoMultiplicacion);
                if(resultadoFactorialUno==2)
                {
                    printf("ERROR.No se puede realizar la funcion con numeros negativos, ni con coma.\n");
                }
                else
                {
                    printf("Resultado del factorial de A es: %d \n",resultadoFactorialUno);
                }
                if(resultadoFactorialDos==2)
                {
                    printf("ERROR.No se puede realizar la funcion con numeros negativos, ni con coma.\n");
                }
                else
                {
                    printf("Resultado del factorial de B es: %d \n",resultadoFactorialDos);
                }
            }
            break;
        case 5:
            respuestaContinuar = 'n';
            break;

        default:
            printf("La opción no es válida \n");
            fflush(stdin);
            respuestaContinuar = 's';
            break;
        }
    }
    return 0;

}
