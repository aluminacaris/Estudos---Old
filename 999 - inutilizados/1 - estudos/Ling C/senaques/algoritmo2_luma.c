#include <stdio.h>

int main(void){
    int ferradura, cavalo;

    printf("quantos cavalos foram comprados?\n");
    scanf("%d",&cavalo);

    ferradura = cavalo * 4;

    printf("o total de ferraduras eh %d\n", ferradura);

int idade1, idade2, idade3, idade4, mediaIdade;

  printf("qual a 1 idade\n");
  scanf("%d",&idade1);

  printf("qual a 2 idade\n");
  scanf("%d",&idade2);
  
  printf("qual a 3 idade\n");
  scanf("%d",&idade3);
  
  printf("qual a 4 idade\n");
  scanf("%d",&idade4);
  
    mediaIdade = (idade1 + idade2 + idade3 + idade4)/4;
    printf("a media das idades eh %d/n", mediaIdade);
}