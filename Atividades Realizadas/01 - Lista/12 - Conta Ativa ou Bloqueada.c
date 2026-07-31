#include <stdio.h>

int main (void)
{
    int entrada;

    scanf("%d", &entrada);

    if (entrada > 4) {
        printf("Estado da Conta: Conta Bloqueada\n");
    } else {
        printf("Estado da Conta: Conta Ativa\n");
    }
    return 0;
}