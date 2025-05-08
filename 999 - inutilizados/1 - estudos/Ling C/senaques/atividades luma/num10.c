#include <stdio.h>

#define TAM 10

int main() {
    int vetor[TAM];
    int maior, posicao;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;

    for (int i = 1; i < TAM; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O maior numero e %d, na posicao %d.\n", maior, posicao + 1);

    return 0;
}
