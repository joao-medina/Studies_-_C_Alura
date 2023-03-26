#include <stdio.h>
#include <time.h>

int main() {

    //time(0) retorna todos os segundos passados desde 1970 até o momento atual.
    int segundos = time(0);

    //srand() utiliza o time(0) como semente para o rand().
    srand(segundos);

    // rand(gera um número aleatório).
    int numerogrande = rand();

    // o resto de todo número dividido por 100 será entre 0 e 99
    int numeroaleatorio = numerogrande % 100;

    printf("Numero aleatorio gerado: %d\n", numeroaleatorio);

}