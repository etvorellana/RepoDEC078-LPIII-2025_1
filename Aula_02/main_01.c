/*
    Um identificador válido e uma série de caracteres que
    consistentes em letras, dígitos e sublinhados:
    - não pode começar com dígito,
    - não pode ser uma palavra reservada da linguagem,
    - apenas letras do alfabeto inglês podem ser utilizadas.
    - um identificador pode ter qualquer cumprimento, apenas
    os 31 primeiros caracteres são reconhecidos,
    - a linguagem C, é case sensitive, os caracteres minúsculos
    e maiúsculos são diferentes.
*/

#include <stdio.h>
#include <limits.h>

#define TRUE  1
#define FALSE 0

int main(void)
{ 
    printf("Declaração de Variáveis\n");
    int a; // declarando uma variável de tipo inteiro
    a = 1; // inicializando a variável

    // Declarações podem aparecer em qualquer lugar do código
    int b = 2; // declarando e inicializando

    // Modificadores
    printf("O tipo int\n");
    printf("int: %lu BYTES\n", sizeof(int));
    printf("INT_MIN= %d, INT_MAX= %d\n", INT_MIN, INT_MAX);

    printf("Moificadores: \n");
    printf("long int: %lu BYTES\n", sizeof(long int));
    printf("LONG_MIN= %ld, LONG_MAX= %ld\n", LONG_MIN, LONG_MAX);
    long int la = 2L; // declarando e inicializando

    printf("unsigned int: %lu BYTES\n", sizeof(unsigned int));
    printf("UINT_MAX= %u\n", UINT_MAX);
    unsigned int ua, ub; // declarando múltiplas variáveis
    ua = ub = 3U; // inicializando múltiplas variáveis

    printf("short int: %lu BYTES\n", sizeof(short int));
    printf("SHRT_MIN= %d, SHRT_MAX= %d\n", SHRT_MIN, SHRT_MAX);
    short int sa = -3;

    printf("unsigned short int: %lu BYTES\n", sizeof(unsigned short int));
    printf("USHRT_MAX= %u\n", USHRT_MAX);
    unsigned short int usa = 3;

    printf("unsigned long int: %lu BYTES\n", sizeof(unsigned long int));
    printf("ULONG_MAX= %lu\n", ULONG_MAX);
    unsigned long int ula = 4UL, ulb; // declarando e inicializando

    printf("Para continuar entre com um inteiro: ");
    scanf("%u", &ua);  // entrada de dados, lendo um inteiro sem sinal

    // Lembrando da necessidade de inicializar as variáveis
    printf("Declaração e Inicialização de Variáveis\n");
    printf("Variáveis int: %d, %ld, %u, %u, %d, %lu, %lu \n", a, la, ua, ub, sa, ula, ulb);
    printf("________________________________________\n");

    // Operadores com int
    printf("Operadores con int e suas variações\n");
    printf("________________________________________\n");
    printf("Operador de atribuição\n");
    a = 5; // Operador de atribuição
    int a1, a2, a3, a4, a5;
    // atribuições múltiplas em um único comando
    a1 = a2 = a3 = a4 = a5 = a;
    printf("a = %d, a1 = %d, a2 = %d\n", a, a1, a2);
    printf("a3 = %d, a4 = %d, a5 = %d\n", a3, a4, a5);
    printf("________________________________________\n");

    printf("Para continuar entre com um inteiro: ");
    scanf("%u", &ua);

    // Operadores Aritméticos
    printf("Operadores binários\n");
    // Operadores binários
    a = a1 + a2; // adição
    printf("%d + %d = %d\n", a1, a2, a);
    a3 = a2 - a4; // substração
    printf("%d - %d = %d\n", a2, a4, a3);
    a4 = -a5; // utilizado como operador unário
    printf("-%d = %d\n", a5, a4);
    a2 = a1 * a3; // multiplicação
    printf("%d * %d = %d\n", a1, a3, a2);
    a = 4 / 2; // Divisão inteira
    printf("4 / 2 = %d\n", a);
    a = 5 / 2; // Divisão inteira (truncada)
    printf("5 / 2 = %d\n", a);
    a = 5 % 2; // Resto da divisão
    printf("5 \%% 2 = %d\n", a);
    printf("________________________________________\n");

    printf("Para continuar entre com um inteiro: ");
    scanf("%u", &ua);

    // Operadores de incremento e decremento
    printf("Operadores de Incremento e decremento\n");
    printf("a = %d\n", a);
    //++a; // a = a + 1
    printf("++a = %d\n", ++a);
    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);
    //--a;
    printf("--a = %d\n", --a);
    printf("a-- = %d\n", a--);
    printf("a = %d\n", a);
    printf("________________________________________\n");

    printf("Para continuar entre com um inteiro: ");
    scanf("%u", &ua);

    // Operadores compostos
    printf("Operadores de Compostos\n");
    printf("a = %d\n", a);
    a += 5; // a = a + 5
    printf("a += 5 -> a = %d\n", a);
    a -= 3; // a = a - 3
    printf("a -= 3 -> a = %d\n", a);
    a *= 4; // a = a*4
    printf("a *= 4 -> a = %d\n", a);
    a /= 2; // a = a/2
    printf("a /= 2 -> a = %d\n", a);
    a %= 3; // a = a%3
    printf("a \%%= 3 -> a = %d\n", a);
    printf("________________________________________\n");

    printf("Para continuar entre com um inteiro: ");
    scanf("%u", &ua);

    // Operadores Relacionais
    printf("Operadores de Relacionais\n");
    printf("%d > %d = %d\n", a1, a2, a1 > a2);
    printf("%d >= %d = %d\n", a2, a3, a2 >= a3);
    printf("%d < %d = %d\n", a3, a4, a3 < a4);
    printf("%d <= %d = %d\n", a4, a5, a4 <= a5);
    printf("%d == %d = %d\n", a5, a1, a5 == a1);
    printf("%d != %d = %d\n", a5, a1, a5 != a1);
    printf("________________________________________\n");

    printf("Para continuar entre com um inteiro: ");
    scanf("%u", &ua);

    printf("Operadores de Lógicos\n");
    
    printf("Tabela da Verdade\n");
    printf("a \t b \t a&&b \t\t a||b \t\t !a\n");
    printf("%d \t %d \t %d \t\t %d \t\t %d\n", FALSE, FALSE, FALSE && FALSE, FALSE || FALSE, !FALSE);
    printf("%d \t %d \t %d \t\t %d \t\t %d\n", FALSE, TRUE, FALSE && TRUE, FALSE || TRUE, !FALSE);
    printf("%d \t %d \t %d \t\t %d \t\t %d\n", TRUE, TRUE, TRUE && TRUE, TRUE || TRUE, !TRUE);
    printf("%d \t %d \t %d \t\t %d \t\t %d\n", TRUE, FALSE, TRUE && FALSE, TRUE || FALSE, !TRUE);
    printf("________________________________________\n");
    return 0;
}