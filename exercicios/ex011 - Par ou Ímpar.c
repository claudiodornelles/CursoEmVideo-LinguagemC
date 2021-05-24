#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("<<< EX011 - Par ou Ímpar >>>\n");
    printf("\nDigite um número inteiro qualquer: ");
    scanf("%i", &num);
    printf("O número que você digitou é %s!", (num%2!=0)?"ÍMPAR":"PAR");
}
