#include <stdio.h>

int main(){

//  Nível Aventureiro - Movimentação das Peças
printf("=== Desafio: Jogo do Xadrez - MateCheck ===\n");

    printf("\nMovendo o Bispo na diagonal superior direita (5 casas)...\n");

    // Estrutura de repetição utilizada: for
    for(int i = 0; i < 5; i++){
        printf("Cima\n"); // Imprime 5 vezes "Cima"
        printf("Direita\n"); // Imprime 5 vezes "Direita"
    }


    // Variáveis do código para a Torre
    int j = 0;
    int torre = 5;

    printf("\nMovendo a Torre para a direita (5 casas)...\n");

    // Estrutura de repetição utilizada: while
    while (j < torre) {
        printf("Direita\n"); // Imprime 5 vezes "Direita"
        j++;
    }


    // Variáveis do código para a Torre
    int k = 0;
    int rainha = 8;

    printf("\nMovendo a Rainha para a esquerda (8 casas)...\n");
   
    // Estrutura de repetição utilizada: do-while
    do {
    printf("Esquerda\n"); // Imprime 8 vezes "Esquerda"
    k++;
    } while (k < rainha);

    // Variáveis do código para a Cavalo
    int movimento1 = 1;

    printf("\nMovendo o Cavalo em L para baixo à esquerda (3 casas)...\n");

    while(movimento1--)
    {
        for(int movimento2 = 0; movimento2 < 2; movimento2++) { 
            printf("Baixo\n"); // Imprime 2 vezes "Baixo"
        }
        printf("Esquerda\n"); // Imprime 1 vez "Esquerda"
    }

return 0;
}