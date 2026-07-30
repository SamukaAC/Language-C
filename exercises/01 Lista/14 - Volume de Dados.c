#include <stdio.h>

int main (void) 
{
    int entrada;

    scanf("%d", &entrada);

    if (entrada < 100) {
        printf("Normal\n");
    } else if ((entrada >= 100) && (entrada <= 500)) {
        printf("Suspeito\n");
    } else {
        printf("Alerta de Exfiltração\n");
    }
    return 0;
}