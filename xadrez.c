#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarPeca(int casas, int direcao){
    if(casas > 0){
        switch(direcao){
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

        movimentarPeca((casas - 1),direcao);
    }
};

void movimentarBispo(int casas, char movimento1[10], char movimento2[10]){
    if(casas > 0){
        printf("%s,%s\n", movimento1, movimento2);
        movimentarBispo(casas -1, movimento1, movimento2);
    }
}

int main() {
    int casas,i,direcaoBispo1,direcaoBispo2,direcao;
    int movimentoCompleto = 1;
    int direcao2CasasCavalo,direcao1CasaCavalo;
    char movimentoBispo1[10], movimentoBispo2[10];

    // BISPO
    printf("----------BISPO----------\n");
    do {

        printf("Digite a direção primaria da diagonal do Bispo\nSendo:\n1. Cima\n2. Baixo\n");
        scanf("%d", &direcaoBispo1);

        if (direcaoBispo1 >= 3 || direcaoBispo1 == 0){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcaoBispo1 > 2 || direcaoBispo1 == 0);

    if (direcaoBispo1 == 1 ){
         strcpy(movimentoBispo1, "Cima");
    } else{
        strcpy(movimentoBispo1, "Baixo");
    }

    do {

        printf("Digite a direção secundaria da diagonal do Bispo\nSendo:\n1. Esquerda\n2. Direita\n");
        scanf("%d", &direcaoBispo2);

        if (direcaoBispo2 >= 3 || direcaoBispo2 == 0){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcaoBispo2 > 2 || direcaoBispo2 == 0);

    if (direcaoBispo2 == 1 ){
        strcpy(movimentoBispo2, "Esquerda");
    } else{
        strcpy(movimentoBispo2, "Direita");
    }

    printf("Agora digite o numero de casas para movimentar o Bispo...\n");
    scanf("%d", &casas);

    movimentarBispo(casas, movimentoBispo1, movimentoBispo2);

    // TORRE
    printf("----------TORRE----------\n");
    do {

        printf("Digite a direção da movimentação da Torre\nSendo:\n1. Cima\n2. Baixo\n3. Direita\n4. Esqueda\n");
        scanf("%d", &direcao);

        if (direcao >= 5 || direcao == 0){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcao > 4 || direcao == 0);

    printf("Digite o numero de casas que deseja movimentar a Torre...\n");
    scanf("%d", &casas);

    movimentarPeca(casas,direcao);

    
    // RAINHA
    printf("----------RAINHA----------\n");
    do {

        printf("Digite a direção da movimentação da Rainha\nSendo:\n1. Cima\n2. Baixo\n3. Direita\n4. Esqueda\n");
        scanf("%d", &direcao);

        if (direcao >= 5 || direcao == 0){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcao > 4 || direcao == 0);

    printf("Digite o numero de casas que deseja movimentar a Rainha...\n");
    scanf("%d", &casas);

    movimentarPeca(casas,direcao);

    // CAVALO
    printf("----------CAVALO----------\n");
    do {

        printf("Digite a direção das duas casas do Cavalo...\nSendo:\n1. Cima\n2. Baixo\n3. Direita\n4. Esqueda\n");
        scanf("%d", &direcao2CasasCavalo);

        if (direcao2CasasCavalo >= 5 || direcao2CasasCavalo == 0){
            printf("Direção invalida!\n");
            printf("Digite novamente.\n");
        }

    }  while (direcao2CasasCavalo > 5 || direcao2CasasCavalo == 0);

    

    do {

        printf("Agora digite a direção das casa final do Cavalo para formar o L...\nSendo:\n1. Esquerda\n2. Direita\n");
        scanf("%d", &direcao1CasaCavalo);

        if (direcao1CasaCavalo >= 3|| direcao1CasaCavalo == 0){
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


    return 0;
}
