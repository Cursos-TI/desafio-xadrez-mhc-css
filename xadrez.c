/*
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
*/

#include <stdio.h>

// Função de movimento da Torre
void movimentoTorre(int direitaTorre) {
    // Função Recursiva [Horizontal Direita x5]
    if (direitaTorre > 0) {
        printf("Direita\n");
        // Chamada recursiva
        movimentoTorre(direitaTorre - 1); // Recursivamente chama a si mesmo com valor decrementado em valor 1.
    } // Quando "direitaTorre" chega a 0, a função recursiva encerra.
}

// Função de movimento do Bispo
void movimentoBispo(int cimaBispo, int direitaBispo, int passosBispo) {
    if (passosBispo > 0) {
        // Loop exterior
        for (int i = 0; i < 1; i++) {
            // Loop interior
            for (int k = 0; k < 1; k++) {
                printf("Cima Direita\n");
            }
        }
        // Chamada recursiva
        movimentoBispo(cimaBispo + 1, direitaBispo + 1, passosBispo - 1); // Mesmo conceito da Torre, porém com [incremento 1]
    } // nas variáveis verticais [mesmo que redundantes].
}

// Função de movimento da Rainha
void movimentoRainha(int esquerdaRainha) {
    // Função Recursiva [Esquerda x 8]
    if (esquerdaRainha > 0) {
        printf("Esquerda\n");
        // Chamada recursiva
        movimentoRainha(esquerdaRainha - 1);
    }
}

// Função de movimento do Cavalo
void movimentoCavalo() {
    // Loop exterior [Cima x 2...]
    for (int verticalCavalo = 0; verticalCavalo < 2; verticalCavalo++) {
        // Enquanto "verticalCavalo < 2" continua a rodar.
        printf("Cima\n");
        // Quando "verticalCavalo = 1", começa a simular o movimento horizontal [Direita]
        if (verticalCavalo == 1) {
            // Loop interior [...Direita x 1]
            for (int horizontalCavalo = 0; horizontalCavalo < 1; horizontalCavalo++) {
                if (horizontalCavalo == 0) {
                    printf("Direita\n");
                    continue; // Continua pra próxima iteração do loop interior
                }
                break; // Sai do loop interior
            }
        }
    }
}

int main() {
    // Tela Inicial
    printf("Movimentacao de Pecas de Xadrez.\n");
    printf("Digite qualquer tecla para iniciar...\n");

    getchar(); // Espera o usuário digitar uma tecla para começar.

    // Título P1
    printf("\nTORRE (Movimento):\n");

    // Função Recursiva [Direita x 5]
    int direitaTorre = 5;
    movimentoTorre(direitaTorre); // Chama a função recursiva.

    // Título P2
    printf("\nBISPO (Movimento):\n");

    // Função Recursiva [Cima Direita x 5]
    int passosBispo = 5;
    movimentoBispo(0, 0, passosBispo); // Chama a função recursiva.

    // Título P3
    printf("\nRAINHA (Movimento):\n");

    // Função Recursiva [Esquerda x 8]
    int esquerdaRainha = 8;
    movimentoRainha(esquerdaRainha); // Chama a função recursiva.

    // Título P4
    printf("\nCAVALO (Movimento):\n");

    // Função Recursiva [Cima x 2, Direita x 1]
    movimentoCavalo(); // Chama a função de movimentação do Cavalo.

    // Tela Inicial
    printf("\nDigite qualquer tecla para encerrar...\n");

    getchar(); // Espera o usuário digitar uma tecla para encerrar.
    getchar(); // Não fecha o prompt imediatamente após êxito de códigos anteriores (\n).
}
