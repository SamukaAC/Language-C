#include <stdio.h>

void imprime_bin (int num)
{
    int resposta, resultado;

    if (num == 0) {
        printf("\n");
    }
    if ((num / 2) != 0) {
        imprime_bin(num / 2);
    }
    resultado = (num % 2);
    printf("%d", resultado);
}

int main (void) 
{
    int entrada;

    scanf("%d", &entrada);
    printf("Forma Binaria: ");
    imprime_bin(entrada);
    return 0;
}