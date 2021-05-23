#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int n_pc = rand() % 5;
    int n_usuario;

    printf("<<< EX005 - Será que você acerta? >>>\n");
    printf("\nVou pensar em um número entre 0 e 5.");
    printf("\nQual é o seu palpite? ");
    scanf("%d", &n_usuario);
    printf("Eu pensei no número %d e você pensou no número %d.", n_pc, n_usuario);
}
