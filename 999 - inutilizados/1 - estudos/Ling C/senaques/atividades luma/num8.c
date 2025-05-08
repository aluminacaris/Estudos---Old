#include <stdio.h>

#define TAM 10

int main() {
    int vetor[TAM];
    int numeroInicial, razao;

    printf("Digite o numero inicial: ");
    scanf("%d", &numeroInicial);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    for (int i = 0; i < TAM; i++) {
        vetor[i] = numeroInicial + i * razao;
    }

    printf("Termos da P.A.:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
