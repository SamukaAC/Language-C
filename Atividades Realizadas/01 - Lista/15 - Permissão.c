#include <stdio.h>

int main (void) 
{
    int entrada;

    scanf("%d", &entrada);

    if ((entrada >= 8) && (entrada <= 18)) {
        printf("Entrada Permitida\n");
    } else {
        printf("Entrada Negada\n");
    }
    return 0;
}