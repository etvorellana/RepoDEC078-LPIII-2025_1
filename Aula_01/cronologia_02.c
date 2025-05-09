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
    
    // Questão 2. Como podemos verificar se a data é válida?
    int dataOk = 1;
    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        dataOk = 0;
    }else if (dia < 1 || dia > 31) {
        printf("Dia inválido.\n");
        dataOk = 0;
    }else if (((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) ) {
        printf("Dia inválido.\n");
        dataOk = 0;
    }else if(mes == 2) {
        // Verificação de ano bissexto
        int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        if (dia > 29 || (dia == 29 && !bissexto)) {
            printf("Dia inválido.\n");
            dataOk = 0;
        }
    }
    if (dataOk)
        printf("Data: %02d/%02d/%04d\n", dia, mes, ano);

    //Questão 3. Como podemos armazenar múltiplas datas?
    return 0;
} // Fim da função main