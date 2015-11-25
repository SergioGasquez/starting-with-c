/*
 * Realizaremos un programe que transforme una cantidad de segundos a horas,
 * minutos y segundos
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funcion que transforma los segundos horas,minutos y segundos
 */

int TransformarSegundos(int *s, int *m, int *h)
{
    while (*s >= 60)
    {
        *s = *s - 60;
        *m = *m + 1;
    }
    while (*m >= 60)
    {
        *h = *h + 1;
        *m = *m - 60;
    }

    return 0;
}
/*
 * Funcion para mostrar los datos
 */
void MostrarDatos (int *s, int *m, int *h)
{
    printf("El numero introducido de segundos corresponde a %d horas,%d minutos"
           "y %d segundos", *h, *m, *s);
}

int main()
{
    int s;
    int m;
    int h;
    m = 0;
    h = 0;

    printf("\nIntroduzca el numero de segundos que desea transformar:");
    scanf("%d", &s);

    TransformarSegundos(&s, &m, &h);
    MostrarDatos(&s, &m, &h);

    return 0;
}
