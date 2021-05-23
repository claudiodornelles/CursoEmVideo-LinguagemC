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
    %e  notação
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
    printf("Digite um número inteiro: ");
    scanf("%d", &num); // & define que você irá acessar o endereço da variável - O que o scanf ler, ele vai guardar no endereço da variável.
    printf("Digite um número real: ");
    scanf("%f", &real);
    printf("\nVocê acabou de digitar os números %d e %.2f.\n", num, real);
    printf("\nVocê deseja informar mais números? [S/N]");
    fflush(stdin); // Comando para limpar o buffer
    /* resposta = getchar(); -> Comando para leitura de UM ÚNICO CARACTERE */
    scanf("%c", &resposta);
    } while (resposta == "S");
    printf("\nQual é o seu nome? ");
    fflush(stdin);
    /* scanf("%s", nome); -> scanf padrão não deixa colocar espaços, ele lê somente até o primeiro espaço */
    gets(nome); // comando específico para pegar entrada de strings
    /* COM O GETS NÃO PRECISA LIMPAR O BUFFER */
    printf("Obrigado, %s! Volte sempre.", nome);
}
