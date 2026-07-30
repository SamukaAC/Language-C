#include <stdio.h>

int main (void) 
{
    int entrada;

    scanf("%d", &entrada);

    switch (entrada)
    {
    case 21:
        printf("Porta: FTP\n");
        break;
    case 22:
        printf("Porta: SSH\n");
        break;
    case 80:
        printf("Porta: HTTP\n");
        break;
    case 443:
        printf("Porta: HTTPS\n");
        break;
    default:
        printf("Porta: Desconhecida\n");
    }
    return 0;
}