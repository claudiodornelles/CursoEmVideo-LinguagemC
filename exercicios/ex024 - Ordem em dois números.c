#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("<<< EX024 - Ordem em dois n�meros >>>\n");
    printf("Me diga dois n�meros e eu colocarei\nos dois em ordem crescente.\n\n");
    printf("Primeiro n�mero: ");
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
    scanf("%i", &n2);
    printf("Os n�meros em ordem s�o ");

    if (n1 > n2){
        printf("%i e %i.\n", n2, n1);
    } else if (n2 > n1){
        printf("%i e %i.\n", n1, n2);
    } else {
        printf("indiferentes pois s�o iguais, %i e %i.\n", n1, n2);
    }
}
