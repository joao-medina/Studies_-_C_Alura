#include <stdio.h>

int main() {
  
    //variáveis de numeros inteiros:
    short numero1 = 16;
    int numero2 = 32;
    long numero3 = 64;

    printf("short armazena 2 bytes, ou seja, 16 bits = 2 elevado a 16\n");
    printf("int armazena 4 bytes, ou seja, 32 bits = 2 elevado a 32\n");
    printf("long armazena 8 bytes, ou seja, 64 bits = 2 elevado a 64\n");

    printf("Exemplo de como imprimir um numero inteiro: %d\n", numero1);

    //variáveis de número flutuante:
    float numero4 = 4.32;
    double numero5 = 8.64;

    printf("float armazena 4 bytes\n");
    printf("double armazena 8 bytes\n");

    printf("Exemplo de como imprimir um numero flutuante: %.2f\n", numero4);

}

//para declarar a variável, é preciso indicar seu tipo:
//"%d", para colocar a variável de número inteiro
//"%f", para colocar a variável de número flutuante