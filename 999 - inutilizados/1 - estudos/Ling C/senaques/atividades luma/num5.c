#include <stdio.h>

#define TAM 7

int main() {
    int vetor[TAM];

    printf("Preencha o vetor com 7 numeros inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros Multiplos de 2:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n\nNumeros Multiplos de 3:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % 3 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n\nNumeros Multiplos de 2 e de 3:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}
