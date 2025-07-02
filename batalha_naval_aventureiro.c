#include <stdio.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Navio vertical (5 células)
    for (int i = 0; i < 5; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio horizontal (4 células)
    for (int j = 4; j < 8; j++) {
        tabuleiro[6][j] = 3;
    }

    // Navio diagonal principal (3 células) — do canto superior esquerdo pra baixo
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária (3 células) — do canto superior direito pra baixo
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][TAM - 1 - i] = 3;
    }

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

