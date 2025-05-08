#include <stdio.h>

#define TAM 10

int main() {
    float vetor[TAM];
    int countNegativos = 0;
    float somaPositivos = 0.0;

    printf("Preencha o vetor com 10 numeros reais:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] < 0) {
            countNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", countNegativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}
