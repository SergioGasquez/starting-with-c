/*
 * Realizaremos un programa que nos diga si el año introducido es bisiesto o no
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *Funcion que comprueba si un año es bisiesto
 */

int EsBisiesto (int anio)
{
    if (anio >= 1582)
    {
        if (((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 2;
    }

}

void main()
{
    int compranio;
    printf("\nIntroduzca el anio que quiere comprobar si es bisiesto:");
    scanf("%d", &compranio);

    if (EsBisiesto(compranio) == 1)
    {
        printf("El anio introducio es bisisesto");
    }
    if (EsBisiesto(compranio) == 0)
    {
        printf("El anio introducio no es bisisesto");
    }
    if (EsBisiesto(compranio) == 2)
    {
        printf("El anio introducido no es correcto ya que este calendario "
               "empezo a aplicarse en 1582\n");
    }
}
