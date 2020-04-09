#include <stdio.h>

int main(void){
    int opcao, quantidade;
    float total = 0;

    printf("\nCodigo                 Produto                 Preco");
    printf("\n0                      Sair do Programa        -------");
    printf("\n1                      Hot-Dog                 R$5,00");
    printf("\n2                      X-Salada                R$7,50");
    printf("\n3                      X-Bacon                 R$8,00");
    printf("\n4                      Refrigerante            R$3,00\n");

    scanf("%d", &opcao);
    scanf("%d", &quantidade);
    
    while (opcao != 0){
        printf("\nCodigo                 Produto                 Preco");
        printf("\n0                      Sair do Programa        -------");
        printf("\n1                      Hot-Dog                 R$5,00");
        printf("\n2                      X-Salada                R$7,50");
        printf("\n3                      X-Bacon                 R$8,00");
        printf("\n4                      Refrigerante            R$3,00\n");
            switch (opcao){
                case 1: total += quantidade * 5.00;
                break;
                case 2: total += quantidade * 7.50;
                break;
                case 3: total += quantidade * 8.00;
                break;
                case 4: total += quantidade * 3.00; 
            default:
                break;
        }
        scanf("%d", &opcao);
        scanf("%d", &quantidade);
    }
    printf("\nO custo da compra e R$%2.f\n", total);
    return 0;
}
