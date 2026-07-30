#include <stdio.h>

int main (void)
{
    int hora, minuto, segundo;
    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    int converter_horas, converter_minutos;
    converter_horas = hora * 3600;
    converter_minutos = minuto * 60;

    segundo = segundo + converter_horas + converter_minutos;

    printf("Total de segundos que se passaram desde meia-noite: %d\n", segundo);

    return 0;
}