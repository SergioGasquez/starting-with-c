/*
 * Este programa presenta un menu en el que elegimos que operacion queremos
 * realizar y posteriormente nos deriva a una funcion en las que nos pide los
 * parametros y realiza la operacion
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Funcion para calcular la potencia de un numero
 */

float Potencia ()
{
    float base;
    float exponente;
    float resultado;

    printf("Inserte la Base:");
    scanf("%f", &base);
    printf("\nInserte el Exponente:");
    scanf("%f", &exponente);

    resultado = pow(base, exponente);

    printf("%.0f elevado a %.0f es: %.0f\n", base, exponente, resultado);

    return 0;
}

/*
 * Funcion para calcular el factorial de un numero
 */

int Factorial ()
{
    int facto;
    int num;
    int resultado = 1;

    printf("Introduzca el numero al que le quiere calcular su factorial: ");
    scanf("%d", &facto);
    num = facto;

    while (facto > 0)
    {
        resultado = facto * resultado;
        facto--;
    }
    printf("El factorial de %d es %d\n", num, resultado);

    return 0;
}

/*
 * Funcion para calcular el factorial de un numero pero a diferencia de la
 * anterior,ahora introduciremos un parametro de entrada sin pedirselo al
 * usuario
 */

int Factorial1 (int facto)
{
    int resultado = 1;

    while (facto > 0)
    {
        resultado = facto * resultado;
        facto--;
    }

    return resultado;
}

/*
 * Funcion para calcular el combiantorio de dos numeros
 */

float Combinatorio ()
{
    int m, n, combi;
    printf("\nVamos a calcular el combinatorio de m sobre n");
    printf("\nIntroduzca m: ");
    scanf("%i", &m);
    printf("\nIntroduzca n: ");
    scanf("%i", &n);

    combi = (Factorial1(m)) / ((Factorial1(n)) * (Factorial1(m - n)));

    printf("\nEl combinatorio de %d sobre %d es %d", m, n, combi);

    return 0;
}

/*
 * Funcion para modular el programa
 */

int Modular ()
{

    char modul;

    printf("\nSi desea calcular la Potencia pulse 'P' o 'p'");
    printf("\nSi desea calcular el Factorial pulse 'F' o 'f'");
    printf("\nSi desea calcular un Combinatorio pulse 'C' o 'c'");
    printf("\nQue desea calcular?");
    scanf("%c", &modul);

    switch (modul)
    {
    case 'F' :
        Factorial();
        return 0;
    case 'f' :
        Factorial();
        return 0;
    case 'P' :
        Potencia();
        return 0;
    case 'p' :
        Potencia();
        return 0;
    case 'c' :
        Combinatorio();
        return 0;
    case 'C' :
        Combinatorio();
        return 0;
    default:
        printf("Ha introducido un caracter incorrecto\n");
    }

}

int main()
{
    Modular();
    return 0;
}
