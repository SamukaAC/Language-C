#include <stdio.h>

int main (void)
{
    double num1, num2;
    char operador;
    double soma, subtracao, multiplicacao, divisao;

    scanf("%lf %c %lf", &num1 ,&operador, &num2);

    switch (operador) {
        case '+':
            soma = (num1 + num2);
            printf("%.2lf\n", soma);
            break;
        case '-':
            subtracao = (num1 - num2);
            printf("%.2lf\n", subtracao);
            break;
        case '*':
            multiplicacao = (num1 * num2);
            printf("%.2lf\n", multiplicacao);
            break;
        case ('/' || ':'):
            divisao = (num1 - num2);
            printf("%.2lf\n", divisao);
            break;
        default:
            printf("operador nao identificado");
    }
    return 0;
}