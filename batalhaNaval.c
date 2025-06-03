#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    int tabuleiro[10][10] ={
    {0,0,0,0,0,0,3,3,3,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,3,0,0,0,0,0,0},
    {0,0,0,3,0,0,0,3,0,0},
    {0,0,0,3,0,0,3,0,0,0},
    {0,0,0,0,0,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,3,0,0},
    {0,0,0,0,0,0,0,0,3,0},
    {0,0,0,0,0,0,0,0,0,3}
    };

    for (int i = 0; i < 10; i++) { // esse vai ser pra linhas
        for (int j = 0; j < 10; j++) { // esse é pras colunas
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");  // quebra de linha pra cada linha da matriz
    };

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    int cone[5][3] ={
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    int octaedro[5][3] ={
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int cruz[5][3] ={
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    // Aplicando habilidade cone
    int linha_cone = 2;
    int coluna_cone = 3;
    
    printf("Aplicando Cone em (%d,%d):\n", linha_cone, coluna_cone);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int linha_tab = linha_cone - 1 + i;  
            int coluna_tab = coluna_cone - 2 + j;
            
            // Verifica se está dentro do tabuleiro
            if (linha_tab >= 0 && linha_tab < 10 && coluna_tab >= 0 && coluna_tab < 10) {
                if (cone[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] != 3) {
                    tabuleiro[linha_tab][coluna_tab] = 5;
                }
            }
        }
    }
    
    // Mostrando tabuleiro com Cone
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Aplicando habilidade cruz
    int linha_cruz = 5;
    int coluna_cruz = 5;
    
    printf("Aplicando Cruz em (%d,%d):\n", linha_cruz, coluna_cruz);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int linha_tab = linha_cruz - 1 + i;
            int coluna_tab = coluna_cruz - 2 + j;
            
            if (linha_tab >= 0 && linha_tab < 10 && coluna_tab >= 0 && coluna_tab < 10) {
                if (cruz[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] != 3) {
                    tabuleiro[linha_tab][coluna_tab] = 5;
                }
            }
        }
    }
    
    // Mostrando tabuleiro com Cruz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Aplicando habilidade octaedro
    int linha_octaedro = 7;
    int coluna_octaedro = 7;
    
    printf("Aplicando Octaedro em (%d,%d):\n", linha_octaedro, coluna_octaedro);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int linha_tab = linha_octaedro - 1 + i;
            int coluna_tab = coluna_octaedro - 2 + j;
            
            if (linha_tab >= 0 && linha_tab < 10 && coluna_tab >= 0 && coluna_tab < 10) {
                if (octaedro[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] != 3) {
                    tabuleiro[linha_tab][coluna_tab] = 5;
                }
            }
        }
    }
    
    // Mostrando tabuleiro com Octaedro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
