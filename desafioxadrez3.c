#include <stdio.h>

// Nível Mestre - Movimentação de Peças

// Função recursiva que simula o movimento do Bispo
void movimentoBispo(int movimento1) {
    if (movimento1 < 5) {
        for (int movimento2 = 0; movimento2 < 1; movimento2++) {
            printf("Cima\n");
            printf("Direita\n");
        }
        // Chamada recursiva
        movimentoBispo(movimento1 + 1);
    }
}
//Função recursiva que simula o movimento da Torre
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        // Chamada recursiva
        movimentoTorre(casas - 1);
    }
}

// Função recursiva que simula o movimento da Rainha
void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        // Chamada recursiva
        movimentoRainha(casas - 1);
    }
}

int main() {

    printf("=== Desafio: Jogo de Xadrez - MateCheck ===\n");

    // Simula o movimento do Bispo por 5 casas na diagonal superior direita
    printf("\nMovendo o Bispo na diagonal superior direita (5 casas)...\n");
    movimentoBispo(0);

    // Simula o movimento da Torre para a direita por 5 casas
    printf("\nMovendo a Torre para a direita (5 casas)...\n");
    movimentoTorre(5);

    // Simula o movimento da Rainha para a esquerda por 8 casas
    printf("\nMovendo a Rainha para a esquerda (8 casas)...\n");
    movimentoRainha(8);

    // Simula o movimento do Cavalo em "L": 2 para cima e 1 para a direita
    printf("\nMovendo o Cavalo em L para cima à direita (3 casas)...\n");

    //Loops complexos que representa o movimento do Cavalo
    for (int movimentocavalo1 = 0, movimentocavalo2 = 0; movimentocavalo1 < 2 || movimentocavalo2 < 1;) {
        if (movimentocavalo1 < 2) {
            printf("Cima\n");
            movimentocavalo1++;
            continue;
        }

        if (movimentocavalo2 < 1) {
            printf("Direita\n");
            movimentocavalo2++;
            break;
        }
    }

    return 0;
}
