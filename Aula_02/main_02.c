#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("Declaração de Variáveis\n");
    float x; // declarando uma variável de ponto flutuante

    x = (float)1.0; // inicializando a variável com casting
    // ou
    x = 3.14f; // inicializando a variável com sufixo f

    printf("float: %lu BYTES\n", sizeof(float));
    printf("Valor máximo de um float = %.10e\n", FLT_MAX);
    printf("Valor mínimo de um float = %.10e\n", FLT_MIN);
    printf("Número de dígitos de um float = %d\n", FLT_MANT_DIG);

    double y = 2.0; // declarando e inicializando
    printf("double: %lu BYTES\n", sizeof(double));
    printf("Valor máximo de um double = %.10e\n", DBL_MAX);
    printf("Valor mínimo de um double = %.10e\n", DBL_MIN);
    printf("Número de dígitos de um double = %d\n", DBL_MANT_DIG);
    // Modificadores
    printf("long double: %lu BYTES\n", sizeof(long double));
    printf("Valor máximo de um long double = %Le\n", LDBL_MAX);
    printf("Valor mínimo de um long double = %Le\n", LDBL_MIN);
    printf("Número de dígitos de um double = %d\n", LDBL_MANT_DIG);
    long double z = 4.0L;

    printf("Para continuar entre com um float: ");
    scanf("%f", &x);

    // Lembranop da necessidade de inicializar as variáveis

    printf("Declaração e Inicialização de Variáveis\n");
    printf("Variáveis float: %.2f, %.2f, %.2Lf\n", x, y, z);
    printf("________________________________________\n");
    // Operadores com int
    printf("Operadores con ponto flutuante\n");
    printf("________________________________________\n");
    printf("Operador de atribuição\n");
    y = 5.0; // Operador de atribuição
    double y1, y2, y3, y4, y5;
    // atribuições múltiplas em um único comando
    y1 = y2 = y3 = y4 = y5 = y;
    printf("y = %f, y1 = %f, y2 = %f\n", y, y1, y2);
    printf("y3 = %f, y4 = %f, y5 = %f\n", y3, y4, y5);
    printf("________________________________________\n");

    printf("Para continuar entre com um float: ");
    scanf("%f", &x);

    // Operadores Aritméticos
    printf("Operadores binarios\n");
    // Operadores binários
    y = y1 + y2; // adição
    printf("%f + %f = %f\n", y1, y2, y);
    y3 = y2 - y4; // substração
    printf("%f - %f = %f\n", y2, y4, y3);
    y4 = -y5; // utilizado como operador unario
    printf("-%f = %f\n", y5, y4);
    y2 = y1 * y3; // multiplicação
    printf("%f * %f = %f\n", y1, y3, y2);
    y = 4 / 2.0; // Divisão
    printf("4 / 2.0 = %f\n", y);
    y = 5.0 / 2; // Divisão
    printf("5.0 / 2 = %f\n", y);
    printf("________________________________________\n");

    printf("Para continuar entre com um float: ");
    scanf("%f", &x);

    // Operadores compostos
    printf("Operadores de Compostos\n");
    printf("y = %f\n", y);
    y += 5.3; // y = y + 5.3
    printf("y += 5.3 -> y = %f\n", y);
    y -= 3.14; // y = y - 3.14
    printf("y -= 3.14 -> y = %f\n", y);
    y *= 4.7; // y = y*4
    printf("y *= 4.7 -> y = %f\n", y);
    y /= 2; // y = y/2
    printf("y /= 2 -> y = %f\n", y);
    printf("________________________________________\n");

    printf("Para continuar entre com um float: ");
    scanf("%f", &x);

    // Operadores Relacionais
    printf("Operadores de Relacionais\n");
    printf("%f > %f = %d\n", y1, y2, y1 > y2);
    printf("%f >= %f = %d\n", y2, y3, y2 >= y3);
    printf("%f < %f = %d\n", y3, y4, y3 < y4);
    printf("%f <= %f = %d\n", y4, y5, y4 <= y5);
    printf("%f == %f = %d\n", y5, y1, y5 == y1);
    printf("%f != %f = %d\n", y5, y1, y5 != y1);
    printf("________________________________________\n");

    return 0;
}