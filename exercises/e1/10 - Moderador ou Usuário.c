#include <stdio.h>

int main (void) 
{
    int entrada;

    scanf("%d", &entrada);

    switch (entrada)
    {
    case 1:
        printf("Usuário\n");
        break;
    case 2:
        printf("Moderador\n");
        break;
    case 3:
        printf("Administrador\n");
        break;
    default:
        printf("Acesso Negado\n");
        break;
    }
    return 0;
}