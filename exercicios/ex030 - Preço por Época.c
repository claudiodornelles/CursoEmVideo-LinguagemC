#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float preco;

    printf("<<< EX030 - Pre�o por �poca >>>\n");
    printf("Digite o pre�o de um produto R$");
    scanf("%f", &preco);
    printf("\n\t        ESCOLHA UM PER�ODO\n");
    printf("\t=================================\n");
    printf("\t  1\tCarnaval [+10%%]\n");
    printf("\t  2\tF�rias Escolares [+20%%]\n");
    printf("\t  3\tDia das Crian�as [+5%%]\n");
    printf("\t  4\tBlack Friday [-30%%]\n");
    printf("\t  5\tNatal [-5%%]\n");
    printf("\t=================================\n");
    printf("\t        Digite sua op��o => ");
    scanf("%i", &opcao);

    printf("\n---------------------------------------------------------\n");

    switch (opcao){
    case 1:
        preco *= 1.10;
        printf("Na �poca de Carnaval, o pre�o do produto vai para R$%.2f.", preco);
        break;
    case 2:
        preco *= 1.20;
        printf("Na �poca das F�rias Escolares, o pre�o do produto vai para R$%.2f.", preco);
        break;
    case 3:
        preco *= 1.05;
        printf("Na �poca do Dia das Crian�as, o pre�o do produto vai para R$%.2f.", preco);
        break;
    case 4:
        preco *= 0.70;
        printf("Na �poca da Black Friday, o pre�o do produto vai para R$%.2f.", preco);
        break;
    case 5:
        preco *= 0.95;
        printf("Na �poca do Natal, o pre�o do produto vai para R$%.2f.", preco);
        break;
    default:
        printf("Em �pocas assim, mantenha o pre�o do produto em R$%.2f.", preco);
    }

    printf("\n---------------------------------------------------------\n");
    printf("VOLTE SEMPRE\n");
}
