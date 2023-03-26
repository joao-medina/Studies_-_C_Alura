#include <stdio.h>

int main() {

    printf("Soma de todos os numeros de 1 a 100\n");

    int limite, contador, soma;
    soma = 0;
    limite = 100;

    for(int contador = 1; contador <= limite; contador++) {;
        soma += contador;
    }

    printf("A soma dos 100 primeiro numeros e: %d\n", soma);    

}