#include <stdio.h>

int main(void){
    int numero;
    scanf("%d", &numero);
    while (numero != 300){
        printf("\nNumero lido %d\n", numero);
        scanf("%d", &numero);
    }
    return 0;
}
