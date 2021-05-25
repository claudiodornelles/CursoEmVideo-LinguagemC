#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n, desloc, res1, res2;

    printf("<<< EX014 - Operadores de Deslocamento >>>\n");
    printf("\nDigite um número: ");
    scanf("%i", &n);
    printf("Digite o deslocamento: ");
    scanf("%i", &desloc);

    res1 = n >> desloc;
    res2 = n << desloc;

    printf("------ OPERAÇÕES SHIFT ------\n");
    printf("Calculando %i \>\> %i o resultado é igual a: %i\n", n, desloc, res1);
    printf("Calculando %i \<\< %i o resultado é igual a: %i", n, desloc, res2);
}
