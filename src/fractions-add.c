/*
 * Realizaremos un programa para sumar fracciones
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * Prototipos
 */
 int mcm(int a, int b);
 int SumaFracciones(int num1, int dem1, int num2, int dem2, int *num, int *dem);


/*
 * Funcion para calcular el mcm
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

/*
 * Funcion para sumar las fracciones
 */

int SumaFracciones (int num1, int dem1, int num2, int dem2, int *num, int *dem)
{

    *dem = mcm(dem1, dem2);
    *num = ((*dem / (dem1)) * (num1)) + ((*dem / (dem2)) * (num2));

    return 0;

}

int main()
{
    int num1;
    int dem1;
    int num2;
    int dem2;
    int num;
    int dem;

    printf("Introduzca la primera fraccion de la sieguiente forma 'X/Y':");
    scanf("%d / %d", &num1, &dem1);
    printf("Introduzca la segunda fraccion de la sieguiente forma 'X/Y':");
    scanf("%d / %d", &num2, &dem2);

    SumaFracciones(num1, dem1, num2, dem2, &num, &dem);

    printf("\nEl resultado de %d/%d + %d/%d es %d/%d", num1, dem1, num2, dem2,
           num, dem);

    return 0;
}
