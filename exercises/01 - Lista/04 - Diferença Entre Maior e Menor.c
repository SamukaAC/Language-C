#include <stdio.h>

int main (void)
{
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    int menor, maior;
    menor = valor1;
    maior = valor3;

    if (menor > maior) {
        maior = valor1;
        menor = valor3;
    }

    if (valor2 < menor) {
        menor = valor2;
    }

    if (valor2 > maior) {
        maior = valor2;
    }

    int diferenca;
    diferenca = maior - menor;

    printf("A diferenca eh: %d\n", diferenca);
    
    return 0;
}