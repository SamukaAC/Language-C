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
    int ano;

    scanf("%d", &ano);
    
    if (ano < 0) {
        return -1;
    } else {
        if (ano_bissexto(ano) == 1) {
            printf("Ano Bissexto\n");
        } else {
            printf("Ano Comum\n");
        }
    }

    return 0;
}