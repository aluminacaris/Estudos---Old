#include <stdio.h>
#include <math.h>

#define TAM 10

int main() {
    double vetor[TAM];
    double numeroInicial, razao;

    printf("Digite o numero inicial: ");
    scanf("%lf", &numeroInicial);

    printf("Digite a razao: ");
    scanf("%lf", &razao);

    for (int i = 0; i < TAM; i++) {
        vetor[i] = numeroInicial * pow(razao, i);
    }

    printf("Termos da P.G.:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    return 0;
}
