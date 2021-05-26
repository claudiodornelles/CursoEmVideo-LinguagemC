#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("<<< EX021 - Inverso ou Oposto >>>\n\n");
    printf("Digite um número: ");
    scanf("%i", &n);

    if (n>0){
        printf("O inverso de %i é igual a %.4f", n, 1/(float)n);
    } else {
        printf("O oposto de %i é igual a %i", n, -n);
    }
}
