#include <stdio.h>

#define TAM 10     // Tamanho do tabuleiro 10x10
#define NAVIO 3    // Valor que representa uma parte de navio

// Função para inicializar o tabuleiro com 0
void inicializarTabuleiro(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = 0;
        }
    }
}

// Função para posicionar quatro navios no tabuleiro
void posicionarNavios(int matriz[TAM][TAM]) {
    // Navio horizontal na linha 1, colunas 2 a 5
    for (int j = 2; j <= 5; j++) {
        matriz[1][j] = NAVIO;
    }

    // Navio vertical na coluna 7, linhas 3 a 6
    for (int i = 3; i <= 6; i++) {
        matriz[i][7] = NAVIO;
    }

    // Navio na diagonal principal (de [0][0] a [3][3])
    for (int i = 0; i <= 3; i++) {
        matriz[i][i] = NAVIO;
    }

    // Navio na diagonal secundária (de [0][9] a [3][6])
    for (int i = 0; i <= 3; i++) {
        matriz[i][9 - i] = NAVIO;
    }
}

// Função para exibir o tabuleiro completo
void exibirTabuleiro(int matriz[TAM][TAM]) {
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}


