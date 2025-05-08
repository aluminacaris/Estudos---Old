#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int vetor[TAM];
    int numeroBuscado, encontrado = 0;

    srand(time(NULL));

    printf("Numeros sorteados:\n");
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &numeroBuscado);

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == numeroBuscado) {
            printf("O numero %d esta na posicao %d.\n", numeroBuscado, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O numero %d nao esta no vetor.\n", numeroBuscado);
    }

    return 0;
}
