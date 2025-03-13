#include <stdio.h>

void naoTrocaValores(double x, double y);
void trocaValores(double *x, double *y);

int main(void)
{ 
    printf("Trabalhando com passagem de parâmetros\n");
    double x, y;
    x = 3.14;
    y = 6.28;
    printf("Na função main inicializamos as variáveis com: \n");
    printf("x = %f, y = %f\n", x, y);
    printf("Chamando a função naoTrocaValores\n");
    naoTrocaValores(x, y);
    printf("Após retornar da função naoTrocaValores temos: \n");
    printf("x = %f, y = %f\n", x, y);
    printf("Chamando a função trocaValores\n");
    trocaValores(&x, &y);
    printf("Após retornar da função trocaValores temos: \n");
    printf("x = %f, y = %f\n", x, y);
    return 0;
}

void naoTrocaValores(double x, double y)
{
    double z;
    printf("Na função naoTrocaValores chegou: \n");
    printf("x = %f, y = %f\n", x, y);
    z = x;
    x = y;
    y = z;
    printf("Após a troca temos: \n");
    printf("3- x = %f, y = %f\n", x, y);
}

void trocaValores(double *x, double *y)
{
    double z;
    //double *z;
    printf("Na função trocaValores chegou: \n");
    //printf("&x = %d, &y = %d\n", x, y);
    printf("x = %f, y = %f\n", *x, *y);
    z = *x;
    //z = x;
    *x = *y;
    //x = y;
    *y = z;
    //y = z;
    printf("Após a troca temos: \n");
    printf("6- x = %f, y = %f\n", *x, *y);
}