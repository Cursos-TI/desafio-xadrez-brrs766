#include <stdio.h>

// Função recursiva para a Torre
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

// Função recursiva para a Rainha
void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// Função recursiva para o Bispo com loops aninhados (1 movimento = 1 vertical + 1 horizontal)
void movimentoBispo(int casas) {
    if (casas > 0) {
        for (int v = 0; v < 1; v++) {
            printf("Cima\n");
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
            }
        }
        movimentoBispo(casas - 1);
    }
}

int main() {
    printf("=== Desafio: Jogo do Xadrez - MateCheck ===\n");

    // BISPO
    printf("\nMovendo o Bispo na diagonal superior direita (5 casas)...\n");
    movimentoBispo(5);

    // TORRE
    printf("\nMovendo a Torre para a direita (5 casas)...\n");
    movimentoTorre(5);

    // RAINHA
    printf("\nMovendo a Rainha para a esquerda (8 casas)...\n");
    movimentoRainha(8);

    // CAVALO com loops aninhados, continue e break
    printf("\nMovendo o Cavalo em L (duas casas para cima e uma para a direita)...\n");

    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
                break;
            }
        } else {
            printf("Cima\n");
            continue;
        }
    }

    return 0;
}
