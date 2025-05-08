#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j, maior, linha_maior, coluna_maior;

    printf("Digite os elementos da matriz 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    maior = matriz[0][0];
    linha_maior = 0;
    coluna_maior = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Localizado na linha %d e coluna %d\n", linha_maior, coluna_maior);

    return 0;
}
