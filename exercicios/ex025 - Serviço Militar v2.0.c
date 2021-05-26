#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);

    unsigned int ano_atual = data->tm_year+1900, idade, tempo, ano_nascimento;

    printf("<<< EX025 - Serviço Militar v2.0 >>>\n\n");

    printf("Atualmente estamos no ano de  %u.\n", ano_atual);
    printf("Em que ano você nasceu? ");
    scanf("%u", &ano_nascimento);

    idade = ano_atual - ano_nascimento;

    printf("----------------------------------------------------\n");
    printf("Sua idade atual é %u anos.\n", idade);

    if (idade<18){
        printf("Seu alistamento será em %u. Ainda faltam %u anos.", ano_atual + (18 - idade), (18 - idade));
    } else if (idade == 18) {
        printf("Você completa 18 anos exatamente em %u. Vá se alistar!", ano_atual);
    } else {
        printf("Seu alistamento foi em %u. Já se passaram %u anos.", ano_atual - (idade - 18), (idade - 18));
    }

    printf("\n----------------------------------------------------\n");
}
