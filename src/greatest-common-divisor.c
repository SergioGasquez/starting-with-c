/*
 * Este programa calcula el MCD de dos numeros
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funcion para calcular el mcd de dos numeros
 */

int MCD (int a, int b)
{
    int dividendo, divisor, resto;
    if (a < b)
    {
        dividendo = b;
        divisor = a;
    }
    if (b < a)
    {
        dividendo = a;
        divisor = b;
    }
    while (resto != 0)
    {
        resto = dividendo % divisor;
        dividendo = divisor;
        divisor = resto;
    }
    printf("El MCD es %d\n", dividendo);

}

int main()
{
    MCD(142, 234);
    return 0;
}
