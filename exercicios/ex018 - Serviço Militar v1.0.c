#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    struct tm*data;

    time(&t);
    data = localtime(&t);

    int ano_atual = data->tm_year + 1900, ano_nascimento, idade;

    printf("<<< EX018 - Servi�o Militar v1.0 >>>\n\n");

    printf("Atualmente estamos no ano de %i.\n", ano_atual);
    printf("Em que ano voc� nasceu? ");
    scanf("%i", &ano_nascimento);
    printf("------------------------------------\n");

    idade = ano_atual - ano_nascimento;

    printf("Sua idade atual � %i anos.", idade);

    if (idade >= 18){
        printf("\nVoc� j� fez 18 anos, espero sinceramente que voc� tenha se alistado.");
    } else {
        printf("\nVoc� ainda n�o tem 18 anos e n�o pode se alistar.");
    }
}
