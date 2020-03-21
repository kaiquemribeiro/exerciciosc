#include <stdio.h>

int main(void){
    float preco1, preco2, preco3, preco4, preco5, lucro1, lucro2, lucro3, lucro4, lucro5;
    printf("\nQual o valor do produto 1?\n");
    scanf("%f", &preco1);
    printf("\nQual a porcentagem de lucro?\n");
    scanf("%f", &lucro1);
    if (lucro1 <= 59 || lucro1 >= 91) printf("\nLucro invalido!\n");
    printf("\nQual o valor do produto 2\n");
    scanf("%f", &preco2);
    printf("\nQual a porcentagem de lucro?\n");
    scanf("%f", &lucro2);
    if (lucro2 <= 59 || lucro2 >= 91) printf("\nLucro invalido!\n");
    printf("\nQual o valor do produto 3\n");
    scanf("%f", &preco3);
    printf("\nQual a porcentagem de lucro?\n");
    scanf("%f", &lucro3);
    if (lucro3 <= 59 || lucro3 >= 91) printf("\nLucro invalido!\n");
    printf("\nQual o valor do produto 4\n");
    scanf("%f", &preco4);
    printf("\nQual a porcentagem de lucro?\n");
    scanf("%f", &lucro4);
    if (lucro4 <= 59 || lucro4 >= 91) printf("\nLucro invalido!\n");
    printf("\nQual o valor do produto 5\n");
    scanf("%f", &preco5);
    printf("\nQual a porcentagem de lucro?\n");
    scanf("%f", &lucro5);
    if (lucro5 <= 59 || lucro5 >= 91) printf("\nLucro invalido!\n");

    printf("\nO valor do produto 1 e %2.f e seu valor de revenda e %2.f", preco1, (lucro1*preco1)/100+preco1);
    printf("\nO valor do produto 2 e %2.f e seu valor de revenda e %2.f", preco2, (lucro2*preco2)/100+preco2);
    printf("\nO valor do produto 3 e %2.f e seu valor de revenda e %2.f", preco3, (lucro3*preco3)/100+preco3);
    printf("\nO valor do produto 4 e %2.f e seu valor de revenda e %2.f", preco4, (lucro4*preco4)/100+preco4);
    printf("\nO valor do produto 5 e %2.f e seu valor de revenda e %2.f", preco5, (lucro5*preco5)/100+preco5);
    
    return 0;
}
