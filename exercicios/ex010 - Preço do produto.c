#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome_produto[30];
    float preco_produto, desconto, preco_com_desconto;

    printf("<<< EX010 - Preço do Produto >>>\n");
    printf("\nProduto: ");
    fflush(stdin);
    gets(nome_produto);
    printf("Preço de %s: ", nome_produto);
    scanf("%f", &preco_produto);
    printf("Desconto (%%): ");
    scanf("%f", &desconto);
    preco_com_desconto = preco_produto * ( 1 - desconto / 100);
    printf("O produto %s custava R$%.2f mas com %.2f%% de desconto passa a custar R$%.2f.", nome_produto, preco_produto, desconto, preco_com_desconto);
}
