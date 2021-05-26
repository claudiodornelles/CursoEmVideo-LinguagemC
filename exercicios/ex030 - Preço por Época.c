#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float preco;

    printf("<<< EX030 - Preço por Época >>>\n");
    printf("Digite o preço de um produto R$");
    scanf("%f", &preco);
    printf("\n\t        ESCOLHA UM PERÍODO\n");
    printf("\t=================================\n");
    printf("\t  1\tCarnaval [+10%%]\n");
    printf("\t  2\tFérias Escolares [+20%%]\n");
    printf("\t  3\tDia das Crianças [+5%%]\n");
    printf("\t  4\tBlack Friday [-30%%]\n");
    printf("\t  5\tNatal [-5%%]\n");
    printf("\t=================================\n");
    printf("\t        Digite sua opção => ");
    scanf("%i", &opcao);

    printf("\n---------------------------------------------------------\n");

    switch (opcao){
    case 1:
        preco *= 1.10;
        printf("Na época de Carnaval, o preço do produto vai para R$%.2f.", preco);
        break;
    case 2:
        preco *= 1.20;
        printf("Na época das Férias Escolares, o preço do produto vai para R$%.2f.", preco);
        break;
    case 3:
        preco *= 1.05;
        printf("Na época do Dia das Crianças, o preço do produto vai para R$%.2f.", preco);
        break;
    case 4:
        preco *= 0.70;
        printf("Na época da Black Friday, o preço do produto vai para R$%.2f.", preco);
        break;
    case 5:
        preco *= 0.95;
        printf("Na época do Natal, o preço do produto vai para R$%.2f.", preco);
        break;
    default:
        printf("Em épocas assim, mantenha o preço do produto em R$%.2f.", preco);
    }

    printf("\n---------------------------------------------------------\n");
    printf("VOLTE SEMPRE\n");
}
