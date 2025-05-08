#include <stdio.h>

#define TAM 5

int main() {
    float precos[TAM], quantidades[TAM];
    float totalVendas = 0.0, comissao, salario = 545.00;
    int posicaoMaisVendido = 0;
    float valorMaisVendido = 0.0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
        printf("Digite a quantidade vendida do produto %d: ", i + 1);
        scanf("%f", &quantidades[i]);
    }

    printf("\nRelatório de Vendas:\n");
    printf("Objeto\tQuantidade\tValor Unitário\tValor Total\n");
    for (int i = 0; i < TAM; i++) {
        float valorTotal = precos[i] * quantidades[i];
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i + 1, quantidades[i], precos[i], valorTotal);
        
        totalVendas += valorTotal;

        if (quantidades[i] > quantidades[posicaoMaisVendido]) {
            posicaoMaisVendido = i;
        }
    }

    comissao = totalVendas * 0.05;
    
    printf("\nValor Geral das Vendas: %.2f\n", totalVendas);
    printf("Comissao do Vendedor: %.2f\n", comissao + salario);
    printf("produto mais vendido: Objeto %d (Quantidade: %.2f)\n", posicaoMaisVendido + 1, quantidades[posicaoMaisVendido]);
    printf("Valor do produto mais vendido: %.2f\n", precos[posicaoMaisVendido]);

    return 0;
}
