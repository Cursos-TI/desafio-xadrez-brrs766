#include <stdio.h>

int main(){

//  Nível Novato - Movimentação das Peças
printf("=== Desafio: Jogo do Xadrez - MateCheck ===\n");

    printf("\nMovendo o Bispo na diagonal superior direita (5 casas)...\n");

    // Estrutura de repetição utilizada: for
    for(int i = 0; i < 5; i++){
        printf("Cima\n");
        printf("Direita\n");
    }


    // Variáveis do código para a Torre
    int j = 0;
    int torre = 5;

    printf("\nMovendo a Torre para a direita (5 casas)...\n");

    // Estrutura de repetição utilizada: while
    while (j < torre) {
        printf("Direita\n");
        j++;
    }


    // Variáveis do código para a Torre
    int k = 0;
    int rainha = 8;

    printf("\nMovendo a Rainha para a esquerda (8 casas)...\n");
   
    // Estrutura de repetição utilizada: do-while
    do {
    printf("Esquerda\n");
    k++;
    } while (k < rainha);

return 0;
}
