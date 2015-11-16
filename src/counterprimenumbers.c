/*
 * Realizaremos un programa para contabilizar la cantidad de numeros primos
 * que hay en un intervalo.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funcion para ver si un numero es primo
 */

int EsPrimo(int num)
{
    int a = 2;
    for (a; a <= num / 2; a++)
    {
        if (num % a == 0)
        {
            return 0;
        }
    }

    return 1;

}

/*
 * Funcion para contabilizar el numero de primos
 */

int ContPrimos (int intme, int intma)
{
    int conta = 0;
    for (intme; intme <= intma; intme++)
    {
        if (EsPrimo(intme) == 1)
        {
            conta = conta + 1;
        }
    }
    printf("Hay %.1d", conta);

    return 0;
}

int main()
{
    ContPrimos(1, 100);

    return 0;
}
