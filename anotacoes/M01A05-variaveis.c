#include <stdio.h>
#include <locale.h>

void main(){
    unsigned int idade;
    char nome[] = "";
    char sexo;
    float peso;

    setlocale(LC_ALL, "Portuguese");
    printf("Olá, qual é o seu nome? ");
    scanf(" %s", &nome);
    printf("Olá, %s! É um prazer te conhecer.", nome);
    printf("\nQual é o seu sexo? [M/F]");
    scanf(" %c", &sexo);
    printf("Qual é a sua idade? ");
    scanf("%u", &idade);
    printf("Qual é o seu peso? ");
    scanf("%f", & peso);
    printf("%s tem %i anos de idade, é do sexo %c e pesa %.2fKg.", nome, idade, sexo, peso);
}
