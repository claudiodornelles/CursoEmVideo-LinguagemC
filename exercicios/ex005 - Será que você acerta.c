#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int n_pc = (rand() % 5) + 1; // Gera um n�mero aleat�rio e mostra o resto da divis�o por 5, que pode ser 0, 1, 2, 3 e 4, depois soma 1.
    int n_usuario;

    printf("<<< EX005 - Ser� que voc� acerta? >>>\n");
    printf("\nVou pensar em um n�mero entre 1 e 5.");
    printf("\nQual � o seu palpite? ");
    scanf("%d", &n_usuario);
    printf("Eu pensei no n�mero %d e voc� pensou no n�mero %d.", n_pc, n_usuario);
}
