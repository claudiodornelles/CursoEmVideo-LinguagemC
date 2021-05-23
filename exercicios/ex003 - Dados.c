#include <stdio.h>
#include <locale.h>

void main(){
    char nome[100];
    unsigned int idade;
    float peso;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX003 - Dados >>>\n");

    printf("\nQual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso? (Kg) ");
    scanf("%f", &peso);
    printf("\n------<<< PROCESSANDO >>>------\n");
    printf("\nMuito prazer, %s! Você tem %d anos e pesa %.2fKg, correto?\n", nome, idade, peso);
    printf("\nFIM\n");

}
