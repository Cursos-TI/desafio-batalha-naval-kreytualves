#include <stdio.h>



#define TAM 10
#define NAVIO 3
#define TAM_NAVIO 3

int main() {
    
    int tabuleiro[TAM][TAM];
    int i, j;
    
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    int linha_horizontal = 2;
    int coluna_horizontal = 4;
    
    int linha_vertical = 5;
    int coluna_vertical = 1;
    
    for (j = 0; j < TAM_NAVIO; j++){
        tabuleiro[linha_horizontal][coluna_horizontal + j] = NAVIO;
    }
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha_vertical + i][coluna_vertical] == 0) {
            (tabuleiro[linha_vertical + i][coluna_vertical]) = NAVIO;
        }
    }
    
    printf("***Tabuleiro Batalha Naval***\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d", tabuleiro [i][j]);
        }
        printf("\n");
    }
    

    return 0;
}