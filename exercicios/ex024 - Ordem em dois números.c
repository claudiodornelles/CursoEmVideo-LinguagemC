#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("<<< EX024 - Ordem em dois números >>>\n");
    printf("Me diga dois números e eu colocarei\nos dois em ordem crescente.\n\n");
    printf("Primeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);
    printf("Os números em ordem são ");

    if (n1 > n2){
        printf("%i e %i.\n", n2, n1);
    } else if (n2 > n1){
        printf("%i e %i.\n", n1, n2);
    } else {
        printf("indiferentes pois são iguais, %i e %i.\n", n1, n2);
    }
}
