#include <stdio.h>

#define TAM 6

int main() {
    int vetor[TAM];
    int countPares = 0, countImpares = 0;

    printf("Preencha o vetor com 6 numeros inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros Pares:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
            countPares++;
        }
    }
    printf("\nQuantidade de Numeros Pares: %d\n", countPares);

    printf("\nNumeros Impares:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
            countImpares++;
        }
    }
    printf("\nQuantidade de Numeros Impares: %d\n", countImpares);

    return 0;
}
