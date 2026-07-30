#include <stdio.h>

int main (void)
{
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    
    int menor;
    menor = 0;

    if (valor1 < valor2) {
        menor = valor1;

    } else if (valor2 < valor3) {
        menor = valor2;

    } else if (valor3 < valor1) {
        menor = valor3;

    } else {
        menor = valor1;

    }

    printf("O menor valor eh: %d\n", menor);
    return 0;
}