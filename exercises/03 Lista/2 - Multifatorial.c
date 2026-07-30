#include <stdio.h>
#include <stdbool.h>

int multifatorial (int n, int a) 
{
    int resultado;

    if (n <= 0) {
        resultado = 1;
    } else {
        resultado = (n * multifatorial(n - a, a));
    }
    return resultado;
}

int main (void)
{
    int numero_base, subtrair_numero, resultado;
    bool flag = true;

    while (flag) {
        scanf("%d %d", &numero_base, &subtrair_numero);
        if ((numero_base == 0) && (subtrair_numero == 0)) {
            flag = false;
        } else {
            resultado = multifatorial(numero_base, subtrair_numero);
            printf("%d", numero_base);
            for (int i = 0; i < subtrair_numero; i++) {
                printf("!");
            }
            printf(" = %d\n", resultado);
        }
    }
    return 0;
}