#include <stdio.h>

#define TAM 5

int main() {
    int vetorA[TAM], vetorB[TAM], vetorResultado[TAM * 2];

    printf("Preencha o primeiro vetor (A):\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nPreencha o segundo vetor (B):\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < TAM; i++) {
        vetorResultado[i * 2] = vetorA[i];
        vetorResultado[i * 2 + 1] = vetorB[i];
    }

    printf("\nVetor Resultante da Intercalacao:\n");
    for (int i = 0; i < TAM * 2; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
