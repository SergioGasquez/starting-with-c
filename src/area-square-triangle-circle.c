

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Funcion para modular el programa
 */

int Modular (int modul,float *sol)
{

    switch (modul)
    {
    case 1 :
        AreaCuadrado(&sol);
        break;
    case 2 :
        AreaCirculo(&sol);
        break;
    case 3 :
        //AreaTriangulo();
        break;
    default:
        printf("Ha introducido un numero incorrecto\n");
    }

}


int AreaCuadrado(float *sol){
    float lado;

    printf("\nIntroduzca la longitud del lado:");
    scanf("%f",&lado);

    *sol=pow(lado,2);
    printf("\nSol:%f",*sol);

    return *sol;
}

int AreaCirculo(float *sol){
    float PI;
    float r;

    PI=3.141592654;

    printf("\nIntroduzca el radio del circulo:");
    scanf("%f",&r);

    *sol=(pow(r,2))*PI;
    printf("\nSol:%f",*sol);

    return *sol;
}


int main()
{
    int modul;
    float sol;

    printf("\nSi desea calcular el area de un cuadrado pulse '1'");
    printf("\nSi desea calcular el area de un circulo pulse '2'");
    printf("\nSi desea calcular el area de un triangulo equilatero pulse '3'");
    printf("\nQue desea calcular?");
    scanf("%d", &modul);

    //sol=Modular(modul,&sol);
    Modular(modul,&sol);
    printf("El resultado del area deseada es:%.2f", sol);

    return 0;
}
