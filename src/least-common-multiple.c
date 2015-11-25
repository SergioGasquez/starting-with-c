/*
 * Realizaremos un programa que calcule el MCM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funcion que calcula el MCM
 */

int mcm(int a, int b)
{
    int mayor;

    if (a > b)
    {
        mayor = a;
    }
    else
    {
        mayor = b;
    }
    while ((mayor % a != 0) || (mayor % b != 0))
    {
        mayor++;
    }

    return mayor;
}


int main()
{
    int sol;
    int a;
    int b;

    printf("\nIntroduzca el primer numero:");
    scanf("%d", &a);
    printf("\nIntroduzca el segundo numero:");
    scanf("%d", &b);

    sol = mcm(a, b);
    printf("El minimo comun multiplo entre %d y %d es %d", a, b, sol);

    return 0;
}
