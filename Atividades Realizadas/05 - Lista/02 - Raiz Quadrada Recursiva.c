#include <stdio.h>
#include <math.h>

double raiz (double num1, double num2, double epsilon)
{
    double num3, valor_absoluto;

    valor_absoluto = fabs(num1 - (num2 * num2));

    if (valor_absoluto <= epsilon) {
        return num2;
    }
    num3 = (((num2 * num2) + num1) / (2 * num2));
    return raiz(num1, num3, epsilon);
}

int main (void)
{
    int entrada;
    double num1, num2, epsilon, resultado;

    scanf("%d", &entrada);

    for (int i = 0; i < entrada; i++) {
        scanf("%lf %lf %ls", &num1, &num2, &epsilon);
        resultado = raiz(num1, num2, epsilon);
        printf("O resultado eh: %.5lf\n", resultado);
    }
    return 0;
}