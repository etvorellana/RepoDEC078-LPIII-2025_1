#include <stdio.h>
#include <stdlib.h>

/*
    Queremos er uma serie de datas, verificar se todas elas 
    são representam datas válidas e imprimir elas em ordem 
    cronológica.
*/

typedef struct Data{
    int dia;
    int mes;
    int ano;
} TData;

int dataValida(TData data){
    if (data.mes < 1 || data.mes > 12) return 0;
    if (data.dia < 1 || data.dia > 31) return 0;
    // Verificação simplificada para meses com 30 dias
    if ((data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) && data.dia > 30) return 0;
    // Verificação para fevereiro
    if (data.mes == 2) {
        // Verificação de ano bissexto
        int bissexto = (data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0);
        if (data.dia > 29 || (data.dia == 29 && !bissexto)) return 0;
    }
    return 1;
}

void entradaDatas(TData *datas, int nDatas){
    for(int i = 0; i < nDatas; i++){
        printf("Digite uma data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
        if (!dataValida(datas[i])){
            printf("Data inválida. Tente novamente\n");
            i--;
        }
    }
}

void imprimeDatas(TData *datas, int nDatas){
    for(int i = 0; i < nDatas; i++){
        printf("Data: %02d/%02d/%04d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }
}

TData* alocaListaTDatas(int n){
    TData *lista;
    lista = (TData *) malloc(n * sizeof(TData));
    if (lista == NULL){
        printf("Erro de alocação de memória\n");
        exit(1);
    }
    return lista;
}

int main(void){
    int dia, mes, ano; 
    // Questão 1. Podemos usar tipos diferentes de int para 
    // representar estas variáveis? Justifique.
    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    TData data = {dia, mes, ano};
    
    // Questão 2. Como podemos verificar se a data é válida?
    if (dataValida(data))
        printf("Data: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);

    //Questão 3. Como podemos armazenar múltiplas datas?
    TData *datas;
    int nDatas = 0;

    printf("Digite o número de datas: ");
    scanf("%d", &nDatas);
    datas = alocaListaTDatas(nDatas);
    entradaDatas(datas, nDatas);
    imprimeDatas(datas, nDatas);
    //Questão 4. Como modularizar o código utilizando funções?
    //Questão 5. Como podemos trabalhar quantidades arbitrarias 
    // de datas?
    free(datas);
    return 0;
    // Questão 6. Como podemos colocar toda a informação de uma 
    // data em uma única variável?
    // Questão 7. Como podemos ordenar as datas em ordem cronológica?
} // Fim da função main