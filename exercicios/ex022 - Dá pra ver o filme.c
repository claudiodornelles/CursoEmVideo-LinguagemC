#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);

    unsigned int hora_atual = data->tm_hour, horario;
    float dinheiro;

    printf("<<< EX022 - Dá pra ver o filme? >>>\n\n");
    printf("{ EXERCÍCIO 020 - Dá pra ver o filme? }\n\n");
    printf("================ CINEMA ESTUDONAUTA ===============\n");
    printf("PREÇO DO INGRESSO: R$20,00\n");
    printf("===================================================\n");
    printf("Quanto dinheiro você tem? ");
    scanf("%f", &dinheiro);
    printf("Qual o horário do filme (horas)? ");
    scanf("%u", &horario);

    printf("Agora são %u horas.\n", hora_atual);

    if (hora_atual < horario && dinheiro >= 20){
        printf("Você consegue comprar o ingresso!\n");
    } else {
        printf("Infelizmente não é possível comprar o ingresso!\n");
    }
}
