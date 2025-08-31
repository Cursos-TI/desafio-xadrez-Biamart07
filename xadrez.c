#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    int movimentacao_bispo = 5;
    int movimentacao_torre = 5;
    int movimentacao_rainha = 8;
    int movimentacao_cavaloBaixo = 2;
    int movimentacao_cavaloEsquerda = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("--- Movimento do Bispo ---\n");
    int contador_bispo = 1;
    while (contador_bispo <= movimentacao_bispo) {
    printf("Casa %d: Cima, Direita\n", contador_bispo);
    contador_bispo++;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("--- Movimento da Torre ---\n");
    for (int i = 1; i <= movimentacao_torre; i++ ){
    printf("Casa %d: Direta\n", i);
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    int contador_rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= movimentacao_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("--- Movimentação da Cavalo ---\n");

    for (int i = 1; i <= movimentacao_cavaloBaixo; i++) {
        int contador = 0;

        while (contador < i) {
            contador++;
        }

        printf("Baixo (casa %d)\n", i);
    }

        int k = 0;
        while (k < movimentacao_cavaloEsquerda) {
            printf("Esquerda (casa %d)\n", k + 1);
            k++;
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
