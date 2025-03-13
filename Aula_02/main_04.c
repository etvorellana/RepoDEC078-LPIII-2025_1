#include <stdio.h>
#include <stdlib.h> //para poder utilizar a função rand()
#include <time.h>   //para poder utilizar a funçao time()

int main(void)
{     
    printf("Utilizando funções\n");
    printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
    printf("RAND_MAX = %d\n", RAND_MAX);
    /*
        Para gerar números num intervalo utilize a expressão:
            i = a + rand() % b
        - a primeiro número do intervalo desejado,
        - b amplitude do intervalo
        */
    printf("Simulando 10 lançamentos de um dado:\n");
    int dado;
    printf("( ");
    for (int i = 0; i < 10; i++)
    {
        dado = 1 + rand() % 6;
        printf("%d", dado);
        if (i < 9)
            printf(", ");
        else
            printf(")\n");
    }
    printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
    /*
        A função srand(), utiliza um argumento inteiro sem sinal
        para ser a semente da função rand(), permitindo gerar
        sequencias diferentes
    */
    unsigned long int semente;
    printf("Entre com a semente para gerar uma nova sequencia: ");
    scanf("%lu", &semente);
    srand(semente);
    printf("( ");
    for (int i = 0; i < 10; i++)
    {
        dado = 1 + rand() % 6;
        printf("%d", dado);
        if (i < 9)
            printf(", ");
        else
            printf(")\n");
    }
    printf("Sementes diferentes irão gerar resultados diferentes!\n");
    printf("A mesma semente gera o mesmo resultado!\n");

    printf("Escolhendo a semente de forma automática\n");
    srand(time(NULL));
    printf("( ");
    for (int i = 0; i < 10; i++)
    {
        dado = 1 + rand() % 6;
        printf("%d", dado);
        if (i < 9)
            printf(", ");
        else
            printf(")\n");
    }
    printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
    return 0;
}