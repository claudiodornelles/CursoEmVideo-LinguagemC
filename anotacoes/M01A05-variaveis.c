#include <stdio.h>
#include <locale.h>

void main(){
    unsigned int idade;
    char nome[] = "";
    char sexo;
    float peso;

    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, qual � o seu nome? ");
    scanf(" %s", &nome);
    printf("Ol�, %s! � um prazer te conhecer.", nome);
    printf("\nQual � o seu sexo? [M/F]");
    scanf(" %c", &sexo);
    printf("Qual � a sua idade? ");
    scanf("%u", &idade);
    printf("Qual � o seu peso? ");
    scanf("%f", & peso);
    printf("%s tem %i anos de idade, � do sexo %c e pesa %.2fKg.", nome, idade, sexo, peso);
}
