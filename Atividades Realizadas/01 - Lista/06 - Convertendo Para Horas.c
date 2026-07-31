#include <stdio.h>

int main (void) 
{
    int entrada;
    scanf("%d", &entrada);

    int hora, minuto, segundo;

    if (entrada > 59) {
        segundo = entrada % 60;
        minuto = (entrada / 60) % 60;
        hora = entrada / 3600;
    }

    printf("%02d:%02d:%02d\n", hora, minuto, segundo);

    return 0;
}