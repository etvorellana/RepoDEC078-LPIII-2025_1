#include <stdio.h>
#include <stdbool.h>

// Definição da estrutura Data
typedef struct Data{
    int dia;
    int mes;
    int ano;
    // Ponteiros para funções que operam com datas
    void (*imprimir)(struct Data *);
    bool (*validar)(struct Data *);
} Data;

// Função para imprimir a data
void imprimirData(Data* data) {
    printf("Data: %02d/%02d/%04d\n", data->dia, data->mes, data->ano);
}

// Função para validar a data
bool validarData(Data* data) {
    if (data->mes < 1 || data->mes > 12) return false;
    if (data->dia < 1 || data->dia > 31) return false;
    // Verificação simplificada para meses com 30 dias
    if ((data->mes == 4 || data->mes == 6 || data->mes == 9 || data->mes == 11) && data->dia > 30) return false;
    // Verificação para fevereiro
    if (data->mes == 2) {
        // Verificação de ano bissexto
        bool bissexto = (data->ano % 4 == 0 && data->ano % 100 != 0) || (data->ano % 400 == 0);
        if (data->dia > 29 || (data->dia == 29 && !bissexto)) return false;
    }
    return true;
}

// Função para inicializar a estrutura Data
void inicializarData(Data* data, int dia, int mes, int ano) {
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
    data->imprimir = imprimirData;
    data->validar = validarData;

    if (!data->validar(data)) {
        data->dia = 1;
        data->mes = 1;  
        data->ano = 1900;
    }
}

int main() {
    Data data1;
    inicializarData(&data1, 29, 2, 2020); // Data válida (ano bissexto)

    data1.imprimir(&data1);
    if (data1.validar(&data1)) {
        printf("Data válida.\n");
    } else {
        printf("Data inválida.\n");
    }

    Data data2;
    inicializarData(&data2, 31, 4, 2021); // Data inválida (abril tem apenas 30 dias)

    data2.imprimir(&data2);
    if (data2.validar(&data2)) {
        printf("Data válida.\n");
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}