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

int dia_do_ano (int dia, int mes, int ano)
{
    int somar_dias = 0;

    for (int i_contar_dias_do_ano = 1; i_contar_dias_do_ano < mes; i_contar_dias_do_ano++) {
        somar_dias +=  dias_do_mes(i_contar_dias_do_ano, ano);
    }

    somar_dias += dia;
    return somar_dias;
}

int main (void)
{
    int dia1, dia2, mes1, mes2, ano1, ano2;
    int calculo_1, calculo_2, resultado;

    scanf("%d %d %d", &dia1, &mes1, &ano1);
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    calculo_1 = dia_do_ano(dia1, mes1, ano1);
    calculo_2 = dia_do_ano(dia2, mes2, ano2);

    if (calculo_1 > calculo_2) {
        resultado = calculo_1 - calculo_2;
    } else {
        resultado = calculo_2 - calculo_1;
    }
    printf("%d\n", resultado);
    return 0;
}