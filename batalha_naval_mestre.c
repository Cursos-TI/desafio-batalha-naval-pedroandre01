#include <stdio.h>

void exibirMatriz(int matriz[][5], int linhas, int colunas, const char* nome) {
    printf("\n%s:\n", nome);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Habilidade: Cone (3x5)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // Habilidade: Cruz (3x5)
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Habilidade: Octaedro (3x5)
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Exibir todas
    exibirMatriz(cone, 3, 5, "Habilidade: Cone");
    exibirMatriz(cruz, 3, 5, "Habilidade: Cruz");
    exibirMatriz(octaedro, 3, 5, "Habilidade: Octaedro");

    return 0;
}
