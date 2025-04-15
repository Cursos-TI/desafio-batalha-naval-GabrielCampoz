#include <stdio.h>

int main() {

    // Cria a matriz 10x10
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posiciona o navio na vertical [1,1] [2,1] [3,1]
    int linhaV = 1;
    int colunaV = 1;

    for(int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // Posiciona o navio na horizontal [1,5] [1,6] [1,7]
    int linhaH = 1;
    int colunaH = 5;

    for(int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Posiciona o navio na diagonal [2,3] [3,4] [4,5]
    int linhaD = 2;
    int colunaD = 3;

    for(int i = 0; i < 3; i++) {
        tabuleiro[linhaD + i][colunaD + i] = 3;
    }

    // Posiciona o segundo navio na diagonal [7,3] [8,2] [9,1]
    int linhaD2 = 7;
    int colunaD2 = 3;

    for(int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    printf(" ____________________\n"); // linha de separação horizontal(estética)
    
    // Imprime o tabuleiro no console
    for (int i = 0; i < 10; i++) {
        printf("| "); // linha de separação vertical(estética)
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}