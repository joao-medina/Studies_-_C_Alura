#include <stdio.h>

int main() {

    int numero, multiplicador, resultado;

    printf("Escolha um numero: \n");
    scanf("%d", &numero);

    printf("Tabuada do numero %d\n", numero);

    for(multiplicador = 1; multiplicador <= 10; multiplicador++) {
        resultado = numero * multiplicador;
        printf("%d * %d = %d\n", numero, multiplicador, resultado);
    }

}