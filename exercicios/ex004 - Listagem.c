#include <stdio.h>
#include <locale.h>

void main(){
    char nome1[50], nome2[50], nome3[50], sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX004 - Listagem >>>\n");

    printf("\nCadastrando a primeira pessoa:");
    printf("\n------------------------------");
    printf("\nNOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo1);
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("Cadastrando a segunda pessoa:");
    printf("\n---------------------------");
    printf("\nNOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo2);
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("Cadastrando a terceira pessoa:");
    printf("\n----------------------------");
    printf("\nNOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo3);
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("----------------------------\n");
    printf("%-20s\tSEXO\tNOTA\n", "NOME");
    printf("%-20s\t%3c\t%4.1f\n", nome1, sexo1, nota1);
    printf("%-20s\t%3c\t%4.1f\n", nome2, sexo2, nota2);
    printf("%-20s\t%3c\t%4.1f\n", nome3, sexo3, nota3);
    printf("----------------------------\n");
}
