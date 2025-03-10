#include <stdio.h>

int soma(int a, int b) { return a + b; }
int subtracao(int a, int b) { return a - b; }
int multiplicacao(int a, int b) { return a * b; }
int divisao(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int (*operacao)(int, int);  // Declaração do ponteiro de função
    int escolha, x = 10, y = 2;

    printf("Escolha a operacao: 0-Soma, 1-Subtracao, 2-Multiplicacao, 3-Divisao\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 0: operacao = soma; break;
        case 1: operacao = subtracao; break;
        case 2: operacao = multiplicacao; break;
        case 3: operacao = divisao; break;
        default: printf("Operacao invalida.\n"); return 1;
    }

    printf("Resultado: %d\n", operacao(x, y));
    return 0;
}
