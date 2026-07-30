#include <stdio.h>

int mmain (void)
{
    int entrada;

    scanf("%d", &entrada);

    if ((entrada >= 0) && (entrada <= 255)) {
        if (entrada == 127) {
            printf("Loopback/Localhost\n");
        } else {
            printf("IP Externo\n");
        }
    } else {
        printf("Erro\n");
    }
    return 0;
}