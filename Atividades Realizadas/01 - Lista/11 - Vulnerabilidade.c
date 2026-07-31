#include <stdio.h>

int main (void) 
{
    double entrada;
    
    scanf("%lf", &entrada);

    if ((entrada >= 0) && (entrada <= 3.9)) {
        printf("Vulnerabilidade: Baixa\n");
    } else if ((entrada > 3.9) && (entrada <= 6.9)) {
        printf("Vulnerabilidade: Média\n");
    } else if ((entrada > 6.9) && (entrada < 9)) {
        printf("Vulnerabilidade: Alta\n");
    } else if ((entrada >= 9) && (entrada <= 10)) {
        printf("Vulnerabilidade: Crítica\n");
    }
    return 0;
}