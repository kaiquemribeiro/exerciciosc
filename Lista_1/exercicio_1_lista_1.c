#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void){
    float num, resultado;
    printf("\nDigite o valor:\n");
    scanf("%f", &num);
    resultado = pow(num,3) + sqrt(num) + num/2;
    printf("%2.f", resultado);
    return 0;
}
