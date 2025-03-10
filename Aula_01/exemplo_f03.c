#include <stdio.h>

// Declaração de um ponteiro para função que recebe dois inteiros e retorna um inteiro
int (*operacao)(int, int);

// Funções que correspondem a essa assinatura
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int main() {
    // Atribuindo a função soma ao ponteiro
    operacao = soma;
    printf("Soma: %d\n", operacao(5, 3));  // Saída: 8

    // Atribuindo a função subtracao ao ponteiro
    operacao = subtracao;
    printf("Subtracao: %d\n", operacao(5, 3));  // Saída: 2

    return 0;
}
