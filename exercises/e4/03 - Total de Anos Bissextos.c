#include <stdio.h>

int ano_bissexto (int ano) 
{
    int resposta;

    if ((ano % 4) == 0) {
        if ((ano % 100) == 0) {
            if ((ano % 400) == 0) {
                resposta = 1;
            } else {
                resposta = 0;
            }
        } else {
            resposta = 1;
        }
    } else {
        resposta = 0;
    }
    return resposta;
}

int main (void)
{
    int ano, total_de_anos;

    scanf("%d", &ano);
    total_de_anos = 0;

    if (ano < 0) {
        printf("Erro\n");
    } else {
        for (int i = 1; i < ano; i++) {
            total_de_anos += ano_bissexto(i);
        }
    }
    printf("%d\n", total_de_anos);
    return 0;
}