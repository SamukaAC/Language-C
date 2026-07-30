#include <stdio.h>

int main (void)
{
    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);

    printf("o menor valor eh: ");

    if (valor1 < valor2) {
        printf("%d\n", valor1);

    } else {
        printf("%d\n", valor2);

    }

    return 0;
}