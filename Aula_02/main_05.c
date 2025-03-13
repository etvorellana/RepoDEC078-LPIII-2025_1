#include <stdio.h>
#include <stdlib.h> //para poder utilizar a função rand()
#include <time.h>   //para poder utilizar a funçao time()

// Declaração de cabeçalho da função
void jogaOsDados(int min, int tam, int qtVezes, int semente);

int main(void)
{ 
    printf("Implementando funções\n");
    printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
    printf("RAND_MAX = %d\n", RAND_MAX);
    printf("Simulando 10 lançamentos de um dado:\n");
    // 0 indica que a semente será a semente padrão do sistema
    jogaOsDados(1, 6, 10, 0); // chamada da função
    printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
    int semente;
    printf("Entre com a semente para gerar uma nova sequencia: ");
    int err = scanf("%d", &semente);
    // O valor positivo indica que a semente será escolhida pelo usuário
    jogaOsDados(1, 6, 10, semente); // chamada da função
    printf("Sementes diferentes irão gerar resultados diferentes!\n");
    printf("A mesma semente gera o mesmo resultado!\n");
    printf("Escolhendo a semente de forma automática\n");
    // O valor negativo indica que a semente será escolhida automaticamente
    jogaOsDados(1, 6, 10, -1); // chamada da função
    printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
    return 0;
}

// Implementação da função
void jogaOsDados(int min, int tam, int qtVezes, int semente)
{
    if (semente > 0)
        srand(semente);
    else if (semente < 0)
        srand(time(NULL));
    printf("( ");
    int dado;
    for (int i = 1; i <= qtVezes; i++)
    {
        dado = min + rand() % tam;
        printf("%d", dado);
        if (i < qtVezes)
            printf(", ");
        else
            printf(")\n");
    }
}