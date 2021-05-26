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

    printf("<<< EX018 - Serviço Militar v1.0 >>>\n\n");

    printf("Atualmente estamos no ano de %i.\n", ano_atual);
    printf("Em que ano você nasceu? ");
    scanf("%i", &ano_nascimento);
    printf("------------------------------------\n");

    idade = ano_atual - ano_nascimento;

    printf("Sua idade atual é %i anos.", idade);

    if (idade >= 18){
        printf("\nVocê já fez 18 anos, espero sinceramente que você tenha se alistado.");
    } else {
        printf("\nVocê ainda não tem 18 anos e não pode se alistar.");
    }
}
