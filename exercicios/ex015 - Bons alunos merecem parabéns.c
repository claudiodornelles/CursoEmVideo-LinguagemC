#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;

    printf("<<< EX015 - Bons alunos merecem parab�ns >>>\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    printf("-------------------------------\n");

    media = (n1 + n2) / 2;

    if (media >= 7){
        printf("MEUS PARAB�NS! ");
    }

    printf("A sua m�dia final foi %.1f", media);

    printf("\n-------------------------------\n");
}
