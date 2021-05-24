#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, dobro;
    float terca;

    printf("<<< EX007 - Dobro e Terça Parte >>>\n");
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    dobro = numero * 2;
    terca = (float) numero / 3;
    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f.", numero, dobro, terca);
}
