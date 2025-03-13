#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{ 
    printf("Estruturas de Controle de Fluxo\n");
    printf("Estruturas de Seleção\n");
    int n;
    printf("Entre com um número inteiro:");
    scanf("%d", &n);
    // Estrutura de seleção simples if
    if (n % 2 == 0) // bloco sintático simples
        printf("O número %d é par!\n", n);

    if (n % 2 != 0) // bloco sint composto
    {
        printf("O número %d é impar!\n", n);
        n++;
        printf("O número %d é par!\n", n);
    }

    // Estrutura de seleção if/else
    if (n % 3)
    { // diferente de zero é true, zero é false (n%3 != 0)
        printf("O número %d não é múltiplo de 3!\n", n);
    }
    else
    { //(n%3 == 0)
        printf("O número %d é múltiplo de 3!\n", n);
    }

    // Estruturas if/else aninhada
    if (n % 2 == 0)
    {
        printf("O número %d é par!\n", n);
        if (n % 3)
        {
            printf("O número %d não é múltiplo de 3!\n", n);
        }
        else
        {
            printf("O número %d é múltiplo de 3!\n", n);
        }
    }
    else
    {
        printf("O número %d é impar!\n", n);
        if (n % 3)
        {
            printf("O número %d não é múltiplo de 3!\n", n);
        }
        else
        {
            printf("O número %d é múltiplo de 3!\n", n);
        }
    }

    // Estrutura de seleção múltipla switch-case
    switch (n % 5)
    {
    case 0:
        printf("O número %d é divisível por 5!\n", n);
        break;
    case 1:
        printf("O número %d não é divisível por 5, resto 1!\n", n);
        break;
    case 2:
        printf("O número %d não é divisível por 5, resto 2!\n", n);
        break;
    case 3:
        printf("O número %d não é divisível por 5, resto 3!\n", n);
        break;
    default:
        printf("O número %d não é divisível por 5, resto 4!\n", n);
        break;
    }

    printf("Estruturas de Repetição\n");
    int pot2 = 1;
    int exp2 = 0;
    while (pot2 <= n)
    {
        pot2 *= 2;
        exp2++;
    }
    printf("A primeira potencia de 2 maior que %d é 2^%d = %d\n", n, exp2, pot2);

    printf("Pense num núero inteiro entre 1 100 (incluidos)\n");
    int chute = 50, left = 1, right = 100;
    int cont = 0;
    int op;
    do
    {
        printf("O número que vc pensou é %d?\n", chute);
        printf("Digite: \n");
        printf("0- Para sim;\n");
        printf("1- Para não, é maior;\n");
        printf("2- Para não, é menor;\n");
        scanf("%d", &op);
        cont++;
        switch (op)
        {
        case 0:
            printf("Opa, achei em %d tentativas!!!\n", cont);
            break;
        case 1:
            left = chute;
            chute = (left + right) / 2;
            break;
        case 2:
            right = chute;
            chute = (left + right) / 2;
            break;
        default:
            printf("Resposta Errada!!!!!\n");
            cont--;
        }
    } while (op != 0);

    int soma = 0;
    for (int i = 1; i <= chute; i++)
    {
        soma += i;
    }
    printf("A soma de todos os inteiros de 1 até %d é %d\n", chute, soma);

    (soma == chute * (chute + 1) / 2) ? printf("Resposta correta\n") : printf("Resposta errada\n");

    return 0;
}