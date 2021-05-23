#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    // ENTRADA DE DADOS //
    /*
    %d  int
    %f  float/double
    %c  char
    %s  string
    %e  nota��o
    %hd short int
    %ld long int
    %hu unsigned short
    %u  unsigned
    %lu unsigned long
     */

    int num;
    float real;
    char resposta;
    char nome[30];

    do{
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num); // & define que voc� ir� acessar o endere�o da vari�vel - O que o scanf ler, ele vai guardar no endere�o da vari�vel.
    printf("Digite um n�mero real: ");
    scanf("%f", &real);
    printf("\nVoc� acabou de digitar os n�meros %d e %.2f.\n", num, real);
    printf("\nVoc� deseja informar mais n�meros? [S/N]");
    fflush(stdin); // Comando para limpar o buffer
    /* resposta = getchar(); -> Comando para leitura de UM �NICO CARACTERE */
    scanf("%c", &resposta);
    } while (resposta == "S");
    printf("\nQual � o seu nome? ");
    fflush(stdin);
    /* scanf("%s", nome); -> scanf padr�o n�o deixa colocar espa�os, ele l� somente at� o primeiro espa�o */
    gets(nome); // comando espec�fico para pegar entrada de strings
    /* COM O GETS N�O PRECISA LIMPAR O BUFFER */
    printf("Obrigado, %s! Volte sempre.", nome);
}
