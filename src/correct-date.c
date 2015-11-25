/*
 * Realizaremos un programa que calcule si una fecha es correcta
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funcion que comprueba si el mes introducido es correcto
 */

int MesCorrecto(int m)
{
    int mesco;
    if (m <= 12 && m > 0)
    {
        mesco = m;
    }
    else
    {
        mesco = 0;
    }

    return mesco;
}

/*
 * Funcion que comprueba si el año introducido es bisiesto y correcto
 */

int EsBisiesto (int a)
{
    int anioco;
    int anio;

    anioco = 0;
    anio = a;

    if (anio >= 1582)
    {
        if (((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0))
        {
            anioco = 1;
        }
        else
        {
            anioco = 0;
        }
    }
    else
    {
        anioco = 2;
    }

    return anioco;
}

/*
 * Funcion que comprueba si el dia introducido es correcto
 */

int DiaCorrecto (int m, int d)
{
    int diaco;
    int dia;
    int mes;
    mes = m;
    dia = d;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 ||
         mes == 12)
    {
        if (dia <= 31 && dia > 0)
        {
            diaco = dia;
        }
        else
        {
            diaco = 0;
        }
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia <= 30 && dia > 0)
        {
            diaco = dia;
        }
        else
        {
            diaco = 0;
        }
    }
    if (mes == 2)
    {

        if ((dia <= 28 && dia > 0) )
        {

            diaco = dia;
        }
        else
        {
            diaco = 0;
        }
    }
    return diaco;
}

/*
 * Funcion que comprueba si el dia introducido es correcto
 */

int DiaCorrectoBi (int m, int d)
{
    int diaco;
    int dia;
    int mes;
    mes = m;
    dia = d;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 ||
         mes == 12)
    {
        if (dia <= 31 && dia > 0)
        {
            diaco = dia;
        }
        else
        {
            diaco = 0;
        }
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia <= 30 && dia > 0)
        {
            diaco = dia;
        }
        else
        {
            diaco = 0;
        }
    }
    if (mes == 2)
    {

        if ((dia <= 29 && dia > 0) )
        {

            diaco = dia;
        }
        else
        {
            diaco = 0;
        }
    }
    return diaco;
}

int main()
{
    int a;
    int m;
    int d;
    int b = 0, c = 0, f = 0, e = 0;

    printf("Introduzca la fecha separada por '/':");
    scanf("%d / %d / %d", &d, &m, &a);

    b = MesCorrecto(m);

    c = EsBisiesto(a);

    if (c == 1)
    {
        e = DiaCorrectoBi(m, d);
    }
    if (c == 0)
    {
        f = DiaCorrecto(m, d);
    }


    if (b != 0 && c != 2 && (e != 0 || f != 0))
    {
        printf("La fecha introducida es correcta");
    }
    else
    {
        printf("\nLa fecha introducida es incorrecta");
        printf("\nRevise que:\n   El dia exista en el mes introducido "
               "\n   El anio introducido sea mayor de 1582\n   El mes sea menor"
               " que 12");
    }
    return 0;
}
