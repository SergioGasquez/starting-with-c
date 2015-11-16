/*
 * Este programa pasara las letras mayusculas a minusculas  y las minusculas
 * las dejara igual
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Funcion para transformar las mayusculas a minusculas y deja las minusculas
 * igual
 */

char MayusMin (int letra)
{
    int a, b;
    a = iswupper (letra);
    if (a == 1)
    {
        b = tolower(letra);
        printf("El argumento introducido es una mayuscula,aqui su minuscula :%c"
               , b);
    }
    else
    {
        printf("El argumento no es una letra mayuscula, es:%c", letra);
    }

}


int main()
{

    MayusMin('A');

    return 0;
}
