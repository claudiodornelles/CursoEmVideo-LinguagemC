#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char resp[2];

    printf("<<< EX026 - Qual � o seu Estado?\n\n");
    printf("Em que estado do Brasil voc� nasceu? (ex: RS, PR, SC...) ");
    scanf("%s", &resp);
    strupr(resp);

    printf("Nascendo em %s voc� � ", resp);
    if (strcmp(resp, "RS") == 0){
        printf("Ga�cho.");
    } else if (strcmp(resp, "SC") == 0){
        printf("Catarinense.");
    } else if (strcmp(resp, "RJ") == 0){
        printf("Carioca.");
    } else if (strcmp(resp, "SP") == 0){
        printf("Paulista.");
    } else if (strcmp(resp, "MG") == 0){
        printf("Mineiro.");
    } else if (strcmp(resp, "RN") == 0){
        printf("Potiguar.");
    } else if (strcmp(resp, "AL") == 0){
        printf("Alagoano.");
    } else if (strcmp(resp, "BA") == 0){
        printf("Baiano.");
    } else if (strcmp(resp, "PR") == 0){
        printf("Paranaense.");
    } else if (strcmp(resp, "ES") == 0){
        printf("Capixaba.");
    } else {
        printf("natural da sua cidade, mas ainda n�o sei como te chamar!");
    }
}
