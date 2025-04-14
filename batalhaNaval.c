#include <stdio.h>

int main() {

    int tabuleiro[10][10];

    //Inicializa o tabuleiro com 0
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //Posiciona navio horizontal 
    int linhaH = 2;      //linha inicial
    int colunaH = 4;     //coluna inicial

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    //Posiciona navio vertical
    int linhaV = 5;      //linha inicial
    int colunaV = 1;     //coluna inicial

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    //Cabeçalho das colunas
    printf("    ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    //Linha separadora
    printf("   --------------------\n");

    //Exibe o tabuleiro com numeração nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d | ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}