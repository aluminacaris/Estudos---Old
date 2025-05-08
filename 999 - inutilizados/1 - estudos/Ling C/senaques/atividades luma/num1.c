#include <stdio.h>

int main() {
    char l;
    char p[100];
    int count = 0;

    printf("Digite uma letra: ");
    scanf(" %c", &l);

    printf("Digite uma palavra: ");
    scanf("%s", p);

    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] == l) {
            count++;
        }
    }

    printf("A letra '%c' aparece %d vez(es) na palavra '%s'.\n", l, count, p);

    return 0;
}
