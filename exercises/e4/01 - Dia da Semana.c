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

int total_de_ano_bissexto (int ano) 
{
    int total_ano = 0;

    for (int i = 1; i < ano; i++) {
        total_ano += ano_bissexto(i);
    }
    return total_ano;
}

int epoca (int dia, int mes, int ano) 
{
    int dias_do_ano, total_anos_bissextos, dia_corrente, resultado;

    dias_do_ano = ((ano - 1) * 365);
    total_anos_bissextos = total_de_ano_bissexto (ano);
    dia_corrente = dia_do_ano(dia, mes, ano);

    resultado = (((dias_do_ano + total_anos_bissextos) + dia_corrente) - 1);

    return resultado;
}

void dia_da_semana (int dia, int mes, int ano)
{
    int dia_semana;

    dia_semana = (epoca(dia, mes, ano) % 7);

    switch (dia_semana)
    {
    case 0:
        printf("Segunda-feira\n");
        break;
    case 1:
        printf("Terça-feira\n");
        break;
    case 2:
        printf("Quarta-feira\n");
        break;
    case 3:
        printf("Quinta-feira\n");
        break;
    case 4:
        printf("Sexta-feira\n");
        break;
    case 5:
        printf("Sábado\n");
        break;
    case 6:
        printf("Domingo\n");
        break;
    default:
        printf("Erro\n");
        break;
    }
}

int main (void)
{
    int dia, mes, ano;

    scanf("%d/%d/%d", &dia, &mes, &ano);
    dia_da_semana(dia, mes, ano);

    return 0;
}