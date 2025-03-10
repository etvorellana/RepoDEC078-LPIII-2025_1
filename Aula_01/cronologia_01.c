#include <stdio.h>

/*
    Queremos er uma serie de datas, verificar se todas elas 
    são representam datas válidas e imprimir elas em ordem 
    cronológica.
*/

int main(void){
    int dia, mes, ano; 
    // Questão 1. Podemos usar tipos diferentes de int para 
    // representar estas variáveis? Justifique.
    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data: %02d/%02d/%04d\n", dia, mes, ano);
    // Questão 2. Como podemos verificar se a data é válida?
    return 0;
} // Fim da função main
    