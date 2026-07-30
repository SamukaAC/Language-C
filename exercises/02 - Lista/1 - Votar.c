#include <stdio.h>

int main (void) 
{
    int idade;
    scanf("%d", &idade);

    if ((idade >= 0) && (idade <= 15)) {
        printf("Muito Jovem\n");
    } else if ((idade > 15) && (idade < 18)) {
        printf("Voto Permitido\n");
    } else if ((idade >= 18) && (idade <= 59)) {
        printf("Voto Obrigatorio\n");
    } else {
        printf("Nao precisa mais votar\n");
    }
    return 0;
}