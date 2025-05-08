#include <stdio.h>

int main(void){
    int nota1, nota2, notaMedia;

    printf("insira sua primeira nota\n");
    scanf("%d",&nota1);

    printf("insira sua segunda nota\n");
    scanf("%d",&nota2);

    notaMedia = (nota1 + nota2) / 2;

    printf("%d\n", notaMedia);

    return 0;
}

// pra fazer com float, %f puxa a var, %.2f formata a var, para aparecer somente duas casas decimais

// int main(void){
//     float nota1, nota2, notaMedia;

//     printf("insira sua primeira nota\n");
//     scanf("%f",&nota1);

//     printf("insira sua segunda nota\n");
//     scanf("%f",&nota2);

//     notaMedia = (nota1 + nota2) / 2.0;

//     printf("%.2f\n", notaMedia);


//     return 0;
// }
