#include <stdio.h>

int main() {
    {
        int x = 10;
        printf("%d\n", x);
    }

    {
        int x = 15;
        printf("%d\n", x);
    }
}

//Quando uma variável é declarada, ela é funcional apenas no escopo "{}" em que ela foi criada