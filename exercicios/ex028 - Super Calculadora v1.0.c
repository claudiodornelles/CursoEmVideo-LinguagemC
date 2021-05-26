#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    float resultado;
    char resposta;

    printf("<<< EX028 - Super Calculadora v1.0 >>>\n\n");

    printf("VALOR 1 = ");
    scanf("%i", &n1);

    printf("VALOR 2 = ");
    scanf("%i", &n2);

    printf("=== ESCOLHA UMA OPÇÃO ===\n");
    printf(" + \tAdição\n");
    printf(" - \tSubtração\n");
    printf(" * \tMultiplicação\n");
    printf(" / \tDivisão\n");
    printf("=========================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%c", &resposta);

    printf("\n=== PROCESSANDO ===\n");

    switch (resposta){
    case '+':
        resultado = n1 + n2;
        printf("O resultado de %i %c %i é igual a %.0f", n1, resposta, n2, resultado);
        break;
    case '-':
        resultado = n1 - n2;
        printf("O resultado de %i %c %i é igual a %.0f", n1, resposta, n2, resultado);
        break;
    case '*':
        resultado = n1 * n2;
        printf("O resultado de %i %c %i é igual a %.0f", n1, resposta, n2, resultado);
        break;
    case '/':
        resultado = n1 / (float)n2;
        printf("O resultado de %i %c %i é igual a %.2f", n1, resposta, n2, resultado);
        break;
    default:
        printf("Não entendi a sua escolha. Por favor, tente outra vez.");
    }
}
