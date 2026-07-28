#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int num_positivo, num_negativo, entrada;
    bool tem_positivo, tem_negativo, verificador;
    
    tem_positivo = false;
    tem_negativo = false;
    verificador = true;

    while (verificador) {
        scanf("%d", &entrada);
        if (entrada == 0) {
            verificador = false;
        } else {
            if (entrada > 0) {
                if ((tem_positivo == false) || (entrada < num_positivo)) {
                    num_positivo = entrada;
                    tem_positivo = true;
                }
            }
            if (entrada < 0) {
                if ((tem_negativo == false) || (entrada < num_negativo)) {
                    num_negativo = entrada;
                    tem_negativo = true;
                }
            }
        }
    }
    if (tem_positivo) {
        printf("%d ", num_positivo);
    } else {
        printf("-");
    }
    
    if (tem_negativo) {
        printf("%d ", num_negativo);
    } else {
        printf("-");
    }
    printf("\n");
    return 0;
}