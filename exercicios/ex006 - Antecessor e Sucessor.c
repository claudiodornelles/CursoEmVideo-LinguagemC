#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("\nDigite um n�mero: ");
    scanf("%d", &numero);
    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.", numero, numero - 1, numero + 1);
}
