#include <stdio.h>

int main (void) {

    int y;
    int produto, quantidade;
    float Valor1, Valor2, Valor3, Valor4, Valor5;

    Valor1 = 5.0;
    Valor2 = 3.5;
    Valor3 = 4.8;
    Valor4 = 8.9;
    Valor5 = 7.32;

    while(1){
        printf("insira o Codigo do produto!\n");
        scanf("%d",&produto);

        float valorFinal;

        if (produto == 1){
            printf("quantos vai comprar?\n");
            scanf("%d",&quantidade);

            valorFinal = quantidade * Valor1;
            printf("%.2f\n", valorFinal);

        }
        else if (produto == 2){
            printf("quantos vai comprar?\n");
            scanf("%d",&quantidade);

            valorFinal = quantidade * Valor2;
            printf("%.2f\n", valorFinal);

        }
        else if (produto == 3){
            printf("quantos vai comprar?\n");
            scanf("%d",&quantidade);

            valorFinal = quantidade * Valor3;
            printf("%.2f\n", valorFinal);

        }
        else if (produto == 4){
            printf("quantos vai comprar?\n");
            scanf("%d",&quantidade);

            valorFinal = quantidade * Valor4;
            printf("%.2f\n", valorFinal);

        }
        else if (produto == 5){
            printf("quantos vai comprar?\n");
            scanf("%d",&quantidade);

            valorFinal = quantidade * Valor5;
            printf("%.2f\n", valorFinal);

        }
        else if (produto > 5 || produto <= 0 ){
            printf("codigo inexistente, tente novamente...\n");
            continue;
        }


    printf("gostaria de comprar mais?\n");
    printf("digite 1 para sim e 2 para nao\n");
    scanf("%d",&y);

        if(y == 1){
            continue;
        }
        else if(y == 2){
            break;
        }       
  }
}