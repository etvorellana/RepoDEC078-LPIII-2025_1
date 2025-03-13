#include <stdio.h>

/*
    A Função main representa o ponto de entrada de um programa
    O Bloco sintáctico associado a esta função, delimitado por 
    chaves{ ... }, é o corpo do programa. 

    A função main pode ter distintas assinaturas (protótipos). 
    A do exemplo a seguir é uma das mais simples. 
*/
int main(void)
{                             // bloco de código
    char name[100];           // Array de caracteres
    printf("Hello World!\n"); // output
    printf("Whats your name?");
    char* err = fgets(name, 100, stdin); // input
    if (err == NULL) {
        printf("Error reading input\n");
        return 1; // termina o programa com sinal de erro (!= 0)
    }
    printf("Hi %s, good to see you here!!!\n", name);
    printf("Ok\n");
    return 0; // termina o programa com sinal de sucesso (0)
}                               // fim do bloco de código


/*
> bin/exemplo_00                                (base) 
Hello World!
Whats your name?Esbel
Hi Esbel
, good to see you here!!!
Ok

1. Repare que o texto ", good to see you here!!!" foi impresso na linha 
seguinte ao "Hi Esbel".
a) Por que isso aconteceu?
b) Como corrigir o problema?
*/