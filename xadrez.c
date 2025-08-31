#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.


// Torre
    void moverTorre(int casas) {
        if (casas == 0) return; // caso base
        printf("Cima\n");
        moverTorre(casas - 1); // chamada recursiva
    }

// Rainha
    void moverRainha(int casas) {
        if (casas == 0) return;
        printf("Direita\n");
        moverRainha(casas - 1);
    }


//Bispo
    void moverBispo(int casasVerticais, int casasHorizontais) {
        if (casasVerticais == 0 || casasHorizontais == 0) return;

        // Loop externo = vertical
        for (int v = 0; v < casasVerticais; v++) {
            printf("Cima\n");

            // Loop interno = horizontal
            for (int h = 0; h < casasHorizontais; h++) {
                printf("Direita\n");
            }
        }

        // Chamada recursiva (diminui o tabuleiro)
        moverBispo(casasVerticais - 1, casasHorizontais - 1);
    }

// Cavalo
    void moverCavalo(int casasCima, int casasDireita) {
    for (int i = 1, j = 0; i <= casasCima || j < casasDireita; i++, j++) {
        
        if (i <= casasCima) {
            printf("Cima\n");
        }

        if (j < casasDireita) {
            // se já fiz duas casas pra cima, anda pra direita e sai
            if (i > casasCima) {
                printf("Direita\n");
                break; // encerra porque o L foi completo
            }
            continue; // volta pro loop até terminar as casas de cima
        }
    }
}
    

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    int casasTorre = 3;        // torre sobe 3 casas
    int casasRainha = 2;       // rainha anda 2 casas p/ direita
    int casasBispo = 2;        // bispo anda 2 casas na diagonal
    int casasCavaloCima = 2;   // cavalo: 2 cima
    int casasCavaloDireita = 1;// cavalo: 1 direita

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(casasCavaloCima, casasCavaloDireita);
    printf("\n");
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
