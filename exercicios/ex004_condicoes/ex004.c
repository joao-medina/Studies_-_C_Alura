#include <stdint.h>

int main() {

    int num;

    printf("Escolha um numero: \n");
    scanf("%d", &num); 

    int maior = (num > 10);
    int menor = (num < 10);
    int igual = (num == 10);   

    if(menor) {
        printf("O numero %d e menor que 10.\n", num);
    }

    else if(maior) {
        printf("O numero %d e maior que 10.\n", num);
    }

    else if(igual) {
        printf("O numero escolhido foi %d.\n", num);
    }

}

//É possível criar variáveis para substituir as condições do "if()"
//"Else if" Caso a condição seja verdadeira, os outros "if" não serão lidos
