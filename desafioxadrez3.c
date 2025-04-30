#include <stdio.h>

// Nível Mestre - Movimentação de Peças

// Função recursiva para o BISPO
   void movimentoBispo (int casa) {

    for (int movimento1 = 0; movimento1 < 1; movimento1++ ) {
        printf("Cima\n");
        for (int movimento2 = 0; movimento2 < 2; movimento2++) {
            printf("Direita\n");
        }
        }
    }


// Função recursiva para a TORRE
    void movimentoTorre (int casas) {
        if (casas > 0) {
            printf("Direita\n");
            movimentoTorre(casas - 1);
        }
    }

// Função recursiva para a RAINHA
    void movimentoRainha (int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            movimentoRainha(casas - 1);
        }
    }



int main () {

    printf("=== Desafio: Jogo de Xadrez - MateCheck===\n");


// Exibindo na tela as movimentações das peças

    printf("\nMovendo o Bispo na diagonal superior direita (5 casas)...\n");
    movimentoBispo(5);

    printf("\nMovendo a Torre para a direita (5 casas)...\n");
    movimentoTorre(5);

    printf("\nMovendo a Rainha para a esquerda (8 casas)...\n");
    movimentoRainha(8);

    printf("\nMovendo o Cavalo em L (3 casas)...\n");

// Loops complexos para o CAVALO
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
