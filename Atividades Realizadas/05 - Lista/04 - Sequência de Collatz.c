#include <stdio.h>

int collatz (int num) 
{
    if (num == 1) {
        return 1;
    }
    if ((num % 2) == 0) {
        return (1 + collatz(num / 2));
    } else {
        return (1 + collatz((3 * num) + 1));
    }
}

int main (void) 
{
    int entrada;

    scanf("%d", &entrada);

    printf("Ate chegar ao numero 1 foi lido: %d vezes\n", collatz(entrada));

    return 0;
}