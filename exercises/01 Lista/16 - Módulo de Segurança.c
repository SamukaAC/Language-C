#include <stdio.h>

int main (void)
{
    int IP, login;
    double hora;

    scanf("%d %lf %d", &IP, &hora, &login);

    if (((IP == 1) && (login > 3)) || ((IP == 2) && ((hora >= 8.00) && (hora <= 18.00)))) {
        printf("REQUER_2FA\n");
    } 
    if (((IP == 1) && (login < 4)) && ((hora >= 8.00) && (hora <= 18.00))) {
        printf("ACESSO_LIBERADO\n");
    } 
    if ((IP > 2) || (IP < 1)) {
        printf("ERRO_SISTEMA\n");
    }
    if ((IP == 2) && ((hora < 8.00) || (hora > 18.00))) {
        printf("BLOQUEADO\n");
    }
    return 0;
}