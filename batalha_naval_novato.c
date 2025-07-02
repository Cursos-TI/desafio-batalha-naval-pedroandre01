#include <stdio.h>

#define TAM 5

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Posiciona navio vertical (3 células)
    printf("Navio Vertical:\n");
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][2] = 1;
        printf("Coordenada: (%d, %d)\n", i, 2);
    }

    // Posiciona navio horizontal (4 células)
    printf("\nNavio Horizontal:\n");
    for (int j = 0; j <= 3; j++) {
        tabuleiro[4][j] = 1;
        printf("Coordenada: (%d, %d)\n", 4, j);
    }

    return 0;
}
