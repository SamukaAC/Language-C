#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int primeiro_num, segundo_num, contador;
    bool verificador = true;
    
    contador = 0;

    while (verificador) {
        scanf("%d %d", &primeiro_num, &segundo_num);
        if (primeiro_num == 0) {
            contador = contador + 1;
        }
        if (segundo_num == 0) {
            contador = contador + 1;
        }
        if ((primeiro_num == 0) && (segundo_num == 0)) {
            verificador = false;
        }
    } 
    printf("%d\n", contador);
    return 0;
}