#include <stdio.h>
#include <stdbool.h>

int maximo_div_comum (int num1, int num2)
{
    if (num2 == 0) {
        return num1;
    } else {
        return maximo_div_comum (num2, num1 % num2);
    }
}

int main (void) 
{
    int num1, num2, resultado;
    bool flag = true;

    do
    {
        scanf("%d %d", &num1, &num2);
        if ((num1 == 0) && (num2 == 0)) {
            flag = false;
        } else {
            resultado = maximo_div_comum(num1, num2);
            printf("Resultado: %d\n", resultado);
        }
    } while (flag);
    return 0;
}