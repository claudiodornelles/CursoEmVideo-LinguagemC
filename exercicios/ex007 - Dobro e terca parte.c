#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, dobro;
    float terca;

    printf("<<< EX007 - Dobro e Ter�a Parte >>>\n");
    printf("\nDigite um n�mero: ");
    scanf("%d", &numero);
    dobro = numero * 2;
    terca = (float) numero / 3;
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.", numero, dobro, terca);
}
