#include <stdio.h>

int main() {

    printf("Contagem regressiva...\n");
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
        if(i == 0) {
            break;
        }
    }

    printf("Segunda contagem...\n");
    int contador = 10;
    while (1) {
        printf("%d\n", contador);
        if(contador == 0){
            break;
        }
        contador--;
    }

    printf("Fim!");    

}

//for(contador, condição, intervalo)
//while(1) while infinito
//"break" para encerrar o loop
//"continue" para encerrar a execução dos demais códigos dentro do loop, porém sem encerrar o loop
