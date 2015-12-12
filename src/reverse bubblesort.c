/*
 * Programa que ordena un vector en orden descendente
 */
#include <stdio.h>
#include <stdlib.h>
#define UTIL 30
/*
 * Prototipos
 */
int ordenaVector (int vector[],int UTILVECTOR);
void leerVector (int vector[],int UTILVECTOR);

/*
 * Funcion para introducir los datos
 */
void leerVector (int vector[],int UTILVECTOR)
{
    int i;
    printf("Introduzca numeros reales:");
    for (i=0;i<UTILVECTOR;i++)
    {
        scanf("%d",&vector[i]);
    }

}
/*
 * Funcion que ordena el vector
 */
int ordenaVector (int vector[],int UTILVECTOR)
{
    int x;
    int y;
    int aux;

    for (x = 0; x < UTILVECTOR; x++)
    {
        for (y = 0; y < UTILVECTOR - 1; y++)
        {
            if (vector[y] < vector[y + 1])
            {
                aux = vector[y + 1];
                vector[y + 1] = vector[y];
                vector[y] = aux;
            }
        }
    }
    return 0;
}

int main()
{
    int UTILVECTOR;
    int vector[UTIL] ;
    int x;
    printf("Cuantas componentes tiene el vector:");
    scanf("%d",&UTILVECTOR);

    leerVector (vector,UTILVECTOR);
    ordenaVector(vector,UTILVECTOR);

    printf("\nEl vector resutante es:");
    for (x = 0; x < UTILVECTOR; x++)
    {
        printf("%d ", vector[x]);
    }

    return 0;
}
