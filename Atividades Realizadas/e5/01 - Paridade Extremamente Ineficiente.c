#include <stdio.h>
#include <stdbool.h>

int Par (int num) 
{
    if (num == 0) {
        return 1;
    } else {
        return !Par(num - 1);
    }
}

int main (void) 
{
    int num;
    bool flag = true;

    do {
       scanf("%d", &num);
       
       if (num < 0) {
        printf("Encerrando o programa\n");
        flag = false;
       } else {
        if (Par(num)) {
            printf("%d eh um numero par\n", num);
        } else {
            printf("%d eh um numero impar\n", num);
        }
       }
    } while (flag);
    return 0;
}