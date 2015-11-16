/*
 * Realizaremos un programa para confirmar o rechazar
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Funcion que rechaza o acepta
 */

int Confirmar ()
{
    char con;

    printf("Confirmar (S/N)");
    scanf("%c", &con);

    switch (con)
    {
    case 'S' :
        return 1;
    case 's' :
        return 1;
    case 'N' :
        return 0;
    case 'n' :
        return 0;
    default:
        printf("\nCaracter incorrecto, introduzca 'S'/'s' para confirmar o 'N'/"
               "'n' para no hacerlo");
    }


}


void main()
{
    Confirmar();

}
