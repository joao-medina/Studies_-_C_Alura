#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    a = 3;
    b = -3;
    c = a * abs(b);

    printf("%d * abs(%d) = %d", a, b, c);

}

// a função abs() transforma o número em sua versão absoluta (positiva)