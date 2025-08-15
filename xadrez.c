#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int casas,i;
    int movimentoCompleto = 1;
    int direcao2CasasCavalo,direcao1CasaCavalo;

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

    do {

        printf("Digite a direção das duas casas do Cavalo...\nSendo:\n1. Cima\n2. Baixo\n3. Direita\n4. Esqueda\n");
        scanf("%d", &direcao2CasasCavalo);

        if (direcao2CasasCavalo >= 5 || direcao2CasasCavalo == 0){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcao2CasasCavalo > 2 || direcao2CasasCavalo == 0);

    

    do {

        printf("Agora digite a direção das casa final do Cavalo para formar o L...\nSendo:\n1. Esquerda\n2. Direita\n");
        scanf("%d", &direcao1CasaCavalo);

        if (direcao1CasaCavalo != 1 || direcao1CasaCavalo != 2){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcao1CasaCavalo > 2 || direcao1CasaCavalo == 0);

    

    while (movimentoCompleto--)
    {
        for(i = 0; i < 2; i++){
            switch(direcao2CasasCavalo){
                case 1:
                    printf("Cima\n");
                    break;
                case 2:
                    printf("Baixo\n");
                    break;
                case 3:
                    printf("Direita\n");
                    break;
                case 4:
                    printf("Esquerda\n");
                    break;
            }
        }
        switch(direcao1CasaCavalo){
                case 1:
                    printf("Esquerda\n");
                    break;
                case 2:
                    printf("Direita\n");
                    break;
        }
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
