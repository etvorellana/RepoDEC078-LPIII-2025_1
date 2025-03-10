#include <stdio.h>

// Função de callback
void eventoOcorreu(int codigo) {
    printf("Evento %d ocorreu!\n", codigo);
}

// Função que simula um evento
void simularEvento(void (*callback)(int), int codigo) {
    printf("Simulando evento...\n");
    callback(codigo);
}

int main() {
    // Registrando a função de callback
    simularEvento(eventoOcorreu, 123);

    return 0;
}