#include <stdio.h>

// Funções de comparação
int compararInteiros(int a, int b) {
    return a - b;
}

int compararFloats(float a, float b) {
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}

// Função genérica de comparação
int comparar(void *a, void *b, int (*comparador)(void *, void *)) {
    return comparador(a, b);
}

int main() {
    int num1 = 10, num2 = 20;
    float f1 = 3.14, f2 = 2.71;

    // Usando a função genérica com diferentes comparadores
    printf("Comparação de inteiros: %d\n", comparar(&num1, &num2, (int (*)(void *, void *))compararInteiros));
    printf("Comparação de floats: %d\n", comparar(&f1, &f2, (int (*)(void *, void *))compararFloats));

    return 0;
}