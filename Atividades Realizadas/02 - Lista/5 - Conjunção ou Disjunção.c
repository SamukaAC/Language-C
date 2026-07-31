#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int numA, numB, quant_par;
    bool verificador = true;

    quant_par = 0;

    while (verificador) {
        scanf("%d %d", &numA, &numB);
        if ((numA > numB) || (numB == (2 * numA))) {
            verificador = false;
        } else {
            quant_par = quant_par + 1;
        }
    }
    printf("%d\n", quant_par);
    return 0;
}