#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, maior, intermediario, menor;

    printf("<<< EX027 - Tr�s valores em ordem >>>\n");
    printf("Me diga tr�s n�meros e eu colocarei\n");
    printf("eles em ordem para voc�.\n\n");
    printf("Primeiro n�mero: ");
    scanf("%i", &n1);
    maior = n1;
    intermediario = n1;
    menor = n1;

    printf("Segundo n�mero: ");
    scanf("%i", &n2);
    if (n2 > maior){
        maior = n2;
    } else {
        intermediario = n2;
        menor = n2;
    }
    printf("Terceiro n�mero: ");
    scanf("%i", &n3);
    if (n3 > maior){
        intermediario = maior;
        maior = n3;
    } else if (n3 > intermediario) {
        intermediario = n3;
    } else {
        menor = n3;
    }

    printf("--- PROCESSANDO ---\n");
    printf("MAIOR:\t\t%i\n", maior);
    printf("INTERMEDI�RIO:\t%i\n", intermediario);
    printf("MENOR:\t\t%i\n", menor);
}
