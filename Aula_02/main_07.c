#include <stdio.h>
#include <stdlib.h> //para poder utilizar a função rand()
#include <time.h>   //para poder utilizar a funçao time()

void jogaOsDados(int *jogo, int min, int tam, int qtVezes, int semente);
void printJogo(int *jogo, int qtVezes);

int main(void)
{
    printf("Trabalhando com alocação dinâmica\n");
    printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
    printf("RAND_MAX = %d\n", RAND_MAX); 
    int *jogo = NULL; // declarando o ponteiro
    jogo = (int *)malloc(10 * sizeof(int)); // alocando o array
    printf("Simulando 10 lançamentos de um dado:\n");
    jogaOsDados(jogo, 1, 6, 10, 0);
    printJogo(jogo, 10);
    printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
    int semente;
    printf("Entre com a semente para gerar uma nova sequencia: ");
    int err = scanf("%d", &semente);
    jogaOsDados(jogo, 1, 6, 10, semente);
    printJogo(jogo, 10);
    printf("Sementes diferentes irão gerar resultados diferentes!\n");
    printf("A mesma semente gera o mesmo resultado!\n");
    printf("Escolhendo a semente de forma automatica\n");
    jogaOsDados(jogo, 1, 6, 10, -1);
    printJogo(jogo, 12);  
    printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
    free(jogo);  // liberando a memória alocada
    return 0;
}

void jogaOsDados(int *jogo, int min, int tam, int qtVezes, int semente)
{
    if (semente > 0)
        srand(semente);
    else if (semente < 0)
        srand(time(NULL));
    for (int i = 0; i < qtVezes; i++)
    {
        jogo[i] = min + rand() % tam;
    }
}

void printJogo(int *jogo, int qtVezes)
{
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

// Exercícios:
/*
    Repare que a última chamada à função printJogo imprime 12 elementos, 
    mas o array jogo tem apenas 10 posições.
    O que acontece se você tentar imprimir mais elementos do que o array tem?
*/