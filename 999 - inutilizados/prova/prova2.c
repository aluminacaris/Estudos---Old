#include <stdio.h>

int main() {

    int A[6] = {1, 0, 5, -2, -5, 7}; //letra a

    int soma = A[0] + A[1] + A[5]; //letra b    
    printf("Soma: %d\n\n", soma); 

    A[4] = 100; //letra c

    for (int i = 0; i < 6; i++) { //Letra d
        printf("%d\n", A[i]);
    }
    return 0;
}
