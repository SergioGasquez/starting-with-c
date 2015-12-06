/*
 * Realizaremos un programa para calcular los numeros perfectos entre 1 y 1000
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * Prototipos
 */
 int SumDivisores(int num);
 int EsPerfecto(int num, int sum1);

/*
 * Funcion para sumar los divisores de un numero
 */

int SumDivisores(int num)
{
    int cont;
    int aux;
    cont = 1;
    aux = 0;
    for (cont; cont <= num / 2; cont++)
    {
        if (num % cont == 0)
        {
            aux = aux + cont;
        }
    }
    return aux;
}

/*
 * Funcion para comprobar si un numero es perfecto
 */

int EsPerfecto(int num, int sum1)
{
    int bol;
    if (num == sum1)
    {
        bol = 1;
    }
    else
    {
        bol = 0;
    }

    return bol;
}

int main()
{
    int num;
    int sum1;
    int sol;
    num = 1;

    for (num; num <= 1000; num++)
    {
        sum1 = SumDivisores(num);
        sol = EsPerfecto(num, sum1);

        if (sol == 1)
        {
            printf("\nEl numero %d es perfecto", num);
        }
    }

    return 0;
}
