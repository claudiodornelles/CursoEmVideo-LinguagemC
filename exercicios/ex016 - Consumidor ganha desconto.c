#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float desconto, valor_desconto, subtotal, total;

    desconto = 0.10;

    printf("<<< EX016 - Consumidor ganha desconto >>>\n\n");
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &subtotal);
    printf("------------------------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n", subtotal);

    if (subtotal >= 500){
        valor_desconto = subtotal * desconto;
        total = subtotal - valor_desconto;
        printf("================ ATENÇÃO =================\n");
        printf("Por fazer mais de R$500,00 em compras, você vai receber R$%.2f de desconto!", valor_desconto);
        printf("\nO valor a ser pago é R$%.2f!\n", total);
    }

    printf("Volte sempre!\n");
    printf("------------------------------------------");
}
