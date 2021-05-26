#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    unsigned int ano_atual, ano_nascimento, idade;
    time_t t;
    struct tm*data;

    time(&t);
    data = localtime(&t);
    ano_atual = data->tm_year + 1900;

    printf("<<< EX017 - Fila de Banco >>>\n\n");
    printf("Em que ano você nasceu? ");
    scanf("%u", &ano_nascimento);

    idade = ( ano_atual - ano_nascimento);

    printf("-------------------------------\n");

    printf("Você tem %u anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");

    if (idade>=65){
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }

    printf("-------------------------------\n");
}
