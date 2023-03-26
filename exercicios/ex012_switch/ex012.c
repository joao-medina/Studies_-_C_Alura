#include <stdio.h>

int main() {

    int numero, numeropar;

    printf("Insira um numero: \n");
    scanf("%d", &numero);
    numeropar = numero % 2;

    switch(numeropar) {
        case 0:
            printf("O numero %d e par", numero);
            break;
        default:
            printf("O numero %d e impar", numero);
            break;

    }

}