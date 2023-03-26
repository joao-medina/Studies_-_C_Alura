#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("\n \n");
    printf("                            .   .xXXXX+.   .                        \n");
    printf("                    .   ..   xXXXX+.-   ..   .                      \n");
    printf("                .   ..  ... ..xXXXX+. --.. ...  ..   .              \n");
    printf("            .   ..  ... .....xXXXX+.  -.-..... ...  ..   .          \n");
    printf("        .   ..  ... ......xXXXX+.  . .--...... ...  ..   .          \n");
    printf("        .   ..  ... ......xXXXX+.    -.- -...... ...  ..   .        \n");
    printf("        .   ..  ... ......xXXXX+.   .-+-.-.-...... ...  ..   .      \n");
    printf("        .   ..  ... .....xXXXX+. . --xx+.-.--..... ...  ..   .      \n");
    printf("        .   ..  ...====================================.  ..   .    \n");   
    printf("        .   ..  ...= BEM VINDO AO JOGO Da ADIVINHACAO =.  ..   .    \n");
    printf("        .   ..  ...==================================== ..   .      \n");
    printf("        .   ..  ... xXXXX+. . --....xxxxxx+  -.- ...  ..   .        \n");
    printf("        .   ..  ..xXXXX+. . .-......xxxxxx+-. --..  ..   .          \n");
    printf("            .   .. xXXXXXXXXXXXXXXXXXXXxxxxxx+. .-- ..   .          \n");
    printf("                . xXXXXXXXXXXXXXXXXXXXXXxxxxxx+.  -- .              \n");
    printf("                xxxxxxxxxxxxxxxxxxxxxxxxxxxxx+.--                   \n");
    printf("                    xxxxxxxxxxxxxxxxxxxxxxxxxxxxx+-                 \n");
    printf("\n \n");

    //gera um número secreto aleatório:
    int segundos, numerogrande, numsecreto;
    segundos = time(0);
    srand(segundos);
    numerogrande = rand();
    numsecreto = numerogrande % 100;

    int chute, tentativas, pontuacao, limitetentativas, dificuldade, acertou;
    acertou = 0;
    tentativas = 1;
    pontuacao = 1000;

    printf("Escolha uma dificuldade: \n [ 1 ] FACIL\n [ 2 ] MEDIO\n [ 3 ] DIFICIL\n");
    scanf("%d", &dificuldade);
    if(dificuldade == 1) {
        limitetentativas = 10;
        printf("Voce tem %d tentativas.\n", limitetentativas);
    };
    if(dificuldade == 2) {
        limitetentativas = 7;
        printf("Voce tem %d tentativas.\n", limitetentativas);
    };
    if(dificuldade == 3) {
        limitetentativas = 5;
        printf("Voce tem %d tentativas.\n", limitetentativas);
    };
        
    printf("Adivinhe um numero entre 0 e 99: \n");

    for(limitetentativas; limitetentativas > 0; limitetentativas--) {  
        scanf("%d", &chute);

        //caso o numero seja inválido, volta para o início do loop
        if(chute < 0) {
            printf("Numeros negativos sao invalidos, \ntente novamente...\n");
            continue;
        }
        if(chute > 99) {
            printf("Numeros acima de 99 sao invalidos, \ntente novamente...\n");
            continue;
        }

        int maior, menor;
        maior = chute > numsecreto;
        menor = chute < numsecreto;

        if(chute == numsecreto) {
            acertou = 1;
            break;
        } 

        if(limitetentativas == 1) {
            break;
        }

        else if(maior) {
            printf("Tente um numero menor:\n");        
        }

        else if(menor) {
            printf("Tente um numero maior:\n");
        }   

        //atualiza a pontuação:
        tentativas ++; 
        pontuacao -= abs(numsecreto - chute);

    }

    if(acertou == 1) {
        printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);
        printf("Sua pontuacao foi: %d\n", pontuacao);
    }

    else {
        printf("O numero secreto era: %d\n", numsecreto);
        printf("Voce perdeu, tente novamente");
    }

}