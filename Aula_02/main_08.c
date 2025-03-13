#include <stdio.h>
#include <stdlib.h> //para poder utilizar a função rand()
#include <time.h>   //para poder utilizar a funçao time()

typedef struct
{
    int *jogo;   // números sorteados
    int qtVezes; // quantidade de sorteios
    int min;     // valor inicial do intervalo
    int tam;     // tamanho do intervalo
    long unsigned int semente;
} tJogo;

void jogaOsDados(tJogo jogo);
void printJogo(tJogo jogo);
tJogo inicializaJogo(int qtVezes, int min, int tam, long unsigned int semente);

int main(void)
{ // Ponto de entrada do Programa

    printf("Trabalhando com tipos de dados e estruturas\n");
    printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
    printf("RAND_MAX = %d\n", RAND_MAX);
    // Declarando e Inicializando o jogo
    tJogo jogo = inicializaJogo(10, 1, 6, 0);
    printf("Simulando 10 lançamentos de um dado:\n");
    jogaOsDados(jogo);
    printJogo(jogo);
    printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
    int semente;
    printf("Entre com a semente para gerar uma nova sequencia: ");
    int err = scanf("%d", &semente);
    jogo.semente = semente;
    jogaOsDados(jogo);
    printJogo(jogo);
    printf("Sementes diferentes irão gerar resultados diferentes!\n");
    printf("A mesma semente gera o mesmo resultado!\n");
    printf("Escolhendo a semente de forma automática\n");
    jogo.semente = -1;
    jogaOsDados(jogo);
    printJogo(jogo);
    printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
    free(jogo.jogo);
    return 0;
}



tJogo inicializaJogo(int qtVezes, int min, int tam, long unsigned int semente)
{
    tJogo jogo;
    jogo.qtVezes = qtVezes;
    jogo.min = min;
    jogo.tam = tam;
    jogo.jogo = (int *)malloc(qtVezes * sizeof(int));
    jogo.semente = semente;
    return jogo;
}

void jogaOsDados(tJogo jogo)
{
    if (jogo.semente > 0)
        srand(jogo.semente);
    else if (jogo.semente < 0)
        srand(time(NULL));
    for (int i = 0; i < jogo.qtVezes; i++)
    {
        jogo.jogo[i] = jogo.min + rand() % jogo.tam;
    }
}

void printJogo(tJogo jogo)
{
    printf("( ");
    for (int i = 1; i <= jogo.qtVezes; i++)
    {
        printf("%d", jogo.jogo[i - 1]);
        if (i < jogo.qtVezes)
            printf(", ");
        else
            printf(")\n");
    }
}