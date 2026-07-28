#include <stdio.h>

int lendo_a_hora (void)
{
    int hora, minuto, segundo, hora_segundo, minuto_segundo, timestamp;

    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    hora_segundo = (hora * 3600);
    minuto_segundo = (minuto * 60);

    timestamp = segundo;
    timestamp += minuto_segundo;
    timestamp += hora_segundo;

    return timestamp;
}

void imprimir_hora (int timestamp)
{
    int hora, minuto, segundo;

    hora = ((timestamp  / 3600) % 24);
    minuto = ((timestamp % 3600) / 60);
    segundo = (timestamp % 60);

    printf("%02d:%02d:%02d\n", hora, minuto, segundo);
}

int main (void) 
{
    int hora_atual, duracao, hora_despertar;

    hora_atual = lendo_a_hora();
    duracao = lendo_a_hora();
    hora_despertar = (hora_atual + duracao);
    
    imprimir_hora(hora_despertar);
    return 0;
}