#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;

    printf("<<< EX012 - Situa��o do aluno >>>\n");
    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("A m�dia do aluno foi %.1f", media);
    printf("\nA siauta��o do aluno � %s", (media>=7)?"APROVADO":"REPROVADO");
}
