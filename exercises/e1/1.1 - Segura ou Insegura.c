#include <stdio.h>

int main (void)
{
    int entrada;

    scanf("%d", &entrada);

    if (entrada >= 8) {
        printf("Segura\n");
    } else {
        printf("Insegura\n");
    }
    return 0;
}