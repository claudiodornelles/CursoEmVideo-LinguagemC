#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("<<< EX023 - Positivo ou Negativo>>>\n");
    printf("Me diga um n�mero e eu te direi se\nele � POSITIVO, NEGATIVO ou NULO.\n\n");

    printf("Digite um n�mero: ");
    scanf("%i", &n);
    printf("O valor %i digitado �", n);
    if (n < 0){
        printf(" NEGATIVO.\n");
    } else if (n == 0){
        printf(" NULO.\n");
    } else {
        printf(" POSITIVO.\n");
    }
}
