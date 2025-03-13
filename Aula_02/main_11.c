#include <stdio.h>
#include <stdlib.h> //para poder utilizar a função rand()
#include <time.h>   //para poder utilizar a funçao time()

typedef void (*Metodo)(void* jogo);
typedef void (*MetodoInt)(void* jogo, long unsigned int semente);

typedef struct
{
    int *jogo;   // números sorteados
    int qtVezes; // quantidade de sorteios
    int min;     // valor inicial do intervalo
    int tam;     // tamanho do intervalo
    long unsigned int semente;
    Metodo jogaOsDados;
    Metodo printJogo;
    MetodoInt mudaSemente;
} tJogo;

void printJogo(void* jogo); 
void jogaOsDados(void* jogo);
void mudaSemente(void* jogo, long unsigned int semente);
tJogo inicializaJogo(int qtVezes, int min, int tam, long unsigned int semente);

int main(void)
{ // Ponto de entrada do Programa

    printf("Trabalhando com tipos de dados e estruturas\n");
    printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
    printf("RAND_MAX = %d\n", RAND_MAX);
    // Declarando e Inicializando o jogo
    tJogo jogo = inicializaJogo(10, 1, 6, 0);
    printf("Simulando 10 lançamentos de um dado:\n");
    jogo.jogaOsDados(&jogo);
    jogo.printJogo(&jogo);
    printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
    long unsigned int semente;
    printf("Entre com a semente para gerar uma nova sequencia: ");
    scanf("%lu", &semente);
    jogo.mudaSemente(&jogo, semente);
    jogo.jogaOsDados(&jogo);
    jogo.printJogo(&jogo);
    printf("Sementes diferentes irão gerar resultados diferentes!\n");
    printf("A mesma semente gera o mesmo resultado!\n");
    printf("Escolhendo a semente de forma automática\n");
    jogo.mudaSemente(&jogo, -1);
    jogo.jogaOsDados(&jogo);
    jogo.printJogo(&jogo);
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
    jogo.jogaOsDados = jogaOsDados;
    jogo.printJogo = printJogo;
    jogo.mudaSemente = mudaSemente;
    return jogo;
}

void mudaSemente(void* jogo, long unsigned int semente)
{
    tJogo *jogo_ = (tJogo *)jogo;
    jogo_->semente = semente;
    free(jogo_->jogo);
    jogo_->jogo = (int *)malloc(jogo_->qtVezes * sizeof(int));
}

void jogaOsDados(void* jogo)
{
    tJogo *jogo_ = (tJogo *)jogo;
    if (jogo_->semente > 0)
        srand(jogo_->semente);
    else if (jogo_->semente < 0)
        srand(time(NULL));
    for (int i = 0; i < jogo_->qtVezes; i++)
    {
        jogo_->jogo[i] = jogo_->min + rand() % jogo_->tam;
    }
}

void printJogo(void* jogo)
{
    tJogo *jogo_ = (tJogo *)jogo;
    printf("( ");
    for (int i = 1; i <= jogo_->qtVezes; i++)
    {
        printf("%d", jogo_->jogo[i - 1]);
        if (i < jogo_->qtVezes)
            printf(", ");
        else
            printf(")\n");
    }
}