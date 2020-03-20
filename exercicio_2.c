#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, y, troca;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("\n O valor de x antes da troca e: %d \n", x);
    printf("\n O valor de y antes da troca e: %d \n", y);

    troca = x;
    x = y;
    y = troca;

    printf("\n O valor de x depois da troca e: %d \n", x);
    printf("\n O valor de y depois da troca e %d \n", y);

    return 0;
}
