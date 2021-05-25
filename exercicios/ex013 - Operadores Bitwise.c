#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX013 - Operadores Bitwise >>>\n");

    int n1, n2;

    printf("\nDigite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    int r1 = n1 & n2;
    int r2 = n1 | n2;
    int r3 = n1 ^ n2;

    printf("------ OPERAÇÕES BITWISE ------\n");
    printf("Calculando %i \& %i o resultado é igual a: %i\n", n1, n2, r1);
    printf("Calculando %i \| %i o resultado é igual a: %i\n", n1, n2, r2);
    printf("Calculando %i \^ %i o resultado é igual a: %i", n1, n2, r3);
}
