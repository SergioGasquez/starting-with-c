/*
 * Programa que muestra los primos entre 1 y N,donde N lo pone el usuario
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
 * Funcion para mostrar los primos
 */


int MuestraPrimos (int intma)
{
    int intme = 1;
    for (intme; intme <= intma; intme++)
    {
        if (EsPrimo(intme) == 1)
        {
            printf("%d\n", intme);
        }
    }

    return 0;
}

int main()
{
    MuestraPrimos(100);

    return 0;
}




