/*
 * Programa para calcular el valor del seno por el polinomio de Taylor
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Funcion para calcular el polinomio de Taylor
 */

float Taylor(float x, int n)
{
    float rad;
    float PI;
    int i;
    float sen;
    float aux1;
    float aux2;
    sen = 0;
    i = 0;

    PI = 3.141592654;
    rad = (x * PI) / 180;
    while (rad >= 2 * PI)
    {
        rad = rad - 2 * PI;
    }


    for (i = 0; i <= n; i++)
    {
        aux1 = pow(rad, (2 * i + 1));
        aux2 = Factorial(2 * i + 1);
        sen = sen + ((pow(-1, i)) * (aux1 / aux2));
    }

    return sen;
}
/*
 * Funcion para calcular el factorial de un numero
 */

int Factorial (int facto)
{
    int resultado = 1;

    while (facto > 0)
    {
        resultado = facto * resultado;
        facto--;
    }

    return resultado;
}

int main()
{
    float x;
    int i;
    float sol1;
    float sol2;

    printf("\nIntroduzca el valor de x en grados:");
    scanf("%f", &x);
    printf("\nIntroduzca el numero de iteraciones que desea:");
    scanf("%d", &i);

    sol1 = Taylor(x, i);
    sol2 = Taylor(x, 2 * i);
    printf("\nLa solucion con %d iteraciones es:%f", i, sol1);
    printf("\nLa solucion con el doble de iteraciones es:%f", sol2);

    return 0;
}
