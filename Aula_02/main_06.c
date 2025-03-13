#include <stdio.h>
#include <stdlib.h> //para poder utilizar a função rand()
#include <time.h>   //para poder utilizar a funçao time()

void jogaOsDados(int jogo[10], int min, int tam, int semente);
void printJogo(int jogo[10]);

int main(void)
{ 
    printf("Trabalhando com arrays unidimensionais\n");
    printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
    printf("RAND_MAX = %d\n", RAND_MAX);
    int jogo[10];
    printf("Simulando 10 lançamentos de um dado:\n");
    int min = 1;
    jogaOsDados(jogo, min, 6, 0);
    printf("%d\n", min);
    printJogo(jogo);
    printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
    int semente;
    printf("Entre com a semente para gerar uma nova sequencia: ");
    int err = scanf("%d", &semente);
    jogaOsDados(jogo, 1, 6, semente);
    printJogo(jogo);
    printf("Sementes diferentes irão gerar resultados diferentes!\n");
    printf("A mesma semente gera o mesmo resultado!\n");
    printf("Escolhendo a semente de forma automática\n");
    jogaOsDados(&jogo[0], 1, 6, -1);
    printJogo(jogo);
    printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
    return 0;
}

void jogaOsDados(int jogo[10], int min, int tam, int semente)
{
    int qtVezes = 10;
    if (semente > 0)
        srand(semente);
    else if (semente < 0)
        srand(time(NULL));
    int dado;
    for (int i = 0; i < qtVezes; i++)
    {
        jogo[i] = min + rand() % tam;
    }
    min++;
}

void printJogo(int jogo[10])
{
    int qtVezes = 10;
    printf("( ");
    for (int i = 1; i <= qtVezes; i++)
    {
        printf("%d", jogo[i - 1]);
        if (i < qtVezes)
            printf(", ");
        else
            printf(")\n");
    }
}