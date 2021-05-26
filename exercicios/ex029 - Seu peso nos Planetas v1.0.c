#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float peso, massa, resultado;

    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");
    printf("\tSeu peso na Terra (kg) = ");
    scanf("%f", &peso);
    massa = peso/9.807;
    printf("\n\t  ESCOLHA UM PLANETA  \n");
    printf("\t======================\n");
    printf("\t    1\t  Mercúrio\n");
    printf("\t    2\t  Vênus\n");
    printf("\t    3\t  Marte\n");
    printf("\t    4\t  Júpiter\n");
    printf("\t    5\t  Saturno\n");
    printf("\t    6\t  Urano\n");
    printf("\t    7\t  Netuno\n");
    printf("\t======================\n");
    printf("\t  Digite sua opção => ");
    scanf("%i", &opcao);
    printf("\n---------------------------------------------\n");

    switch (opcao){
    case 1:
        resultado = massa * 3.7;
        printf("No planeta Mercúrio seu peso seria %.2f kg.", resultado);
        break;
    case 2:
        resultado = massa * 8.87;
        printf("No planeta Vênus seu peso seria %.2f kg.", resultado);
        break;
    case 3:
        resultado = massa * 3.721;
        printf("No planeta Marte seu peso seria %.2f kg.", resultado);
        break;
    case 4:
        resultado = massa * 24.79;
        printf("No planeta Júpiter seu peso seria %.2f kg.", resultado);
        break;
    case 5:
        resultado = massa * 10.44;
        printf("No planeta Saturno seu peso seria %.2f kg.", resultado);
        break;
    case 6:
        resultado = massa * 8.87;
        printf("No planeta Urano seu peso seria %.2f kg.", resultado);
        break;
    case 7:
        resultado = massa * 11.15;
        printf("No planeta Netuno seu peso seria %.2f kg.", resultado);
        break;
    default:
        printf("Não entendi a sua opção. Por favor, tente novamente.");
    }
}
