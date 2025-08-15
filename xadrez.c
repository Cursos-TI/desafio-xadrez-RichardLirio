#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int casas,i;

    printf("Digite o numero de casas que deseja movimentar o Bispo para a cima,direita...\n");
    scanf("%d", &casas);

    for (i = 0; i < casas; i++){
        printf("Cima,Direita\n");
    }

    printf("Digite o numero de casas que deseja movimentar a Torre para cima...\n");
    scanf("%d", &casas);

    for (i = 0; i < casas; i++){
        printf("Cima\n");
    }

    printf("Digite o numero de casas que deseja movimentar a Rainha para esquerda...\n");
    scanf("%d", &casas);

    for (i = 0; i < casas; i++){
        printf("Esquerda\n");
    }

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo 5 casas direita
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre 5 casas pra cima
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha 8 casas esquerda
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
