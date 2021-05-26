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

    printf("<<< EX022 - D� pra ver o filme? >>>\n\n");
    printf("{ EXERC�CIO 020 - D� pra ver o filme? }\n\n");
    printf("================ CINEMA ESTUDONAUTA ===============\n");
    printf("PRE�O DO INGRESSO: R$20,00\n");
    printf("===================================================\n");
    printf("Quanto dinheiro voc� tem? ");
    scanf("%f", &dinheiro);
    printf("Qual o hor�rio do filme (horas)? ");
    scanf("%u", &horario);

    printf("Agora s�o %u horas.\n", hora_atual);

    if (hora_atual < horario && dinheiro >= 20){
        printf("Voc� consegue comprar o ingresso!\n");
    } else {
        printf("Infelizmente n�o � poss�vel comprar o ingresso!\n");
    }
}
