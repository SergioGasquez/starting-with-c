/*
 * Programa que une dos vectores ordenados en un tercero
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#define UTILVECTOR1 8
#define UTILVECTOR2 8
#define UTILVECTOR3 16
/*
 * Prototipos
 */
int unirVectores (int vector1[], int vector2[], int vector3[]);
int ordenaVector (int vector3[]);
/*
 * Funcion que une dos vectores en un tercero
 */
int unirVectores (int vector1[], int vector2[], int vector3[])
{
    int a;
    int b;
    b = 0;
    for (a = 0; a < UTILVECTOR1; a++)
    {
        vector3[a] = vector1[a];
        b++;
    }
    for (a = 0; a <= UTILVECTOR2 ; a++)
    {
        vector3[a + b] = vector2[a];
    }
    return 0;
}
/*
 * Funcion que ordena el vector
 */
int ordenaVector (int vector3[])
{
    int x;
    int y;
    int aux;

    for (x = 0; x < UTILVECTOR3; x++)
    {
        for (y = 0; y < UTILVECTOR3 - 1; y++)
        {
            if (vector3[y] > vector3[y + 1])
            {
                aux = vector3[y + 1];
                vector3[y + 1] = vector3[y];
                vector3[y] = aux;
            }
        }
    }
    return 0;
}

int main()
{
    int x;
    int vector1 [UTILVECTOR1] = {1, 2, 2, 3, 4, 6, 7, 9};
    int vector2 [UTILVECTOR2] = {0, 1, 1, 2, 5, 5, 7, 8};
    int vector3 [UTILVECTOR3];

    unirVectores(vector1, vector2, vector3);
    ordenaVector(vector3);
    for (x = 0; x < UTILVECTOR3; x++)
    {
        printf("\nPos%d:%d", x, vector3[x]);
    }
    return 0;
}

