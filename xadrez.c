#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("*** Novato - Movimentação das Peças *** \n");
    printf("\n");
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
   
    int BispoCima = 1;
    int BispoDireita = 1;
    int Torre = 1;
    int Rainha = 1;
   
    while (BispoCima <= 5) {
        printf("%d - Bispo em diagonal para cima \n", BispoCima);
        // O valor de 'i' nunca é incrementado
        BispoCima++;
    }
    printf("\n");
    while (BispoDireita <= 5) {
        printf("%d - Bispo em diagonal para direita \n", BispoDireita);
        // O valor de 'i' nunca é incrementado
        BispoDireita++;
    }

    printf("\n");
   
    do {
        printf("%d - Torre para a direita \n", Torre);
        Torre++;
    } while (Torre <= 5);

    printf("\n");

    for (Rainha; Rainha <= 8; Rainha++) {
        printf("%d - Rainha para a esquerda \n", Rainha);
    }
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
