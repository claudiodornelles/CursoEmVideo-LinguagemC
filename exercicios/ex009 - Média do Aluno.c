#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    char nome[30];

    printf("<<< EX009 - Média do Aluno >>>\n");
    printf("\nNome do Aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f.\n", nome, nota1, nota2, media);
}
