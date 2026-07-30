#include <stdio.h>

int main (void)
{
    int hora1, minuto1, segundo1;
    scanf("%d:%d:%d", &hora1, &minuto1, &segundo1);
    
    int hora2, minuto2, segundo2;
    scanf("%d:%d:%d", &hora2, &minuto2, &segundo2);

    int converter_hora1, converter_hora2;
    converter_hora1 = hora1 * 3600;
    converter_hora2 = hora2 * 3600;

    int converter_minuto1, converter_minuto2;
    converter_minuto1 = minuto1 * 60;
    converter_minuto2 = minuto2 * 60;

    int total_segundo1, total_segundo2;
    total_segundo1 = converter_hora1 + converter_minuto1 + segundo1;
    total_segundo2 = converter_hora2 + converter_minuto2 + segundo2;

    int diferenca;
    if (total_segundo1 > total_segundo2) {
        diferenca = total_segundo1 - total_segundo2;
    } else {
        diferenca = total_segundo2 - total_segundo1;
    }

    printf("A diferenca eh de %d segundos\n", diferenca);

    return 0;
}