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

int dias_do_mes (int mes, int ano)
{
    int dias;

    switch (mes)
    {
    case 1:
        dias = 31;
        break;
    case 2:
        if (ano_bissexto(ano) == 1) {
            dias = 29;
        } else {
            dias = 28;
        }
        break;;
    case 3:
        dias = 31;
        break;
    case 4:
        dias = 30;
        break;
    case 5:
        dias = 31;
        break;
    case 6:
        dias = 30;
        break;
    case 7:
        dias = 31;
        break;
    case 8:
        dias = 31;
        break;
    case 9:
        dias = 30;
        break;
    case 10:
        dias = 31;
        break;
    case 11:
        dias = 30;
        break;
    case 12:
        dias = 31;
        break;
    default:
        printf("Insira um mes adequado!\n");
    }
    return dias;
}

int main (void)
{
    int mes, ano;
 
    while (scanf("%d %d", &mes, &ano), ano != 0) {
        printf("%02d/%d tem: %d dias\n", mes, ano, dias_do_mes(mes, ano));
    }
    return 0;
}