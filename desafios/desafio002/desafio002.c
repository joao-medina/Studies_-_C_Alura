#include <stdio.h>

int main() {

    int x; 
    int y;

    printf("Escolha um numero: ");
    scanf("%d", &x);
    printf("Escolha outro numero: ");
    scanf("%d", &y);
    printf("A multiplicacao entre %d e %d e igual a %d", x, y, x * y);

}