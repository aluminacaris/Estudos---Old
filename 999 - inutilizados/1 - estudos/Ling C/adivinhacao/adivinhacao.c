
#include <stdio.h>

//DEFINE CONSTANTE
//#define TENTATIVAS 5

int main (void) {

    //imprime coisa do jogo no terminal/compliador
    // \n pula linha !
    printf("**********************************\n");
    printf("* Bem vindo ao jogo de adivinhar *\n");
    printf("**********************************\n");

   int numerosecreto = 24;

        //%d puxa a variavel, q precisa ficar no segundo argumento (depois da virgula)
// printf("o numero secreto eh %d", numerosecreto);

    int chute;
    int ganhou = 0;
    int tentativas = 0;

                  //reps 
    //for(int i = 1; i <= TENTATIVAS; i++) { //loop em for finito
      while(ganhou == 0){

      printf("tentativa %d\n", tentativas + 1);  
      printf("qual eh o seu chute? \n");

      scanf("%d", &chute);
      printf("seu chute foi %d \n", chute);
    
    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(chute < 0){
      
      printf("nao chuta numero negativo burro\n");
      continue;
    }
 
    else if(acertou){
            // if n precisa necessariamente de um else...

      printf("Boa seu chute esta certo \n");
         //return 0; // *break;* funciona melhor, ele leva pra prox linha dps do } do for, result 0; só finaliza
      //break; usa pro for ou deixa o while(1) (loop infinito)
      ganhou = 1;
     }
    
    else if(maior){
     printf("seu chute foi maior, quase ne safado \n");
   }

    else {
     printf("seu chute foi mais baixo, quase em maluco \n");
    }
     tentativas++;
      }
    printf("fim de jogo!\n");
    printf("vc acertou em %d tentativas\n", tentativas);
}


 // int variavelx;
 // int variavely;


 // printf("escreva as variaveis \n");
 // scanf("%d", &variavelx);
 // scanf("%d", &variavely);
 //int result = variavelx * variavely;
 //printf("suas variaveis multiplicadas s�o %d * %d = %d \n", variavelx, variavely, result);
