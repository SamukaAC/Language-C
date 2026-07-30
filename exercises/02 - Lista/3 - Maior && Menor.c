#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int numero_lido, maior, menor;
    bool primeiro = true;

    while ((primeiro == true) || (numero_lido != 0)) {
        scanf("%d", &numero_lido);
        if (numero_lido != 0) {
            if (primeiro == true) {
                maior = menor = numero_lido;
                primeiro = false;
            } else {
                if (numero_lido > maior) {
                    maior = numero_lido;
                }
                if (numero_lido < menor) {
                    menor = numero_lido;
                }
            }
        }
    }
    if (primeiro == false) {
        printf("maior: %d\n", maior);
        printf("menor: %d\n", menor);
    }
    return 0;
}