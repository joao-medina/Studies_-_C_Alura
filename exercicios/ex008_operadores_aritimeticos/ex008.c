#include <stdio.h>

int main() {
    
    int x, y, z;
    x = 2;
    y = 3;
    z = 5;

    int a, b, c, d;
    a = x * y;
    b = y + z;
    c = z % x;
    d = pow(y, x);

    printf("%d * %d = %d\n", x, y, a);
    printf("%d + %d = %d\n", y, z, b);
    printf("O resto de %d / %d e %d\n", z, x, c);
    printf("%d", d);

}

//Operadores aritiméticos:
// + soma
// - subtração
// * multiplicação
// / divisão
// % módulo(sobra da divisão)
// pow() potenciação