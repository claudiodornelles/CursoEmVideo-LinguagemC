#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d.", numero, numero - 1, numero + 1);
}
